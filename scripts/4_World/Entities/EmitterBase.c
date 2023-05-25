class EmitterBase : Building
{
    protected int m_ParticleId = -1;
    protected Particle m_ParticleEfx;

    void EmitterBase()
    {
        if (!GetGame().IsMultiplayer() || GetGame().IsClient())
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.StartParticle, 500, false);
    }

    void StartParticle()
    {
        if (m_ParticleEfx) return;
        m_ParticleEfx = Particle.Play(m_ParticleId, GetPosition());
    }

    override void EEDelete(EntityAI parent)
    {
        if ((!GetGame().IsMultiplayer() || GetGame().IsClient()) && m_ParticleEfx)
            m_ParticleEfx.Stop();
    }

    override void EOnInit(IEntity other, int extra)
    {
        if (GetGame().IsServer())
            SetSynchDirty();
    }
}
