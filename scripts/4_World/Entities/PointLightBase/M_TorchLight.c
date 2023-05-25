// Underground -> has to give light even if it's not night
modded class TorchLight
{
    void TorchLight()
    {
        SetVisibleDuringDaylight(true);
    }
}