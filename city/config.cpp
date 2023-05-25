//////////////////////////////////////////////////////////////
// DayZ Config Generator: P:\trerik4\city
// Produced from Kerkkoh's DayZ Config Generator version 1.0.1
// https://github.com/kerkkoh/dayzconfiggen
// 'now' is 01/20/2022, 21:49:08
// `py config_generator.py -d -o F:\DayZ P:\trerik4\city`
//////////////////////////////////////////////////////////////
class CfgPatches
{
    class trerik4_city
    {
        units[] = { "Land_alarm", "Land_alarm_control", "Land_asph_line", "Land_chair", "Land_divider", "Land_dumpster", "Land_egg_easter", "Land_egg_snowred", "Land_egg_tkt", "Land_elec_box", "Land_elec_box2", "Land_empty_light", "Land_fire", "Land_fire_hydrant", "Land_highrise_shadow", "Land_hockeyrink", "Land_houseparty", "Land_metalfence_large_withbase", "Land_metalfence_small", "Land_mirror", "Land_parkingmeter", "Land_road_barrier1", "Land_road_barrier2", "Land_screen", "Land_sewer_cover", "Land_shutoff_plate", "Land_sidewalk_nolc", "Land_smoke", "Land_smoke_large", "Land_steam", "Land_table", "Land_tank", "Land_tank1", "Land_terrace", "Land_umbrella", "Land_underground_noises", "Land_window", "Land_wip" };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = { "DZ_Data" };
    };
};
class CfgVehicles
{
	class HouseNoDestruct;
    class Land_alarm: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_alarm";
        descriptionShort = "Autogenerated class Land_alarm";
        model = "trerik4\city\alarm.p3d";
    };
    class Land_alarm_control: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_alarm_control";
        descriptionShort = "Autogenerated class Land_alarm_control";
        model = "trerik4\city\alarm_control.p3d";
    };
    class Land_asph_line: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_asph_line";
        descriptionShort = "Autogenerated class Land_asph_line";
        model = "trerik4\city\asph_line.p3d";
    };
    class Land_chair: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_chair";
        descriptionShort = "Autogenerated class Land_chair";
        model = "trerik4\city\chair.p3d";
    };
    class Land_divider: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_divider";
        descriptionShort = "Autogenerated class Land_divider";
        model = "trerik4\city\divider.p3d";
    };
    class Land_dumpster: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_dumpster";
        descriptionShort = "Autogenerated class Land_dumpster";
        model = "trerik4\city\dumpster.p3d";
    };
    class Land_egg_easter: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_egg_easter";
        descriptionShort = "Autogenerated class Land_egg_easter";
        model = "trerik4\city\egg_easter.p3d";
    };
    class Land_egg_snowred: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_egg_snowred";
        descriptionShort = "Autogenerated class Land_egg_snowred";
        model = "trerik4\city\egg_snowred.p3d";
    };
    class Land_egg_tkt: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_egg_tkt";
        descriptionShort = "Autogenerated class Land_egg_tkt";
        model = "trerik4\city\egg_tkt.p3d";
    };
    class Land_elec_box: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_elec_box";
        descriptionShort = "Autogenerated class Land_elec_box";
        model = "trerik4\city\elec_box.p3d";
    };
    class Land_elec_box2: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_elec_box2";
        descriptionShort = "Autogenerated class Land_elec_box2";
        model = "trerik4\city\elec_box2.p3d";
    };
    class Land_empty_light: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_empty_light";
        descriptionShort = "Autogenerated class Land_empty_light";
        model = "trerik4\city\empty_light.p3d";
    };
    class Land_fire: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_fire";
        descriptionShort = "Autogenerated class Land_fire";
        model = "trerik4\city\fire.p3d";
    };
    class Land_fire_hydrant: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_fire_hydrant";
        descriptionShort = "Autogenerated class Land_fire_hydrant";
        model = "trerik4\city\fire_hydrant.p3d";
    };
    class Land_highrise_shadow: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_highrise_shadow";
        descriptionShort = "Autogenerated class Land_highrise_shadow";
        model = "trerik4\city\highrise_shadow.p3d";
    };
    class Land_hockeyrink: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_hockeyrink";
        descriptionShort = "Autogenerated class Land_hockeyrink";
        model = "trerik4\city\hockeyrink.p3d";
    };
    class Land_houseparty: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_houseparty";
        descriptionShort = "Autogenerated class Land_houseparty";
        model = "trerik4\city\houseparty.p3d";
    };
    class Land_metalfence_large_withbase: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_metalfence_large_withbase";
        descriptionShort = "Autogenerated class Land_metalfence_large_withbase";
        model = "trerik4\city\metalfence_large_withbase.p3d";
    };
    class Land_metalfence_small: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_metalfence_small";
        descriptionShort = "Autogenerated class Land_metalfence_small";
        model = "trerik4\city\metalfence_small.p3d";
    };
    class Land_mirror: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_mirror";
        descriptionShort = "Autogenerated class Land_mirror";
        model = "trerik4\city\mirror.p3d";
    };
    class Land_parkingmeter: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_parkingmeter";
        descriptionShort = "Autogenerated class Land_parkingmeter";
        model = "trerik4\city\parkingmeter.p3d";
    };
    class Land_road_barrier1: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_road_barrier1";
        descriptionShort = "Autogenerated class Land_road_barrier1";
        model = "trerik4\city\road_barrier1.p3d";
    };
    class Land_road_barrier2: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_road_barrier2";
        descriptionShort = "Autogenerated class Land_road_barrier2";
        model = "trerik4\city\road_barrier2.p3d";
    };
    class Land_screen: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_screen";
        descriptionShort = "Autogenerated class Land_screen";
        model = "trerik4\city\screen.p3d";
    };
    class Land_sewer_cover: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_sewer_cover";
        descriptionShort = "Autogenerated class Land_sewer_cover";
        model = "trerik4\city\sewer_cover.p3d";
    };
    class Land_shutoff_plate: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_shutoff_plate";
        descriptionShort = "Autogenerated class Land_shutoff_plate";
        model = "trerik4\city\shutoff_plate.p3d";
    };
    class Land_sidewalk_nolc: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_sidewalk_nolc";
        descriptionShort = "Autogenerated class Land_sidewalk_nolc";
        model = "trerik4\city\sidewalk_nolc.p3d";
    };
    class Land_smoke: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_smoke";
        descriptionShort = "Autogenerated class Land_smoke";
        model = "trerik4\city\smoke.p3d";
    };
    class Land_smoke_large: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_smoke_large";
        descriptionShort = "Autogenerated class Land_smoke_large";
        model = "trerik4\city\smoke_large.p3d";
    };
    class Land_steam: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_steam";
        descriptionShort = "Autogenerated class Land_steam";
        model = "trerik4\city\steam.p3d";
    };
    class Land_table: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_table";
        descriptionShort = "Autogenerated class Land_table";
        model = "trerik4\city\table.p3d";
    };
    class Land_tank: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_tank";
        descriptionShort = "Autogenerated class Land_tank";
        model = "trerik4\city\tank.p3d";
    };
    class Land_tank1: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_tank1";
        descriptionShort = "Autogenerated class Land_tank1";
        model = "trerik4\city\tank1.p3d";
    };
    class Land_terrace: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_terrace";
        descriptionShort = "Autogenerated class Land_terrace";
        model = "trerik4\city\terrace.p3d";
    };
    class Land_umbrella: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_umbrella";
        descriptionShort = "Autogenerated class Land_umbrella";
        model = "trerik4\city\umbrella.p3d";
    };
    class Land_underground_noises: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_underground_noises";
        descriptionShort = "Autogenerated class Land_underground_noises";
        model = "trerik4\city\underground_noises.p3d";
    };
    class Land_window: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_window";
        descriptionShort = "Autogenerated class Land_window";
        model = "trerik4\city\window.p3d";
    };
    class Land_wip: HouseNoDestruct
    {
        scope = 2;
        displayName = "Land_wip";
        descriptionShort = "Autogenerated class Land_wip";
        model = "trerik4\city\wip.p3d";
    };
};