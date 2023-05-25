// Logic original, by Kerkkoh 2020, shared with HunterzCZ on 12/22/2020 for AirRaid mod improvements <3
/*class Land_train : BuildingSuper
{
    protected bool m_active;
    protected float speed;
    protected float acceleration;
    protected int simulation_counter;
    protected ref TrainTrack m_track;
    protected int target_pole_number;
    protected bool forward;

    const int MAX_SPEED = 15.0;
    // How often should we consider changing direction
    const int SIMULATION_DENSITY = 5;
    // How close is close enough to a pole
    const float POLE_RADIUS = 0.25;

    const bool DEBUG = false;

	void Land_train()
	{
		SetEventMask( EntityEvent.CONTACT | EntityEvent.SIMULATE );

        m_active = false;
        speed = 0.0;
        acceleration = 0.0;
        simulation_counter = 0;
        target_pole_number = 1;
        forward = true;
	}

	override void EOnSimulate( IEntity owner, float dt )
	{
		if (!GetGame().IsServer()) return;
        if (m_active && m_track) Move(dt);
	}

    // Returns either NULL or the pole @ target_pole_number
    Pole GetTargetPole()
    {
        if (!m_track || target_pole_number > m_track.Count() - 1 || target_pole_number < 0) return NULL;
        else return m_track.Get(target_pole_number);
    }

    Pole GetNextPole()
    {
        if (forward) target_pole_number++;
        else target_pole_number--;
        return GetTargetPole();
    }

    void UpdateGeometry(vector pos, vector dir, float dt)
    {
        if (!GetGame().IsServer()) return;

        vector mat[4];
        GetTransform(mat);
        mat[3] = pos;
        mat[2] = dir;
        MoveInTime(mat, dt);
    }

    // Stops the train for a certain period of time
    void Timeout(int amount)
    {
        m_active = false;
        acceleration = 0.0;
        speed = 0.0;
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.SetActive, amount, false, true);
    }

    void Move(float dt)
    {
        simulation_counter++;

        vector pos = GetPosition();
        vector dir = GetDirection();
        vector unit_dir = dir.Normalized();

        Pole target_pole = GetTargetPole();
        if (!target_pole)
        {
            m_active = false;
            return;
        }

        float distance_to_target = vector.Distance(pos, target_pole.m_position);

        // Get next pole if we have reached current pole
        if (distance_to_target <= POLE_RADIUS)
        {
            int timeout = target_pole.m_timeout;
            target_pole = GetNextPole();

            if (target_pole)
            {
                if (timeout > 0)
                {
                    Timeout(timeout);
                    return;
                }
            }
            else
            {
                if (forward) target_pole_number--;
                else target_pole_number++;
                forward = !forward;

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

        // Steer towards the current pole
        vector new_direction = vector.Lerp(vector.Direction(pos, target_pole.m_position), dir, 0.85).Normalized();
        if (simulation_counter > SIMULATION_DENSITY)
            simulation_counter = 0;
        // SetDirection(new_direction);

        vector velocity = unit_dir * (speed * dt);
        vector new_pos = pos + velocity;
        // SetPosition(new_pos);
        UpdateGeometry(new_pos, new_direction, dt);
    }

    void SetTrack(TrainTrack track)
    {
        if (track)
        {
            m_track = track;
            target_pole_number = 1;
        }
    }

    TrainTrack GetTrack() { return m_track; }

    void SetActive(bool active)
    {
        // Only activate if we have a known track
        if (m_track)
            m_active = active;
    }

    bool GetActive() { return m_active; }

    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionStartTrain);
    }
}*/

/*
class Land_train : BuildingSuper
{
    protected bool m_active;
    protected float speed;
    protected float acceleration;
    protected int simulation_counter;
    protected ref TrainTrack m_track;
    protected int target_pole_number;
    protected bool forward;

    const int MAX_SPEED = 15.0;
    // How often should we consider changing direction
    const int SIMULATION_DENSITY = 5;
    // How close is close enough to a pole
    const float POLE_RADIUS = 0.25;

    const bool DEBUG = false;

    void Land_train()
    {
        // SetEventMask( EntityEvent.CONTACT | EntityEvent.SIMULATE );
        
        m_active = false;
        speed = 0.0;
        acceleration = 0.0;
        simulation_counter = 0;
        target_pole_number = 1;
        forward = true;
    }

    // Returns either NULL or the pole @ target_pole_number
    Pole GetTargetPole()
    {
        if (!m_track || target_pole_number > m_track.Count() - 1 || target_pole_number < 0) return NULL;
        else return m_track.Get(target_pole_number);
    }

    Pole GetNextPole()
    {
        if (forward) target_pole_number++;
        else target_pole_number--;

        return GetTargetPole();
    }

    void UpdateGeometry(vector pos, vector dir, float dt)
    {
        if (!GetGame().IsServer()) return;

        vector mat[4];
        GetTransform( mat );
        mat[3] = pos;
        mat[2] = dir;
        MoveInTime( mat, dt );
    }

    // Stops the train for a certain period of time
    void Timeout(int amount)
    {
        m_active = false;
        acceleration = 0.0;
        speed = 0.0;
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.SetActive, amount, false, true);
    }

    void Move(float dt)
    {
        simulation_counter++;

        vector pos = GetPosition();
        vector dir = GetDirection();
        vector unit_dir = dir.Normalized();

        Pole target_pole = GetTargetPole();
        if (!target_pole)
        {
            m_active = false;
            return;
        }

        float distance_to_target = vector.Distance(pos, target_pole.m_position);
        if (simulation_counter > SIMULATION_DENSITY)
        {
            if (DEBUG) Print("### distance_to_target         " + distance_to_target);
        }

        // Get next pole if we have reached current pole
        if (distance_to_target <= POLE_RADIUS)
        {
            int timeout = target_pole.m_timeout;
            target_pole = GetNextPole();

            if (target_pole)
            {
                if (DEBUG) Print("## Changing target pole to " + target_pole_number);
                if (timeout > 0)
                {
                    if (DEBUG) Print("## Waiting at old pole for " + timeout);
                    Timeout(timeout);
                    return;
                }
            }
            else
            {
                if (DEBUG) Print("## Train has reached its end point! Reversing in 5s!");

                if (forward) target_pole_number--;
                else target_pole_number++;
                forward = !forward;

                Timeout(timeout);
                return;
            }
        }

        // Try to achive the target speed of target_pole
        acceleration = (target_pole.m_target_speed - speed) / distance_to_target;

        if (DEBUG && simulation_counter > SIMULATION_DENSITY)
        {
            Print("### target_pole.m_target_speed " + target_pole.m_target_speed);
            Print("### speed                      " + speed);
            Print("### acceleration               " + acceleration);
        }

        // Change our speed according to acceleration
        auto new_speed = speed + (acceleration * dt);
        if (Math.AbsFloat(new_speed) <= MAX_SPEED)
            speed = new_speed;

        // Steer towards the current pole
        vector new_direction = new_direction = vector.Lerp(vector.Direction(pos, target_pole.m_position), dir, 0.85);
        if (simulation_counter > SIMULATION_DENSITY)
            simulation_counter = 0;
        // SetDirection(new_direction);

        vector velocity = unit_dir * (speed * dt);
        vector new_pos = pos + velocity;
        // SetPosition(new_pos);
        UpdateGeometry(new_pos, new_direction, dt);
    }

    void SetTrack(TrainTrack track)
    {
        if (track)
        {
            m_track = track;
            target_pole_number = 1;
        }
        else
        {
            if (DEBUG) Print("### Tried to set NULL track for: ");
            if (DEBUG) Print(this);
        }
    }

    TrainTrack GetTrack() { return m_track; }

    void SetActive(bool active)
    {
        // Only activate if we have a known track
        if (m_track)
            m_active = active;
        else
        {
            if (DEBUG) Print("### No track defined for: ");
            if (DEBUG) Print(this);
        }
    }

    bool GetActive() { return m_active; }

    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionStartTrain);
    }
}

*/