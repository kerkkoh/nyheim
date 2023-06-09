//////////////////////////////////////////////////////////////
// DayZ Config Generator: P:\trerik4\city\underground
// Produced from Kerkkoh's DayZ Config Generator version 1.0.1
// https://github.com/kerkkoh/dayzconfiggen
// 'now' is 01/20/2022, 21:37:24
// `py config_generator.py -d -o F:\DayZ P:\trerik4\city\underground`
//////////////////////////////////////////////////////////////
class CfgPatches
{
    class trerik4_underground
    {
        units[] = { "Land_Maintenence_10m90BendLeft", "Land_Maintenence_10m90BendRight", "Land_Maintenence_10mStraight", "Land_Maintenence_90L_left", "Land_Maintenence_90L_right", "Land_Maintenence_Cap", "Land_Maintenence_Cross", "Land_Maintenence_FillerPiece", "Land_Maintenence_Room_Medium", "Land_Maintenence_Surface_Entrance", "Land_Maintenence_Surface_StreetLevel", "Land_Maintenence_Tunnel_Entrance", "Land_TrainTunnel_10mStraight", "Land_TrainTunnel_10mStraight_Entrance", "Land_TrainTunnel_10m_90BendLeft", "Land_TrainTunnel_10m_90BendRight", "Land_TrainTunnel_20mStraightSlope" };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = { "DZ_Data" };
    };
};
class CfgVehicles
{
	class HouseNoDestruct;
    class Land_Maintenence_10m90BendLeft: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_Maintenence_10m90BendLeft";
        descriptionShort = "Autogenerated class Land_Maintenence_10m90BendLeft";
        model = "trerik4\city\underground\Maintenence_10m90BendLeft.p3d";
    };
    class Land_Maintenence_10m90BendRight: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_Maintenence_10m90BendRight";
        descriptionShort = "Autogenerated class Land_Maintenence_10m90BendRight";
        model = "trerik4\city\underground\Maintenence_10m90BendRight.p3d";
    };
    class Land_Maintenence_10mStraight: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_Maintenence_10mStraight";
        descriptionShort = "Autogenerated class Land_Maintenence_10mStraight";
        model = "trerik4\city\underground\Maintenence_10mStraight.p3d";
    };
    class Land_Maintenence_90L_left: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_Maintenence_90L_left";
        descriptionShort = "Autogenerated class Land_Maintenence_90L_left";
        model = "trerik4\city\underground\Maintenence_90L_left.p3d";
    };
    class Land_Maintenence_90L_right: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_Maintenence_90L_right";
        descriptionShort = "Autogenerated class Land_Maintenence_90L_right";
        model = "trerik4\city\underground\Maintenence_90L_right.p3d";
    };
    class Land_Maintenence_Cap: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_Maintenence_Cap";
        descriptionShort = "Autogenerated class Land_Maintenence_Cap";
        model = "trerik4\city\underground\Maintenence_Cap.p3d";
    };
    class Land_Maintenence_Cross: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_Maintenence_Cross";
        descriptionShort = "Autogenerated class Land_Maintenence_Cross";
        model = "trerik4\city\underground\Maintenence_Cross.p3d";
    };
    class Land_Maintenence_FillerPiece: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_Maintenence_FillerPiece";
        descriptionShort = "Autogenerated class Land_Maintenence_FillerPiece";
        model = "trerik4\city\underground\Maintenence_FillerPiece.p3d";
    };
    class Land_Maintenence_Room_Medium: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_Maintenence_Room_Medium";
        descriptionShort = "Autogenerated class Land_Maintenence_Room_Medium";
        model = "trerik4\city\underground\Maintenence_Room_Medium.p3d";
    };
    class Land_Maintenence_Surface_Entrance: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_Maintenence_Surface_Entrance";
        descriptionShort = "Autogenerated class Land_Maintenence_Surface_Entrance";
        model = "trerik4\city\underground\Maintenence_Surface_Entrance.p3d";
    };
    class Land_Maintenence_Surface_StreetLevel: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_Maintenence_Surface_StreetLevel";
        descriptionShort = "Autogenerated class Land_Maintenence_Surface_StreetLevel";
		model = "trerik4\city\underground\Maintenence_Surface_StreetLevel.p3d";
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
				soundOpen = "doorMetalSlideHeavyOpen";
				soundClose = "doorMetalSlideHeavyClose";
				soundLocked = "doorMetalSlideHeavyRattle";
				soundOpenABit = "doorMetalSlideHeavyOpenABit";
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
						hitpoints = 1000000;
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
    class Land_Maintenence_Tunnel_Entrance: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_Maintenence_Tunnel_Entrance";
        descriptionShort = "Autogenerated class Land_Maintenence_Tunnel_Entrance";
        model = "trerik4\city\underground\Maintenence_Tunnel_Entrance.p3d";
    };
    class Land_TrainTunnel_10mStraight: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_TrainTunnel_10mStraight";
        descriptionShort = "Autogenerated class Land_TrainTunnel_10mStraight";
        model = "trerik4\city\underground\TrainTunnel_10mStraight.p3d";
    };
    class Land_TrainTunnel_10mStraight_Entrance: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_TrainTunnel_10mStraight_Entrance";
        descriptionShort = "Autogenerated class Land_TrainTunnel_10mStraight_Entrance";
        model = "trerik4\city\underground\TrainTunnel_10mStraight_Entrance.p3d";
    };
    class Land_TrainTunnel_10m_90BendLeft: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_TrainTunnel_10m_90BendLeft";
        descriptionShort = "Autogenerated class Land_TrainTunnel_10m_90BendLeft";
        model = "trerik4\city\underground\TrainTunnel_10m_90BendLeft.p3d";
    };
    class Land_TrainTunnel_10m_90BendRight: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_TrainTunnel_10m_90BendRight";
        descriptionShort = "Autogenerated class Land_TrainTunnel_10m_90BendRight";
        model = "trerik4\city\underground\TrainTunnel_10m_90BendRight.p3d";
    };
    class Land_TrainTunnel_20mStraightSlope: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_TrainTunnel_20mStraightSlope";
        descriptionShort = "Autogenerated class Land_TrainTunnel_20mStraightSlope";
        model = "trerik4\city\underground\TrainTunnel_20mStraightSlope.p3d";
    };
};