modded class EffVomitBlood
{
	void EffVomitBlood()
	{
		// Print("TRERIK :: EffVomitBlood");
		SetParticleID(ParticleList.TRK_VOMIT_BLOOD);
	}
	override void Event_OnPlayStarted()
	{
		vector pos = GetGame().GetPlayer().GetPosition();
		vector ori = GetGame().GetPlayer().GetOrientation();
		Particle p = Particle.Play(ParticleList.BLOOD_SURFACE_CHUNKS, pos);
		p.SetOrientation(ori);
	}
}
