/*
* Snow doesn't make people wet
modded class Environment
{
    override protected float GetWetDelta()
    {
        float wet_delta = 0.0;
        if ( !IsWaterContact() && IsRaining() && !IsInsideBuilding() && !IsUnderRoof() )
        {
			return wet_delta;
        }
        else
        {
			return super.GetWetDelta();
        }
    }
}
*/