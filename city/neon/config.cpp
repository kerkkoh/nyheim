class CfgPatches
{
	class trerik4_neon
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgNonAIVehicles
{
	class StaticObject;
	class Static_Neon_Sign : StaticObject
	{
		scope = 2;
		model = "trerik4\city\neon\neon_sign.p3d";
	};
	class Static_Neon_Stick : StaticObject
	{
		scope = 2;
		model = "trerik4\city\neon\neon_stick.p3d";
	};
};
