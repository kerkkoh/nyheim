/**
	NVG handler for the underground system
*/
#ifdef UNDERGROUND_SYSTEM
modded class DayZPlayerCameraBase
{
	override void SetNVPostprocess(int NVtype)
	{
        PlayerBase player = PlayerBase.Cast(m_pPlayer);
		super.SetNVPostprocess(NVtype);
		
		switch (NVtype)
		{
			case NVTypes.NONE:
			case NVTypes.NV_GOGGLES_OFF:
			case NVTypes.NV_OPTICS_OFF:
			{
				player.m_applyNVGEyeAcc = false;
				UndergroundSystem ugsys = new UndergroundSystem();
				ugsys.OnUpdate(1.0);
			}
			break;
			case NVTypes.NV_OPTICS_KAZUAR_NIGHT:
			case NVTypes.NV_OPTICS_STARLIGHT_NIGHT:
			case NVTypes.NV_OPTICS_ON:
			case NVTypes.NV_OPTICS_KAZUAR_DAY:
			case NVTypes.NV_OPTICS_STARLIGHT_DAY:
			case NVTypes.NV_GOGGLES:
			{
				player.m_applyNVGEyeAcc = true;
			}
			break;
		}
	}
}
#endif
