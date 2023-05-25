modded class DayZPlayerImplement
{
	override void OnParticleEvent(string pEventType, string pUserString, int pUserInt)
	{
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
			if (pUserInt == 123456)
			{
				PlayerBase player = PlayerBase.Cast(this);
				int boneIdx = player.GetBoneIndexByName("Head");

				if (boneIdx != -1)
				{
					EffVomitBlood eff = new EffVomitBlood();
					vector player_pos = player.GetPosition();
					eff.SetDecalOwner(player);
					SEffectManager.PlayInWorld(eff, "0 0 0");
					Particle p = eff.GetParticle();
					player.AddChild(p, boneIdx);
				}
			}
		}
	}
}
