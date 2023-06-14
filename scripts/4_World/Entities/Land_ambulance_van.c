/**
    This can be uncommented to enable ambient sounds for the ambulance van.
*/

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
        // 1 in 100 chance of playing the sounds
        if (Math.RandomInt(0, 100) == 0)
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
