/*class Land_missile_launcher : BuildingSuper
{
	protected int m_ActiveMissileSpawn;
    protected int m_MissileSpawnsCount;
    autoptr array<string> m_MissileSpawns;
	protected vector m_FallbackSpawnPoint;

	protected vector m_MissileAxis[2];

	void Land_missile_launcher()
	{
		// Print("####### Land_missile_launcher #######");
		m_ActiveMissileSpawn = -1;
		m_FallbackSpawnPoint = vector.Zero;
        m_MissileSpawns	= new array<string>;
        m_MissileSpawnsCount = 0;

		if( MemoryPointExists( "missileAxis0" ) && MemoryPointExists( "missileAxis1" ) )
		{
			m_MissileAxis[0] = GetMemoryPointPos( "missileAxis0" );
			m_MissileAxis[1] = GetMemoryPointPos( "missileAxis1" );
		}
		else
		{
			Error( GetType() + " is missing at least one of the required memory points missileAxis0 and missileAxis1." );
			m_MissileAxis[0] = "0 0 0";
			m_MissileAxis[1] = "0 0 0";
		}

		string configPath = "CfgVehicles" + " " + GetType() + " " + "missileSpawns";

        GetGame().ConfigGetTextArray( configPath, m_MissileSpawns );
        m_MissileSpawnsCount = m_MissileSpawns.Count();

        if ( m_MissileSpawnsCount == 0 )
        {
            Error( GetType() + " either doesn't have a 'missileSpawns' array of memory point names or the array is empty. Has to be non-empty and exist." );
        }
	}

	void PlayMissileSound()
	{
		GetRPCManager().SendRPC( "Trerik", "PlaySound", new Param1< string >("Missile_launch_SoundSet"), false, NULL, this );
	}

    vector GetAxisDirection()
    {
        vector axisPoint0 = ModelToWorld( m_MissileAxis[0] );
        vector axisPoint1 = ModelToWorld( m_MissileAxis[1] );
        
        vector dir = vector.Zero;

        dir[0] = axisPoint1[0] - axisPoint0[0];
        dir[1] = axisPoint1[1] - axisPoint0[1];
        dir[2] = axisPoint1[2] - axisPoint0[2];

        return dir.Normalized();
    }
 */
	/**
  	\brief Gets the next spawnpoint for a missile (local position)
	  	   from the 'missileSpawns' config entry
	*//* 
	vector GetNextMissileSpawnPos()
	{
        if ( m_MissileSpawnsCount == 0 ) {
            return m_FallbackSpawnPoint;
        }

		m_ActiveMissileSpawn++;
		m_ActiveMissileSpawn = m_ActiveMissileSpawn % m_MissileSpawnsCount;

		string missileSpawn = m_MissileSpawns.Get( m_ActiveMissileSpawn );
		if ( !MemoryPointExists( missileSpawn ) )
		{
			Error( GetType() + " model is missing a 'missileSpawns' memory point called: " + missileSpawn );
			return m_FallbackSpawnPoint;
		}

		return GetMemoryPointPos( missileSpawn );
	}

    override void SetActions() {
        super.SetActions();
        AddAction(ActionLaunchMissile);
    }
}
