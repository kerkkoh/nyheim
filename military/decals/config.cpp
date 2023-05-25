//////////////////////////////////////////////////////////////
// DayZ Config Generator: \trerik4\military\decals
// Produced from Kerkkoh's DayZ Config Generator version 1.0.0
// https://github.com/kerkkoh/dayzconfiggen
// 'now' is 09/11/2021, 20:01:37
//////////////////////////////////////////////////////////////
class CfgPatches
{
    class generated_decals
    {
        units[] = { "Land_biological_decal", "Land_cbrn_research_decal", "Land_chemical_decal", "Land_nuclear_decal" };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = { "DZ_Data" };
    };
};
class CfgVehicles
{
	class HouseNoDestruct;
    class Land_biological_decal: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_biological_decal";
        descriptionShort = "Autogenerated class Land_biological_decal";
        model = "trerik4\military\decals\biological_decal.p3d";
    };
    class Land_cbrn_research_decal: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_cbrn_research_decal";
        descriptionShort = "Autogenerated class Land_cbrn_research_decal";
        model = "trerik4\military\decals\cbrn_research_decal.p3d";
    };
    class Land_chemical_decal: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_chemical_decal";
        descriptionShort = "Autogenerated class Land_chemical_decal";
        model = "trerik4\military\decals\chemical_decal.p3d";
    };
    class Land_nuclear_decal: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_nuclear_decal";
        descriptionShort = "Autogenerated class Land_nuclear_decal";
        model = "trerik4\military\decals\nuclear_decal.p3d";
    };
};