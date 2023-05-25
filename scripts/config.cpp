class CfgPatches
{
	class trerik4_scripts
	{
		name = "Nyheim";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Scripts", "DZ_Structures_Industrial", "DZ_Structures_Residential", "DZ_Gear_Containers"};
	};
};

class CfgMods
{
	class trerik4_scripts
	{
		dir = "trerik4";
		name = "Nyheim";
		credits = "Kerkkoh";
		author = "Kerkkoh";
		version = "1.0";
		extra = 0;
		type = "mod";
		inputs = "trerik4/scripts/inputs.xml";
		dependencies[] = {"Game", "World", "Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"trerik4/scripts/Defines", "trerik4/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"trerik4/scripts/Defines", "trerik4/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"trerik4/scripts/Defines", "trerik4/scripts/5_Mission"};
			};
		};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class Land_train : HouseNoDestruct
	{
		scope = 2;
		displayName = "Land_train";
		descriptionShort = "Just a Land_train";
		model = "dz\structures\wrecks\Trains\Train_742_Red.p3d";
	};
};

class CfgNonAIVehicles
{
	class BushHard;
	class BushHard_t_PiceaAbies_1s: BushHard
	{
		isCuttable = 1;
		primaryDropsAmount = 1;
		secondaryDropsAmount = 1;
		toolDamage = 4.0;
		cycleTimeOverride = 2;
		primaryOutput = "LongWoodenStick";
		secondaryOutput = "WoodenStick";
	};
	class BushHard_t_PiceaAbies_1sb: BushHard
	{
		isCuttable = 1;
		primaryDropsAmount = 1;
		secondaryDropsAmount = 1;
		toolDamage = 4.0;
		cycleTimeOverride = 2;
		primaryOutput = "LongWoodenStick";
		secondaryOutput = "WoodenStick";
	};
};