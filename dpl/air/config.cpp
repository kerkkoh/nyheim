class CfgPatches
{
	class trerik4_DPL_Air
	{
		units[] = {"Land_F35B", "Land_UH60M"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_F35B: HouseNoDestruct
	{
		scope = 2;
		displayName = "Land_F35B";
		descriptionShort = "Just a Land_F35B";
		model = "trerik4\dpl\air\f35b.p3d";
	};
	class Land_UH60M: HouseNoDestruct
	{
		scope = 2;
		displayName = "Land_UH60M";
		descriptionShort = "Just a Land_UH60M";
		model = "trerik4\dpl\air\UH60M.p3d";
	};
};
