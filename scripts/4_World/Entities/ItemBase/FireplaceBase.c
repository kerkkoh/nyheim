
#ifdef UNDERGROUND_SYSTEM
// Underground -> has to give light even if it's not night
modded class FireplaceBase
{
    override void RefreshFireplaceVisuals()
	{
		super.RefreshFireplaceVisuals();
        if (GetGame().IsDedicatedServer()) return;

        auto light = GetLightEntity();
        if (light && !light.IsVisibleDuringDaylight()) {
            auto ugSystem = new UndergroundSystem();
            if (ugSystem.IsUnderground(GetPosition()))
                light.SetVisibleDuringDaylight(true);
        }
	}
}
#endif
