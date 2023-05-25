class AmbientSoundBase : BuildingSuper
{
    static ref ScriptInvoker m_AmbienceTick = new ScriptInvoker;

    void AmbientSoundBase()
    {
        m_AmbienceTick.Insert(PlayAmbience);
    }

    void ~AmbientSoundBase()
    {
        if (m_AmbienceTick)
            m_AmbienceTick.Remove(PlayAmbience);
    }

    void PlayAmbience(string what)
    {
        SEffectManager.PlaySound(what, GetPosition()).SetSoundAutodestroy(true);
    }
}