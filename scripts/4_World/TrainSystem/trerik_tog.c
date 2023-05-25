class trerik_tog extends OffroadHatchback
{
    const int MAX_SPEED = 20.0;
    // How close is close enough to a pole
    const float POLE_RADIUS = 0.45;
    const bool DEBUG = false;
    const float SIMULATION_DENSITY = 4.0;
    const float SOUND_LOOP_LENGTH = 3.1;

    protected bool m_active;
    protected float speed;
    protected float acceleration;
    protected ref TrainTrack m_track;
    protected int target_pole_number;
    protected bool forward;
    protected vector m_motionDirection;
    protected float m_initial_target_distance;
    protected EffectSound effect_sound;
    protected float simulation_counter = 0;
    protected float sound_loop_counter = SOUND_LOOP_LENGTH - 2.0;
    protected Pole current_stop;

    void trerik_tog()
    {
        dBodySetInteractionLayer(this, PhxInteractionLayers.CHARACTER);
        m_dmgContactCoef = 0.060;

        m_active = false;
        speed = 0.0;
        acceleration = 0.0;
        target_pole_number = 1;
        forward = true;
    }
    override float GetActionDistanceFuel()
    {
        return 3.2;
    }
    override float GetActionDistanceCoolant()
    {
        return 3.2;
    }
    override float GetActionDistanceOil()
    {
        return 3.2;
    }
    override int GetAnimInstance()
    {
        return VehicleAnimInstances.HATCHBACK;
    }
    override CarRearLightBase CreateRearLight()
    {
        return CarRearLightBase.Cast(ScriptedLightBase.CreateLight(togRearLight));
    }
    override CarLightBase CreateFrontLight()
    {
        return CarLightBase.Cast(ScriptedLightBase.CreateLight(togFrontLight));
    }
    override void OnStoreSave(ParamsWriteContext ctx)
    {
        //Print("### trerik_tog::OnStoreSave ###");
        return;
    }
    override bool OnStoreLoad(ParamsReadContext ctx, int version)
    {
        //Print("### trerik_tog::OnStoreLoad ###");
        if (this) this.Delete();
        return false;
    }

    override void EOnSimulate(IEntity owner, float dt)
    {
        if (!GetGame().IsServer()) return;
        if (m_track) Move(dt);
    }

    // Returns either NULL or the pole @ target_pole_number
    Pole GetTargetPole()
    {
        if (!m_track || target_pole_number > m_track.Count() - 1 || target_pole_number < 0) return NULL;

        auto target = m_track.Get(target_pole_number);
        m_initial_target_distance = vector.Distance(GetPosition(), target.m_position);
        return target;
    }

    Pole GetNextPole()
    {
        if (forward) target_pole_number++;
        else target_pole_number--;
        return GetTargetPole();
    }

    void SetCurrentStop()
    {
        int idx;
        if (forward)
        {
            idx = target_pole_number - 1;
        }
        else
        {
            idx = target_pole_number + 1;
        }
        current_stop = m_track.Get(idx);
    }

    void Hop(float dt)
    {
        vector transform[4];
        GetTransform(transform);

        vector linImpulseWS; // world space
        vector angImpulseWS; // world space
        vector linImpulseMS; // model space
        vector angImpulseMS; // model space

        vector impulse = Vector(0, 10, 0) * dBodyGetMass(this) * dt; // force to apply
        vector center = Vector(0, 0, 0); // model space position where the force is applied

        linImpulseMS += impulse;
        angImpulseMS += center * impulse;

        linImpulseWS = linImpulseMS.Multiply3(transform); // convert impulse from model space to world space
        angImpulseWS = angImpulseMS.Multiply3(transform);

        dBodyApplyImpulse(this, linImpulseWS);
        dBodyApplyTorqueImpulse(this, angImpulseWS);
    }

    void UpdateGeometry(vector pos, vector dir, float dt)
    {
        if (!GetGame().IsServer()) return;

        vector ori = GetOrientation();
        ori[1] = 0;
        ori[2] = 0;
        SetOrientation(ori);

        dir[1] = 0.0;

        vector mat[4];
        GetTransform(mat);
        mat[3] = pos;
        mat[2] = dir;
        dBodySetTargetMatrix(this, mat, dt);
    }

    // Stops the train for a certain period of time
    void Timeout(int amount)
    {
        m_active = false;
        acceleration = 5.0;
        speed = 0.0;
        GetRPCManager().SendRPC("Trerik", "PlaySound", new Param1<string>("Train_Stop_SoundSet"), false, NULL, this);
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.PlayWarningAndSetActive, amount, false);
    }

    void PlaySoundLoop(float dt)
    {
        sound_loop_counter += dt;
        if (sound_loop_counter >= SOUND_LOOP_LENGTH)
        {
            GetRPCManager().SendRPC("Trerik", "PlaySound", new Param1<string>("Train_Loop_SoundSet"), false, NULL, this);
            sound_loop_counter = 0.0;
        }
    }

    vector m_initialDirection = "0 0 0";
    void Move(float dt)
    {
        if (!m_active && current_stop)
        {
            UpdateGeometry(current_stop.m_position, GetDirection().Normalized(), dt);
            return;
        }

        simulation_counter += dt;

        PlaySoundLoop(dt);

        vector pos = GetPosition();
        Pole target_pole = GetTargetPole();
        if (!target_pole)
        {
            m_active = false;
            return;
        }

        float distance_to_target = vector.Distance(pos, target_pole.m_position);

        // Unstuck procedure (the train has a tendency to get confused if it bumps into things or gets derailed lol)
        if (distance_to_target > m_initial_target_distance || speed < 0.0001)
        {
            vector unstuck_position = target_pole.m_position;
            vector unstuck_dir = GetDirection();

            int prev_or_next = -1;
            if (target_pole_number > 0)
                prev_or_next = target_pole_number - 1;
            else if (target_pole_number < 0)
                prev_or_next = target_pole_number + 1;

            if (prev_or_next != -1)
            {
                unstuck_dir = vector.Direction(pos, target_pole.m_position);
                if (!forward) unstuck_dir = (-1) * unstuck_dir;
            }

            SetPosition(unstuck_position);
            SetDirection(unstuck_dir);
            UpdateGeometry(unstuck_position, unstuck_dir, dt);
            Update();
            distance_to_target = POLE_RADIUS;
        }

        // Get next pole if we have reached current pole
        if (distance_to_target <= POLE_RADIUS)
        {
            int timeout = target_pole.m_timeout;
            target_pole = GetNextPole();

            if (target_pole)
            {
                if (timeout > 0)
                {
                    SetCurrentStop();
                    Timeout(timeout);
                    return;
                }
                distance_to_target = vector.Distance(pos, target_pole.m_position);
            }
            else
            {
                SetCurrentStop();
                if (forward)
                {
                    target_pole_number -= 2;
                }
                else
                {
                    target_pole_number += 2;
                }
                forward = !forward;
                m_motionDirection = (-1) * GetDirection();

                Timeout(timeout);
                return;
            }
        }

        // Try to achive the target speed of target_pole
        acceleration = (target_pole.m_target_speed - speed) / distance_to_target;

        // Change our speed according to acceleration
        auto new_speed = speed + (acceleration * dt);
        if (Math.AbsFloat(new_speed) <= MAX_SPEED)
            speed = new_speed;

        float interp_factor = 1 - (distance_to_target / m_initial_target_distance);
        // Steer towards the current pole
        m_motionDirection = vector.Lerp(vector.Direction(pos, target_pole.m_position), m_motionDirection, interp_factor).Normalized();

        m_motionDirection[1] = Math.Max(m_motionDirection[1], 0.0);

        vector velocity = m_motionDirection * (speed * dt);
        vector new_pos = pos + velocity;
        vector new_direction = m_motionDirection;
        if (!forward)
        {
            new_direction = vector.Lerp(vector.Direction(target_pole.m_position, pos), (-1) * m_motionDirection, interp_factor).Normalized();
            // new_direction = ((-1) * m_motionDirection).Normalized();
        }
        UpdateGeometry(new_pos, new_direction, dt); // m_initialDirection

        if (DEBUG && simulation_counter > SIMULATION_DENSITY)
        {
            simulation_counter = 0.0;
            Print("### trerik_tog::Move ###");
            Print(target_pole_number);
            Print(target_pole.m_target_speed);
            Print(distance_to_target);
            Print(acceleration);
            Print(speed);
            Print(m_motionDirection);
            Print(new_direction);
            Print(new_pos);
            Print("### ### ###");
        }
    }

    void SetTrack(TrainTrack track)
    {
        if (track)
        {
            m_track = track;
            target_pole_number = 1;
            SetCurrentStop();
        }
    }

    TrainTrack GetTrack() { return m_track; }

    void PlayWarningAndSetActive()
    {
        GetRPCManager().SendRPC("Trerik", "PlaySound", new Param1<string>("Train_Warning_SoundSet"), false, NULL, this);
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.SetActive, 5000, false, true);
    }

    void SetActive(bool active)
    {
        if (m_track)
        {
            if (active)
            {
                GetRPCManager().SendRPC("Trerik", "PlaySound", new Param1<string>("Train_Start_SoundSet"), false, NULL, this);
                current_stop = NULL;
                m_motionDirection = GetDirection();
                m_initialDirection = GetDirection();
            }
            else
            {
                GetRPCManager().SendRPC("Trerik", "PlaySound", new Param1<string>("Train_Stop_SoundSet"), false, NULL, this);
                acceleration = 0.0;
                speed = 0.0;
            }
            m_active = active;
        }
    }

    bool GetActive() { return m_active; }

    override void OnContact(string zoneName, vector localPos, IEntity other, Contact data)
    {
        UpdateHeadlightState();
        UpdateLights();
    }

    override bool CanReachSeatFromDoors(string pSeatSelection, vector pFromPos, float pDistance = 1.0)
    {
        return true;
    }

    override bool CanReachSeatFromSeat(int currentSeat, int nextSeat)
    {
        return true;
    }

    override bool CanReachDoorsFromSeat(string pDoorsSelection, int pCurrentSeat)
    {
        return true;
    }

    override bool CrewCanGetThrough(int posIdx)
    {
        return true;
    }

    override void SetActions()
    {
        AddAction(ActionGetInTransport);
    }

    override bool IsInventoryVisible()
    {
        return false;
    }

    override bool CanDisplayCargo()
    {
        return false;
    }

    override float GetTransportCameraDistance()
    {
        return 12.0;
    }

    override int GetSeatAnimationType(int posIdx)
    {
        switch (posIdx)
        {
            case 0:
                return DayZPlayerConstants.VEHICLESEAT_DRIVER;
            case 1:
                return DayZPlayerConstants.VEHICLESEAT_CODRIVER;
            case 2:
                return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
            default:
                return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
        }

        return 0;
    }
}
