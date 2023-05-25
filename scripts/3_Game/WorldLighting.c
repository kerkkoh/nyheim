/* modded class WorldLighting
{
	string lighting[2] = { "trerik4\\extra\\lighting\\lighting_darknight.txt", "trerik4\\extra\\lighting\\lighting_default.txt" };

	override void SetGlobalLighting(int lightingID)
	{
		// Print("TRERIK WorldLighting : Setting to " + lighting[lightingID]);
		if (lightingID > -1 && lightingID < 2)
		{
			GetGame().GetWorld().LoadNewLightingCfg(lighting[lightingID]);
		}
		else
		{
			Error("Unknown global lighting ID received from the server.");
		}
	}
}
 */