//////////////////////////////////////////////////////////////
// DayZ Config Generator: trerik4\city\bag
// Produced from Kerkkoh's DayZ Config Generator version 1.0.1
// https://github.com/kerkkoh/dayzconfiggen
// 'now' is 10/11/2021, 16:01:59
// `py config_generator.py -o P:\ P:\trerik4\city\bag`
//////////////////////////////////////////////////////////////
class CfgPatches
{
    class trerik4_bag
    {
        units[] = { "Land_body", "Land_body1", "Land_body2", "Land_body_norope", "Land_body_research", "Land_bodybag" };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = { "DZ_Data" };
    };
};
class CfgVehicles
{
	class HouseNoDestruct;
    class Land_body: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_body";
        descriptionShort = "Autogenerated class Land_body";
        model = "trerik4\city\bag\body.p3d";
    };
    class Land_body1: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_body1";
        descriptionShort = "Autogenerated class Land_body1";
        model = "trerik4\city\bag\body1.p3d";
    };
    class Land_body2: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_body2";
        descriptionShort = "Autogenerated class Land_body2";
        model = "trerik4\city\bag\body2.p3d";
    };
    class Land_body_norope: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_body_norope";
        descriptionShort = "Autogenerated class Land_body_norope";
        model = "trerik4\city\bag\body_norope.p3d";
    };
    class Land_body_research: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_body_research";
        descriptionShort = "Autogenerated class Land_body_research";
        model = "trerik4\city\bag\body_research.p3d";
    };
    class Land_bodybag: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_bodybag";
        descriptionShort = "Autogenerated class Land_bodybag";
        model = "trerik4\city\bag\bodybag.p3d";
    };
};