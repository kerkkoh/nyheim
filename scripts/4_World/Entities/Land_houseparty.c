class Land_houseparty : AmbientSoundBase
{
    string m_houseparty_soundsets[6] = {
        "Trerik_Ambience_Houseparty1_SoundSet",
        "Trerik_Ambience_Houseparty2_SoundSet",
        "Trerik_Ambience_Houseparty3_SoundSet",
        "Trerik_Ambience_Houseparty4_SoundSet",
        "Trerik_Ambience_Houseparty5_SoundSet",
        "Trerik_Ambience_Houseparty6_SoundSet"
    };

    override void PlayAmbience(string what)
    {
        SEffectManager.PlaySound(m_houseparty_soundsets[Math.RandomIntInclusive(0, 4)], GetPosition()).SetSoundAutodestroy(true);
    }
}
