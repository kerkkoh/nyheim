// Underground -> has to give light even if it's not night
modded class ChemlightLight
{
    void ChemlightLight()
    {
        SetVisibleDuringDaylight(true);
    }
}