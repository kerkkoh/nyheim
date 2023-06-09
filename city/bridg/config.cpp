//////////////////////////////////////////////////////////////
// DayZ Config Generator: \trerik4\city
// Produced from Kerkkoh's DayZ Config Generator version 1.0.0
// https://github.com/kerkkoh/dayzconfiggen
// 'now' is 02/08/2021, 22:18:40
//////////////////////////////////////////////////////////////
class CfgPatches
{
    class trerik_bridg
    {
        units[] = { "Land_bridg25", "Land_bridg25_notbased", "Land_bridg25_notbased_left", "Land_bridg25_notbased_left_exit", "Land_bridg25_notbased_right", "Land_bridg25_notbased_right_exit" };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = { "DZ_Data" };
    };
};
class CfgVehicles
{
	class HouseNoDestruct;
    class Land_bridg25: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_bridg25";
        descriptionShort = "Autogenerated class Land_bridg25";
        model = "trerik4\city\bridg\bridg25.p3d";
    };
    class Land_bridg25_notbased: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_bridg25_notbased";
        descriptionShort = "Autogenerated class Land_bridg25_notbased";
        model = "trerik4\city\bridg\bridg25_notbased.p3d";
    };
    class Land_bridg25_notbased_left: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_bridg25_notbased_left";
        descriptionShort = "Autogenerated class Land_bridg25_notbased_left";
        model = "trerik4\city\bridg\bridg25_notbased_left.p3d";
    };
    class Land_bridg25_notbased_left_exit: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_bridg25_notbased_left_exit";
        descriptionShort = "Autogenerated class Land_bridg25_notbased_left_exit";
        model = "trerik4\city\bridg\bridg25_notbased_left_exit.p3d";
    };
    class Land_bridg25_notbased_right: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_bridg25_notbased_right";
        descriptionShort = "Autogenerated class Land_bridg25_notbased_right";
        model = "trerik4\city\bridg\bridg25_notbased_right.p3d";
    };
    class Land_bridg25_notbased_right_exit: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_bridg25_notbased_right_exit";
        descriptionShort = "Autogenerated class Land_bridg25_notbased_right_exit";
        model = "trerik4\city\bridg\bridg25_notbased_right_exit.p3d";
    };
};