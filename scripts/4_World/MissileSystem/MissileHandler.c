/* class MissileHandler
{
	autoptr array<ref Missile> m_missiles;

	void MissileHandler()
	{
		m_missiles = new array<ref Missile>();
	}

	void OnUpdate( float timeslice )
	{
		for ( int i = 0; i < m_missiles.Count(); i++ )
		{
			auto missile = m_missiles.Get( i );

			if ( !missile )
			{
				m_missiles.Remove( i );
				continue;
			}

			if ( missile.GetActive() )
			{
				auto newY = missile.Propel( timeslice );
				// Print("MissileHandler " + newY);
				// if ( ( newY < 0.0 ) )
				// {
				//	m_missiles.Remove( i );
				// 	missile.Delete();
				// }
			}
		}
	}
}

static ref MissileHandler g_MissileHandler;
static ref MissileHandler GetMissileHandler()
{
    if ( !g_MissileHandler )
        g_MissileHandler = new ref MissileHandler();
    return g_MissileHandler;
}
 */