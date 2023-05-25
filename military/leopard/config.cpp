class CfgPatches
{
	class trerik4_leopard
	{
		units[] = {"Land_Leopard"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Leopard: HouseNoDestruct
	{
		scope = 2;
		displayName = "Land_Leopard";
		descriptionShort = "Just a Land_Leopard";
		model = "trerik4\military\leopard\leopard.p3d";
	};
};
