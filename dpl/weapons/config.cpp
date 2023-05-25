class CfgPatches
{
	class trerik4_DPL_Weapons
	{
		units[] = {"Land_m119"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_m119: HouseNoDestruct
	{
		scope = 2;
		displayName = "Land_m119";
		descriptionShort = "Just a Land_m119";
		model = "trerik4\dpl\weapons\m119.p3d";
	};
};
