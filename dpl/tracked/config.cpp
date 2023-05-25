class CfgPatches
{
	class trerik4_DPL_Tracked
	{
		units[] = {"Land_BMP2"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_BMP2: HouseNoDestruct
	{
		scope = 2;
		displayName = "Land_BMP2";
		descriptionShort = "Just a Land_BMP2";
		model = "trerik4\dpl\tracked\BMP2.p3d";
	};
};
