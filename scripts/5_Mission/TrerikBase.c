enum SoundEmitter
{
	Houseparty,
	Underground,
	Ambulance
}

class TrerikBase
{
#ifdef UNDERGROUND_SYSTEM
	ref UndergroundSystem m_ugSystem;
#endif
	ref Timer m_soundScapeTimer;
	bool m_toggleMapSounds = true;
	int m_soundInterval = 600;

	void TrerikBase()
	{
		GetRPCManager().AddRPC("Trerik", "PlaySound", this, SingeplayerExecutionType.Client);
		GetRPCManager().AddRPC("Trerik", "SoundScapeAmbience", this, SingeplayerExecutionType.Client);
		// GetRPCManager().AddRPC("Trerik", "FlyingCarSync", this, SingeplayerExecutionType.Client);
		m_soundScapeTimer = new Timer;
#ifdef UNDERGROUND_SYSTEM
		m_ugSystem = new UndergroundSystem();
#endif
	}

	void ~TrerikBase()
	{
#ifdef UNDERGROUND_SYSTEM
		if (m_ugSystem) delete m_ugSystem;
#endif
		if (m_soundScapeTimer) delete m_soundScapeTimer;
	}

	void InitTrain()
	{
		if (!GetGame().IsServer()) return;
		trerik_tog train = trerik_tog.Cast(SpawnVehicle("trerik_tog", "2059.939697 55.2 2542.053467", "107.021 0.0 0.0"));
		dBodyEnableGravity(train, false);
		TrainTrack track = new TrainTrack();
		track.Insert(new Pole("2059.939697 55.2 2542.053467", 0.0, 10000));
		track.Insert(new Pole("2070.912354 55.2 2538.707275", 4.0, 0));
		track.Insert(new Pole("2084.398193 55.2 2534.584229", 8.0, 0));
		track.Insert(new Pole("2161.385498 55.2 2511.024658", 20.0, 0));
		track.Insert(new Pole("2317.373047 55.2 2463.261719", 15.0, 0));
		track.Insert(new Pole("2352.578857 55.2 2452.49292", 4.0, 0));
		track.Insert(new Pole("2363.482422 55.2 2449.165527", 0.0, 10000));
		track.Insert(new Pole("2374.192383 55.2 2445.893555", 4.0, 0));
		track.Insert(new Pole("2408.383057 55.2 2435.362549", 15.0, 0));
		track.Insert(new Pole("2451.437012 55.2 2422.204346", 20.0, 0));
		track.Insert(new Pole("2652.965088 55.2 2360.508057", 15.0, 0));
		track.Insert(new Pole("2763.633789 55.2 2326.670166", 6.0, 0));
		track.Insert(new Pole("2778.122803 55.2 2322.055664", 4.0, 0));
		track.Insert(new Pole("2786.404053 55.2 2318.820801", 4.0, 0));
		track.Insert(new Pole("2790.91748 55.2 2316.303711", 4.0, 0));
		track.Insert(new Pole("2796.188477 55.2 2313.007813", 4.0, 0));
		track.Insert(new Pole("2807.280029 55.2 2304.875", 4.0, 0));
		track.Insert(new Pole("2823.1560 55.2 2292.863", 0.0, 10000));
		track.Insert(new Pole("2842.922979 55.2 2278.239258", 4.0, 0));
		track.Insert(new Pole("2891.405029 55.2 2242.044922", 15.0, 0));
		track.Insert(new Pole("2950.543213 55.2 2197.931152", 8.0, 0));
		track.Insert(new Pole("2959.808105 55.2 2191.088379", 4.0, 0));
		track.Insert(new Pole("2963.93457 55.2 2188.279541", 4.0, 0));
		track.Insert(new Pole("2968.828857 55.2 2185.237061", 4.0, 0));
		track.Insert(new Pole("2973.648193 55.2 2182.439453", 4.0, 0));
		track.Insert(new Pole("2979.180908 55.2 2179.567139", 4.0, 0));
		track.Insert(new Pole("2984.267578 55.2 2177.135986", 4.0, 0));
		track.Insert(new Pole("2989.883545 55.2 2174.531494", 4.0, 0));
		track.Insert(new Pole("3000.464111 55.2 2170.674561", 8.0, 0));
		track.Insert(new Pole("3040.756104 55.2 2157.849121", 4.0, 0));
		track.Insert(new Pole("3051.684326 55.2 2154.338623", 0.0, 10000));
		track.Insert(new Pole("3059.772705 55.2 2151.764648", 4.0, 0));
		track.Insert(new Pole("3083.570068 55.2 2144.181152", 8.0, 0));
		track.Insert(new Pole("3107.38208 55.2 2136.633301", 15.0, 0));
		track.Insert(new Pole("3131.188477 55.2 2129.015381", 15.0, 0));
		track.Insert(new Pole("3154.968506 55.2 2121.422607", 20.0, 0));
		track.Insert(new Pole("3184.164063 55.2 2112.16626", 20.0, 0));
		track.Insert(new Pole("3198.576172 55.2 2107.565918", 20.0, 0));
		track.Insert(new Pole("3213.827881 55.2 2102.821045", 20.0, 0));
		track.Insert(new Pole("3226.476074 55.2 2098.794924", 15.0, 0));
		track.Insert(new Pole("3250.293457 55.2 2091.204592", 15.0, 0));
		track.Insert(new Pole("3297.921387 55.2 2076.031984", 15.0, 0));
		track.Insert(new Pole("3321.73291 55.2 2068.443117", 8.0, 0));
		track.Insert(new Pole("3335.838867 55.2 2063.362551", 6.0, 0));
		track.Insert(new Pole("3342.333984 55.2 2059.832277", 4.0, 0));
		track.Insert(new Pole("3349.075684 55.2 2055.440676", 4.0, 0));
		track.Insert(new Pole("3354.154786 55.2 2051.370363", 4.0, 0));
		track.Insert(new Pole("3359.660889 55.2 2045.841188", 4.0, 0));
		track.Insert(new Pole("3364.248291 55.2 2039.973022", 4.0, 0));
		track.Insert(new Pole("3368.45166 55.2 2032.771729", 0.0, 10000));

		GetTrainHandler().m_trains.Insert(train);
		train.SetTrack(track);
		train.SetActive(true);
	}

	void OnInit()
	{
		if (GetGame().IsServer() || !GetGame().IsMultiplayer())
		{
			m_soundScapeTimer.Run(m_soundInterval, this, "InvokeSoundScape", NULL, true);
			// Train is disabled
			// InitTrain();
		}
	}

	bool ToggleMapSounds()
	{
		m_toggleMapSounds = !m_toggleMapSounds;
		return m_toggleMapSounds;
	}

	void MessagePlayer(string msg)
	{
		if (GetGame().IsClient())
			GetGame().GetMission().OnEvent(ChatMessageEventTypeID, new ChatMessageEventParams(CCAdmin, "[Nyheim]", msg, ""));
	}

	void PlaySound(CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target)
	{
		Param1<string> data;
		if (!ctx.Read(data)) return;

		if ((!GetGame().IsMultiplayer() || GetGame().IsClient()) && target && data && data.param1)
		{
			SEffectManager.PlaySoundOnObject(data.param1, target);
		}
	}

	// Sends sound commands to the client from the server
	void InvokeSoundScape()
	{
		Print("TRERIK::InvokeSoundScape");
		// GetRPCManager().SendRPC("Trerik", "SoundScapeAmbience", new Param1<SoundEmitter>(SoundEmitter.Houseparty));
		// GetRPCManager().SendRPC("Trerik", "SoundScapeAmbience", new Param1<SoundEmitter>(SoundEmitter.Underground));
		/* if (Math.RandomInt(0, 10) == 0)
        {
			GetRPCManager().SendRPC("Trerik", "SoundScapeAmbience", new Param1<SoundEmitter>(SoundEmitter.Houseparty));
		} */
		if (Math.RandomInt(0, 10) == 0)
		{
			GetRPCManager().SendRPC("Trerik", "SoundScapeAmbience", new Param1<SoundEmitter>(SoundEmitter.Underground));
		}
	}

	// Plays sound on the client
	void SoundScapeAmbience(CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target)
	{
		Param1<SoundEmitter> data;
		if (!ctx.Read(data) || !m_toggleMapSounds) return;

		Print("TRERIK::SoundScapeAmbience " + data.param1);

		switch (data.param1)
		{
			case SoundEmitter.Houseparty:
				{
					Print("TRERIK::SoundScapeAmbience > Land_houseparty");
					Land_houseparty.m_AmbienceTick.Invoke("");
				}
				break;
			case SoundEmitter.Underground:
				{
					Print("TRERIK::SoundScapeAmbience > Land_sewer_10_tcross");
					Land_sewer_10_tcross.m_AmbienceTick.Invoke("");
				}
				break;
				/* case SoundEmitter.Ambulance:
				{
					//Land_ambulance_van.m_AmbienceTick.Invoke("Trerik_Ambience_City1_SoundSet");
				}
				break; */
		}
	}

	/*void FlyingCarSync(CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target)
	{
		Param5<float, float, float, float, bool> data;
		if (!ctx.Read(data)) return;
		Hatchback_02.Cast(target).SetThrust(data.param1, data.param2, data.param3, data.param4);
		Hatchback_02.Cast(target).SetFlyingMode(data.param5);
	}*/

	Object SpawnObject(string objectName, vector position, vector orientation)
	{
		if (!GetGame().IsServer()) return NULL;

		Object obj;
		obj = Object.Cast(GetGame().CreateObject(objectName, "0 0 0"));
		obj.SetPosition(position);
		obj.SetOrientation(orientation);

		return obj;
	}

	EntityAI SpawnVehicle(string objectName, vector position, vector orientation)
	{
		EntityAI ent;
		Class.CastTo(ent, GetGame().CreateObjectEx(objectName, position, ECE_PLACE_ON_SURFACE));
		ent.SetPosition(position);
		ent.SetOrientation(orientation);

		return ent;
	}

	void OnUpdate(float timeslice)
	{
		if (!GetGame().IsMultiplayer() || GetGame().IsServer())
		{
			// GetMissileHandler().OnUpdate(timeslice);
			// GetTrainHandler().OnUpdate(timeslice);
		}
#ifdef UNDERGROUND_SYSTEM
		else if (m_ugSystem)
		{
			m_ugSystem.OnUpdate(timeslice);
		}
#endif
	}
}
