modded class VicinityItemManager
{
    override bool IsObstructed(Object filtered_object)
    {
        if (filtered_object.CanUseConstruction() && DoorBase.Cast(filtered_object))
        {
            return false;
        } else {
            return super.IsObstructed(filtered_object);
        }
    }
}
