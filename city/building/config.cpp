class CfgPatches
{
	class trerik4_building
	{
		units[] = { "Land_bigcity_1", "Land_building", "Land_ladder", "Land_mjolnir", "Land_statebuilding", "Land_typehouse", "Land_typehouse_brown", "Land_typehouse_green", "Land_typehouse_yellow" };
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
    class Land_typehouse: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_typehouse";
        descriptionShort = "Autogenerated class Land_typehouse";
        model = "trerik4\city\building\typehouse.p3d";
		class Doors
		{
			class Door1
			{
				displayName = "Door 1";
				component = "door1";
				soundPos = "door1_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorWoodFrontOpen";
				soundClose = "doorWoodFrontClose";
				soundLocked = "doorWoodFrontRattle";
				soundOpenABit = "doorWoodFrontOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health { damage = 0; };
					class Blood { damage = 0; };
					class Shock { damage = 0; };
				};
				class Melee
				{
					class Health { damage = 0; };
					class Blood { damage = 0; };
					class Shock { damage = 0; };
				};
			};
			class DamageZones
			{
				class Door1
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"door1"};
					fatalInjuryCoef = -1;
					class ArmorType
					{
						class Projectile
						{
							class Health { damage = 2; };
							class Blood { damage = 0; };
							class Shock { damage = 0; };
						};
						class Melee
						{
							class Health { damage = 2.5; };
							class Blood { damage = 0; };
							class Shock { damage = 0; };
						};
					};
				};
			};
		};
    };
    class Land_typehouse_brown: Land_typehouse
    {
        scope = 2;
        displayName = "Land_typehouse_brown";
        descriptionShort = "Autogenerated class Land_typehouse_brown";
        model = "trerik4\city\building\typehouse_brown.p3d";
    };
    class Land_typehouse_green: Land_typehouse
    {
        scope = 2;
        displayName = "Land_typehouse_green";
        descriptionShort = "Autogenerated class Land_typehouse_green";
        model = "trerik4\city\building\typehouse_green.p3d";
    };
    class Land_typehouse_shell: Land_typehouse
    {
        scope = 2;
        displayName = "Land_typehouse_shell";
        descriptionShort = "Autogenerated class Land_typehouse_shell";
        model = "trerik4\city\building\typehouse_shell.p3d";
    };
    class Land_typehouse_yellow: Land_typehouse
    {
        scope = 2;
        displayName = "Land_typehouse_yellow";
        descriptionShort = "Autogenerated class Land_typehouse_yellow";
        model = "trerik4\city\building\typehouse_yellow.p3d";
    };
    class Land_bigcity_1: Land_typehouse
    {
        scope = 2;
        displayName = "Land_bigcity_1";
        descriptionShort = "Autogenerated class Land_bigcity_1";
        model = "trerik4\city\building\bigcity_1.p3d";
    };
    class Land_bigcity_2: Land_typehouse
    {
        scope = 2;
        displayName = "Land_bigcity_2";
        descriptionShort = "Autogenerated class Land_bigcity_2";
        model = "trerik4\city\building\bigcity_2.p3d";
    };
    class Land_ladder: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_ladder";
        descriptionShort = "Autogenerated class Land_ladder";
        model = "trerik4\city\building\ladder.p3d";
    };
    class Land_mjolnir: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_mjolnir";
        descriptionShort = "Autogenerated class Land_mjolnir";
        model = "trerik4\city\building\mjolnir.p3d";
    };
    class Land_statebuilding: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_statebuilding";
        descriptionShort = "Autogenerated class Land_statebuilding";
        model = "trerik4\city\building\statebuilding.p3d";
    };
};