class Land_sewer_10_tcross : AmbientSoundBase
{
    string m_soundsets[2] = {
        "Trerik_Ambience_Underground1_SoundSet",
        "Trerik_Ambience_Underground2_SoundSet",
    };

    override void PlayAmbience(string what)
    {
        auto sound = m_soundsets[Math.RandomIntInclusive(0, 1)];
        Print("TRERIK::Land_sewer_10_tcross:PlayAmbience" + sound);
        SEffectManager.PlaySound(sound, GetPosition()).SetSoundAutodestroy(true);
    }
}