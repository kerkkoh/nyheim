class CfgPatches
{
    class trerik4_city_sheds
    {
        units[] = { "Land_New_Shed_W1" };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = { "DZ_Data" };
    };
};
class CfgVehicles
{
	class HouseNoDestruct;
    class Land_New_Shed_W1: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_New_Shed_W1";
        descriptionShort = "Autogenerated class Land_New_Shed_W1";
        model = "trerik4\city\sheds\New_Shed_W1.p3d";
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
};