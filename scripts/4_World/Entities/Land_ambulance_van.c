/*class Land_ambulance_van : AnimatedTextureBuildingSuper
{
    static ref ScriptInvoker m_AmbienceTick = new ScriptInvoker;

    void Land_ambulance_van()
    {
        m_AmbienceTick.Insert(PlayAmbience);
    }

    void ~Land_ambulance_van()
    {
        if (m_AmbienceTick)
            m_AmbienceTick.Remove(PlayAmbience);
    }

    void PlayAmbience(string what)
    {
        if (Math.RandomInt(0, 50) == 0)
        {
            SEffectManager.PlaySound(what, GetPosition()).SetSoundAutodestroy(true);
        }
    }
    override void Init()
    {
        if (Math.RandomInt(0, 4) == 0)
        {
            super.Init();
        }
    }
}*/
