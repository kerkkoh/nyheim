class CfgPatches
{
	class trerik4_submarine
	{
		units[] = {"Land_sub"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class Land_sub: HouseNoDestruct
	{
		scope = 2;
		displayName = "Land_sub";
		descriptionShort = "Just a Land_sub";
		model = "trerik4\military\sub\sub.p3d";
	};
};
