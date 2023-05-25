class Missile : M18SmokeGrenade_White
{
	protected bool m_active;
	protected float speed;
	protected float acceleration;
	protected float vspeed;
	protected float vacceleration;
	protected int counter;
	protected vector prev_pos;
	// protected Particle m_ParticleSmoke;
/*
	void Missile()
	{
		SetParticleSmokeStart(ParticleList.TRK_MISSILE_PARTICLE);
		m_active = false;
		speed = 0.07*10;
		acceleration = 0.005*10;
		vspeed = 0.0;
		vacceleration = -0.00003;//-0.000;
		counter = 0;
		
		if ( MemoryPointExists( "smoke" ) )
		{
			m_ParticlePosition = GetMemoryPointPos( "smoke" );
		}

		Unpin();
		CreateLight();
	}*/

	void Missile()
	{
		SetParticleSmokeStart(ParticleList.TRK_MISSILE_PARTICLE);
		SetFuseDelay(2);
		// m_ParticleSmoke = Particle.PlayOnObject(ParticleList.TRK_MISSILE_PARTICLE, this, vector.Zero, vector.Zero, true);
		m_active = false;

		int massInKg = GetGame().ConfigGetFloat("CfgVehicles" + " " + GetType() + " " + "weight")/1000;

		speed = 150.0;
		acceleration = 300.0;
		vspeed = 0.0;
		vacceleration = -9.81/280.0 * massInKg;
		counter = 0;
		
		if ( MemoryPointExists( "smoke" ) )
		{
			m_ParticlePosition = GetMemoryPointPos( "smoke" );
		}

		Unpin();
		CreateLight();

		// Print("#### Missile flight parameters");
		// Print(massInKg);
		// Print(speed);
		// Print(acceleration);
		// Print(vacceleration);
		// Print("#### Missile flight parameters");
	}

	/*override void EEDelete(EntityAI parent)
	{
		SoundSmokeStop();
		DestroyParticle(m_ParticleSmoke);
	}*/

	float Propel( float dt )
	{
		if ( speed < 240.0 )
			speed += acceleration*dt;

		vector pos = GetPosition();
		vector dir = GetDirection().Normalized();

		if ( counter == 0 )
		{
			prev_pos = pos;
		}

		counter++;
		// Get new direction (rotation) for the object
		// based on the previous and the new location
		if ( counter > 10 )
		{
			vector new_dir = "0 0 0";
			new_dir[0] = pos[0] - prev_pos[0];
			new_dir[1] = pos[1] - prev_pos[1];
			new_dir[2] = pos[2] - prev_pos[2];
			SetDirection( new_dir.Normalized() );
			counter = 0;
		}

		dir = dir * (speed * dt);
		pos = pos + dir;

		vspeed += vacceleration * dt;
		pos[1] = pos[1] + vspeed * dt;

		SetPosition(pos);

		return pos[1];
	}

	void SetActive(bool active)
	{
		m_active = active;
	}

	bool GetActive()
	{
		return m_active;
	}

	/**
  	\brief Bad missile flight simulation
	*//*
	float Propel()
	{
		if (speed < 1.2)
			speed += acceleration;

		vector pos = GetPosition();
		vector dir = GetDirection();

		if (counter == 0)
		{
			prev_pos = pos;
		}
		
		counter++;
		if (counter > 10)
		{
			vector new_dir = "0 0 0";
			new_dir[0] = pos[0] - prev_pos[0];
			new_dir[1] = pos[1] - prev_pos[1];
			new_dir[2] = pos[2] - prev_pos[2];
			SetDirection(new_dir);
			counter = 0;
		}

		dir = dir * 1.0;
		pos = pos + dir;

		vspeed += vacceleration;
		pos[1] = pos[1] + vspeed;

		SetPosition(pos);

		return pos[1];
	}*/
}
