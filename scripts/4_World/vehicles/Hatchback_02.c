/*
*
*	IF YOU EVER WANT FLYING CARS, THIS DOES THAT :)
*

modded class Hatchback_02
{
    void ApplyEpicForce(vector force, float dt)
    {
        vector transform[4];
        GetTransform( transform );

        vector linImpulseMS;
        vector angImpulseMS;

        vector impulse = force * dBodyGetMass( this ) * dt; // force to apply
        vector center = "0 0 0"; // dBodyGetCenterOfMass( this ) model space position where the force is applied

        linImpulseMS += impulse;
        angImpulseMS += center * impulse;

        vector linImpulseWS = linImpulseMS.Multiply3( transform ); // convert impulse from model space to world space
        vector angImpulseWS = angImpulseMS.Multiply3( transform );

        dBodyApplyImpulse( this, linImpulseWS );
        dBodyApplyTorqueImpulse( this, angImpulseWS );
    }

	float counteri = 0.0;
	float maxcounteri = 0.5;

	float up_thrust = 0.85;
	float x_thrust = 0.0;
	float y_thrust = 0.0;
	float z_thrust = 0.0;
	bool m_flyMode = false;
	const float UP_THRUST_STEP = 0.01;
	const float THRUST_STEP = 0.02;

	void SetThrust(float x, float y, float z, float up)
	{
		up_thrust = up;
		x_thrust = x;
		y_thrust = y;
		z_thrust = z;
	}

	void SetFlyingMode(bool mode)
	{
		if (m_flyMode != mode)
			m_flyMode = mode;
	}

	override void OnUpdate(float dt)
	{
		super.OnUpdate(dt);
		if (GetGame().IsServer() || !EngineIsOn() || CrewMember(0) != Human.Cast(GetGame().GetPlayer())) return;

		float prev_up_thrust = up_thrust;
		float prev_x_thrust = x_thrust;
		float prev_y_thrust = y_thrust;
		float prev_z_thrust = z_thrust;
		bool prev_m_flyMode = m_flyMode;

		if (KeyState(KeyCode.KC_NUMPAD7) == 1)
		{
			m_flyMode = !m_flyMode;
			ClearKey(KeyCode.KC_NUMPAD7);
		}

		if (m_flyMode) {
			counteri += dt;
			// up/down
			float up_step = UP_THRUST_STEP;
			if (up_thrust < 0.9)
				up_step = up_step * 2;
			if (KeyState(KeyCode.KC_LSHIFT) == 1)
			{
				up_thrust = Math.Min(1.3, up_thrust + up_step);
			} else if (KeyState(KeyCode.KC_LCONTROL) == 1)
			{
				up_thrust = Math.Max(0.0, up_thrust - up_step);
			}

			// yaw
			if (KeyState(KeyCode.KC_X) == 1)
			{
				x_thrust = Math.Min(1.0, x_thrust + THRUST_STEP);
			} else if (KeyState(KeyCode.KC_Z) == 1)
			{
				x_thrust = Math.Max(-1.0, x_thrust - THRUST_STEP);
			} else {
				if (x_thrust < 0) x_thrust += THRUST_STEP;
				else if (x_thrust > 0) x_thrust -= THRUST_STEP;
			}

			// pitch
			if (KeyState(KeyCode.KC_S) == 1)
			{
				y_thrust = Math.Min(1.0, y_thrust + THRUST_STEP);
			} else if (KeyState(KeyCode.KC_W) == 1)
			{
				y_thrust = Math.Max(-1.0, y_thrust - THRUST_STEP);
			} else {
				if (y_thrust < 0) y_thrust += THRUST_STEP;
				else if (y_thrust > 0) y_thrust -= THRUST_STEP;
			}

			// roll
			if (KeyState(KeyCode.KC_D) == 1)
			{
				z_thrust = Math.Min(1.0, z_thrust + THRUST_STEP);
			} else if (KeyState(KeyCode.KC_A) == 1)
			{
				z_thrust = Math.Max(-1.0, z_thrust - THRUST_STEP);
			} else {
				if (z_thrust < 0) z_thrust += THRUST_STEP;
				else if (z_thrust > 0) z_thrust -= THRUST_STEP;
			}
		}
		
		if (x_thrust < THRUST_STEP && x_thrust > -THRUST_STEP) x_thrust = 0;
		if (y_thrust < THRUST_STEP && y_thrust > -THRUST_STEP) y_thrust = 0;
		if (z_thrust < THRUST_STEP && z_thrust > -THRUST_STEP) z_thrust = 0;

		if (prev_up_thrust != up_thrust || prev_x_thrust != x_thrust || prev_y_thrust != y_thrust || prev_z_thrust != z_thrust || prev_m_flyMode != m_flyMode)
		{
			GetRPCManager().SendRPC( "Trerik", "FlyingCarSync", new Param5< float, float, float, float, bool >(x_thrust, y_thrust, z_thrust, up_thrust, m_flyMode), false, NULL, this );
			if (counteri >= maxcounteri && m_flyMode)
			{
				counteri = 0.0;
				GetGame().GetMission().OnEvent(ChatMessageEventTypeID, new ChatMessageEventParams(CCAdmin, "", "thrust: " + up_thrust + " yaw: " + x_thrust + " pitch: " + y_thrust + " roll: " + z_thrust, ""));
			}
		}
	}

	override void EOnSimulate(IEntity owner, float dt)
	{
		if (!GetGame().IsServer() || !EngineIsOn() || !m_flyMode) return;
		counteri += dt;

		vector ori = GetOrientation();
		float yaw = ori[0] + x_thrust*4;
		float pitch = ori[1] + y_thrust*2;
		float roll = ori[2] + z_thrust*2;
		SetOrientation(Vector(yaw, pitch, roll));

		vector up = "0 0 0";//GetDirection();
		//up[0] = up[0] * x_thrust;
		up[1] = 10 * up_thrust;
		//up[2] = up[2] * y_thrust;
		if (up_thrust > 0.0) ApplyEpicForce(up, dt);
	}
}
*/
