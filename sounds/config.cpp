class CfgPatches
{
	class trerik4_sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgSoundShaders
{
	class base_tailHouses_SoundShader;
	class Smokegrenade_RDG2_active_loop_SoundShader;
	class Missile_launch_Soundshader: Smokegrenade_RDG2_active_loop_SoundShader
	{
		samples[] = {{"\trerik4\sounds\launch",1}};
		volume = 2.0;
		range = 150;
	};
	class Trerik_Menu_SoundShader
	{
		samples[] = {{"\trerik4\sounds\theme",1}};
		volume = 0.55;
	};
	class Trerik_Ambience_City1_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"\trerik4\sounds\ambience",1}};
		volume = 0.2;
		range = 200;
	};
	class Trerik_Ambience_Houseparty1_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"\trerik4\sounds\houseparty1",1}};
		volume = 0.2;
		range = 50;
	};
	class Trerik_Ambience_Houseparty2_SoundShader: Trerik_Ambience_Houseparty1_SoundShader
	{
		samples[] = {{"\trerik4\sounds\houseparty2",1}};
	};
	class Trerik_Ambience_Houseparty3_SoundShader: Trerik_Ambience_Houseparty1_SoundShader
	{
		samples[] = {{"\trerik4\sounds\houseparty3",1}};
	};
	class Trerik_Ambience_Houseparty4_SoundShader: Trerik_Ambience_Houseparty1_SoundShader
	{
		samples[] = {{"\trerik4\sounds\houseparty4",1}};
	};
	class Trerik_Ambience_Houseparty5_SoundShader: Trerik_Ambience_Houseparty1_SoundShader
	{
		samples[] = {{"\trerik4\sounds\houseparty5",1}};
	};
	class Trerik_Ambience_Houseparty6_SoundShader: Trerik_Ambience_Houseparty1_SoundShader
	{
		samples[] = {{"\trerik4\sounds\houseparty6",1}};
	};
	class Trerik_Ambience_Underground1_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"\trerik4\sounds\underground1",1}};
		volume = 0.5;
		range = 15;
	};
	class Trerik_Ambience_Underground2_SoundShader: Trerik_Ambience_Underground1_SoundShader
	{
		samples[] = {{"\trerik4\sounds\underground2",1}};
	};
	class Train_Start_Soundshader: Smokegrenade_RDG2_active_loop_SoundShader
	{
		samples[] = {{"\trerik4\sounds\train_start",1}};
		volume = 3.0;
		range = 80;
	};
	class Train_Stop_Soundshader: Train_Start_Soundshader
	{
		samples[] = {{"\trerik4\sounds\train_stop",1}};
	};
	class Train_Loop_Soundshader: Train_Start_Soundshader
	{
		samples[] = {{"\trerik4\sounds\train_loop",1}};
	};
	class Train_Warning_Soundshader: Train_Start_Soundshader
	{
		samples[] = {{"\trerik4\sounds\train_warning",1}};
		range = 30;
	};
	class Trerik_Alarm_SoundShader
	{
		samples[] = {{"\trerik4\sounds\alarm",1}};
		volume = 1.5;
		range = 700;
	};
};

class CfgSoundSets
{
	class SmokegGrenades_M18_active_loop_SoundSet;
	class Missile_launch_SoundSet: SmokegGrenades_M18_active_loop_SoundSet
	{
		soundShaders[] = {"Missile_launch_Soundshader"};
		loop = 0;
	};
	class Trerik_Menu_SoundSet
	{
		soundShaders[] = {"Trerik_Menu_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 1;
		spatial = 0;
	};
	class Trerik_Ambience_City1_SoundSet: SmokegGrenades_M18_active_loop_SoundSet
	{
		soundShaders[] = {"Trerik_Ambience_City1_SoundShader"};
		loop = 0;
	};
	class Trerik_Ambience_Houseparty1_SoundSet: Trerik_Ambience_City1_SoundSet
	{
		soundShaders[] = {"Trerik_Ambience_Houseparty1_SoundShader"};
	};
	class Trerik_Ambience_Houseparty2_SoundSet: Trerik_Ambience_City1_SoundSet
	{
		soundShaders[] = {"Trerik_Ambience_Houseparty2_SoundShader"};
	};
	class Trerik_Ambience_Houseparty3_SoundSet: Trerik_Ambience_City1_SoundSet
	{
		soundShaders[] = {"Trerik_Ambience_Houseparty3_SoundShader"};
	};
	class Trerik_Ambience_Houseparty4_SoundSet: Trerik_Ambience_City1_SoundSet
	{
		soundShaders[] = {"Trerik_Ambience_Houseparty4_SoundShader"};
	};
	class Trerik_Ambience_Houseparty5_SoundSet: Trerik_Ambience_City1_SoundSet
	{
		soundShaders[] = {"Trerik_Ambience_Houseparty5_SoundShader"};
	};
	class Trerik_Ambience_Houseparty6_SoundSet: Trerik_Ambience_City1_SoundSet
	{
		soundShaders[] = {"Trerik_Ambience_Houseparty6_SoundShader"};
	};
	class Trerik_Ambience_Underground1_SoundSet: Trerik_Ambience_City1_SoundSet
	{
		soundShaders[] = {"Trerik_Ambience_Underground1_SoundShader"};
	};
	class Trerik_Ambience_Underground2_SoundSet: Trerik_Ambience_Underground1_SoundSet
	{
		soundShaders[] = {"Trerik_Ambience_Underground2_SoundShader"};
	};
	class Train_Start_SoundSet: SmokegGrenades_M18_active_loop_SoundSet
	{
		soundShaders[] = {"Train_Start_Soundshader"};
		loop = 0;
	};
	class Train_Stop_SoundSet: Train_Start_SoundSet
	{
		soundShaders[] = {"Train_Stop_Soundshader"};
	};
	class Train_Loop_SoundSet: Train_Start_SoundSet
	{
		soundShaders[] = {"Train_Loop_Soundshader"};
		loop = 1;
		doppler = 1;
	};
	class Train_Warning_SoundSet: Train_Start_SoundSet
	{
		soundShaders[] = {"Train_Warning_Soundshader"};
	};
	class Trerik_Alarm_SoundSet: SmokegGrenades_M18_active_loop_SoundSet
	{
		soundShaders[] = {"Trerik_Alarm_SoundShader"};
		loop = 0;
	};
	
	
	/*
	*	Winter
	*/
	
	class RainHousesLight_SoundShader
	{
		samples[] = {{"",1}};
		volume = "(0.25 + 0.75 * ( (( 1.6 * houses ) / ( houses + 0.6 )) / ((( 1.6 * trees ) / ( trees + 0.6 )) + (( 1.6 * houses ) / ( houses + 0.6 )) + (( 1.6 * meadow ) / ( meadow + 0.6 )) + (( 1.6 * sea ) / ( sea + 0.6 ))))) * 0.5 * (rain factor[0, 0.1]) * (rain factor[0.55, 0.3]) * (0.25 + 0.75*rain)";
	};
	class RainHousesMedium_SoundShader
	{
		samples[] = {{"",1}};
		volume = "(0.25 + 0.75 * ( (( 1.6 * houses ) / ( houses + 0.6 )) / ((( 1.6 * trees ) / ( trees + 0.6 )) + (( 1.6 * houses ) / ( houses + 0.6 )) + (( 1.6 * meadow ) / ( meadow + 0.6 )) + (( 1.6 * sea ) / ( sea + 0.6 ))))) * (rain factor[0.2, 0.45]) * (rain factor[0.9, 0.6]) * (0.25 + 0.75*rain)";
	};
	class RainHousesHeavy_SoundShader
	{
		samples[] = {{"",1}};
		volume = "(0.25 + 0.75 * ( (( 1.6 * houses ) / ( houses + 0.6 )) / ((( 1.6 * trees ) / ( trees + 0.6 )) + (( 1.6 * houses ) / ( houses + 0.6 )) + (( 1.6 * meadow ) / ( meadow + 0.6 )) + (( 1.6 * sea ) / ( sea + 0.6 ))))) * (rain factor[0.55, 0.85]) * (0.25 + 0.75*rain)";
	};
	class RainForestLight_SoundShader
	{
		samples[] = {{"",1}};
		volume = "(((( 1.6 * trees ) / ( trees + 0.6 )) + (( 1.6 * meadow ) / ( meadow + 0.6 )) + (( 1.6 * sea ) / ( sea + 0.6 ))) / ((( 1.6 * trees ) / ( trees + 0.6 )) + (( 1.6 * houses ) / ( houses + 0.6 )) + (( 1.6 * meadow ) / ( meadow + 0.6 )) + (( 1.6 * sea ) / ( sea + 0.6 )))) * 0.5 * (rain factor[0, 0.1]) * (rain factor[0.55, 0.3]) * (0.25 + 0.75*rain)";
	};
	class RainForestMedium_SoundShader
	{
		samples[] = {{"",1}};
		volume = "(((( 1.6 * trees ) / ( trees + 0.6 )) + (( 1.6 * meadow ) / ( meadow + 0.6 )) + (( 1.6 * sea ) / ( sea + 0.6 ))) / ((( 1.6 * trees ) / ( trees + 0.6 )) + (( 1.6 * houses ) / ( houses + 0.6 )) + (( 1.6 * meadow ) / ( meadow + 0.6 )) + (( 1.6 * sea ) / ( sea + 0.6 )))) * (rain factor[0.2, 0.45]) * (rain factor[0.9, 0.6]) * (0.25 + 0.75*rain)";
	};
	class RainForestHeavy_SoundShader
	{
		samples[] = {{"",1}};
		volume = "(((( 1.6 * trees ) / ( trees + 0.6 )) + (( 1.6 * meadow ) / ( meadow + 0.6 )) + (( 1.6 * sea ) / ( sea + 0.6 ))) / ((( 1.6 * trees ) / ( trees + 0.6 )) + (( 1.6 * houses ) / ( houses + 0.6 )) + (( 1.6 * meadow ) / ( meadow + 0.6 )) + (( 1.6 * sea ) / ( sea + 0.6 )))) * (rain factor[0.55, 0.85]) * (0.25 + 0.75*rain)";
	};
	class RainTreeSmallLeaves_SoundShader
	{
		samples[] = {{"",1},{"",1},{"",1},{"",1}};
		volume = "(rain factor [0,0.35]) * raindrops";
		range = 8;
	};
	class RainTreeMediumLeaves_SoundShader
	{
		samples[] = {{"",1},{"",1},{"",1},{"",1}};
		volume = "(rain factor [0,0.35]) * raindrops";
		range = 12;
	};
	class RainTreeMediumLeavesHeavy_SoundShader
	{
		samples[] = {{"",1},{"",1},{"",1},{"",1}};
		volume = "(rain factor [0,0.35]) * raindrops";
		range = 12;
	};
	class RainTreeLargeLeaves_SoundShader
	{
		samples[] = {{"",1},{"",1},{"",1},{"",1},{"",1}};
		volume = "(rain factor [0,0.35]) * raindrops";
		range = 20;
	};
	class RainTreeLargeLeavesHeavy_SoundShader
	{
		samples[] = {{"",1},{"",1},{"",1}};
		volume = "(rain factor [0,0.35]) * raindrops";
		range = 20;
	};
	class RainTreeSmallEvergreen_SoundShader
	{
		samples[] = {{"",1},{"",1},{"",1},{"",1}};
		volume = "(rain factor [0,0.35]) * raindrops";
		range = 8;
	};
	class RainTreeMediumEvergreen_SoundShader
	{
		samples[] = {{"",1},{"",1},{"",1},{"",1}};
		volume = "(rain factor [0,0.35]) * raindrops";
		range = 12;
	};
	class RainTreeLargeEvergreen_SoundShader
	{
		samples[] = {{"",1},{"",1},{"",1},{"",1}};
		volume = "(rain factor [0,0.35]) * raindrops";
		range = 20;
	};
	class CivilianSedan_Rain_Ext_SoundShader
	{
		samples[] = {{"",1}};
		frequency = "1 + 0.25*rain";
		volume = "rain factor [0.1,1]";
		range = 25;
	};
	class Offroad_Rain_Ext_SoundShader
	{
		samples[] = {{"",1}};
		frequency = "1 + 0.25*rain";
		volume = "rain factor [0.1,1]";
		range = 25;
	};
	class v3s_Rain_Ext_SoundShader
	{
		samples[] = {{"",1}};
		volume = "0.5 * rain factor [0.1,1]";
		range = 50;
	};
	class v3s_Rain_Int_Open_SoundShader
	{
		samples[] = {{"",1}};
		volume = "0.5 * (rain factor [0.1,1]) * doors)";
		range = 50;
	};
	class v3s_Rain_Int_SoundShader
	{
		samples[] = {{"",1}};
		volume = "0.5 * (rain factor [0.1,1]) * (0.5 + 0.5*doors)";
		range = 50;
	};
	class baseRainInner0Light_SoundShader
	{
		volume = "((0.17 * 1.3 * ((rain factor[0.05, 0.3])/((rain factor[0.05, 0.3]) + 0.3)) * (rain factor[0.55, 0.3]))) * raindrops";
		range = 10;
	};
	class baseRainInner0Medium_SoundShader
	{
		volume = "(0.6 * 1.4 * ((rain factor[0.3, 0.55]) * (rain factor[0.9, 0.6]))) * raindrops";
		range = 10;
	};
	class baseRainInner0Heavy_SoundShader
	{
		volume = "(rain factor[0.55, 0.9]) * raindrops * raindrops";
		range = 10;
	};
	class baseRainInner0SpotLight_SoundShader
	{
		volume = "((0.17 * 1.3 * ((rain factor[0.05, 0.3])/((rain factor[0.05, 0.3]) + 0.3)) * (rain factor[0.55, 0.3]))) * raindrops";
		range = 15;
	};
	class baseRainInner0SpotMedium_SoundShader
	{
		volume = "(0.6 * 1.4 * ((rain factor[0.3, 0.55]) * (rain factor[0.9, 0.6]))) * raindrops";
		range = 15;
	};
	class baseRainInner0SpotHeavy_SoundShader
	{
		volume = "(rain factor[0.55, 0.9]) * raindrops * raindrops";
		range = 15;
	};
	class baseRainInner1Light_SoundShader
	{
		volume = "((0.17 * 1.3 * ((rain factor[0.05, 0.3])/((rain factor[0.05, 0.3]) + 0.3)) * (rain factor[0.55, 0.3]))) * raindrops";
		range = 15;
	};
	class baseRainInner1Medium_SoundShader
	{
		volume = "(0.6 * 1.4 * ((rain factor[0.3, 0.55]) * (rain factor[0.9, 0.6]))) * raindrops";
		range = 15;
	};
	class baseRainInner1Heavy_SoundShader
	{
		volume = "(rain factor[0.55, 0.9]) * raindrops * raindrops";
		range = 15;
	};
	class baseRainInner1SpotLight_SoundShader
	{
		volume = "((0.17 * 1.3 * ((rain factor[0.05, 0.3])/((rain factor[0.05, 0.3]) + 0.3)) * (rain factor[0.55, 0.3]))) * raindrops";
		range = 18;
	};
	class baseRainInner1SpotMedium_SoundShader
	{
		volume = "(0.6 * 1.4 * ((rain factor[0.3, 0.55]) * (rain factor[0.9, 0.6]))) * raindrops";
		range = 18;
	};
	class baseRainInner1SpotHeavy_SoundShader
	{
		volume = "(rain factor[0.55, 0.9]) * raindrops * raindrops";
		range = 18;
	};
	class baseRainInner2Light_SoundShader
	{
		volume = "((0.17 * 1.3 * ((rain factor[0.05, 0.3])/((rain factor[0.05, 0.3]) + 0.3)) * (rain factor[0.55, 0.3]))) * raindrops";
		range = 15;
	};
	class baseRainInner2Medium_SoundShader
	{
		volume = "(0.6 * 1.4 * ((rain factor[0.3, 0.55]) * (rain factor[0.9, 0.6]))) * raindrops";
		range = 15;
	};
	class baseRainInner2Heavy_SoundShader
	{
		volume = "(rain factor[0.55, 0.9]) * raindrops * raindrops";
		range = 15;
	};
	class baseRainInner25Light_SoundShader
	{
		volume = "((0.17 * 1.3 * ((rain factor[0.05, 0.3])/((rain factor[0.05, 0.3]) + 0.3)) * (rain factor[0.55, 0.3]))) * raindrops";
		range = 15;
	};
	class baseRainInner25Medium_SoundShader
	{
		volume = "(0.6 * 1.4 * ((rain factor[0.3, 0.55]) * (rain factor[0.9, 0.6]))) * raindrops";
		range = 15;
	};
	class baseRainInner25Heavy_SoundShader
	{
		volume = "(rain factor[0.55, 0.9]) * raindrops * raindrops";
		range = 15;
	};
	class baseRainInner3Light_SoundShader
	{
		volume = "((0.17 * 1.3 * ((rain factor[0.05, 0.3])/((rain factor[0.05, 0.3]) + 0.3)) * (rain factor[0.55, 0.3]))) * raindrops";
		range = 15;
	};
	class baseRainInner3Medium_SoundShader
	{
		volume = "(0.6 * 1.4 * ((rain factor[0.3, 0.55]) * (rain factor[0.9, 0.6]))) * raindrops";
		range = 15;
	};
	class baseRainInner3Heavy_SoundShader
	{
		volume = "(rain factor[0.55, 0.9]) * raindrops * raindrops";
		range = 15;
	};
	class baseRainInner4Light_SoundShader
	{
		volume = "((0.17 * 1.3 * ((rain factor[0.05, 0.3])/((rain factor[0.05, 0.3]) + 0.3)) * (rain factor[0.55, 0.3]))) * raindrops";
		range = 15;
	};
	class baseRainInner4Medium_SoundShader
	{
		volume = "(0.6 * 1.4 * ((rain factor[0.3, 0.55]) * (rain factor[0.9, 0.6]))) * raindrops";
		range = 15;
	};
	class baseRainInner4Heavy_SoundShader
	{
		volume = "(rain factor[0.55, 0.9]) * raindrops * raindrops";
		range = 15;
	};
	class baseRainInner5Light_SoundShader
	{
		volume = "((0.17 * 1.3 * ((rain factor[0.05, 0.3])/((rain factor[0.05, 0.3]) + 0.3)) * (rain factor[0.55, 0.3]))) * raindrops";
		range = 16;
	};
	class baseRainInner5Medium_SoundShader
	{
		volume = "(0.6 * 1.4 * ((rain factor[0.3, 0.55]) * (rain factor[0.9, 0.6]))) * raindrops";
		range = 16;
	};
	class baseRainInner5Heavy_SoundShader
	{
		volume = "(rain factor[0.55, 0.9]) * raindrops * raindrops";
		range = 16;
	};
	class baseRainInner7Light_SoundShader
	{
		volume = "((0.17 * 1.3 * ((rain factor[0.05, 0.3])/((rain factor[0.05, 0.3]) + 0.3)) * (rain factor[0.55, 0.3]))) * raindrops";
		range = 18;
	};
	class baseRainInner7Medium_SoundShader
	{
		volume = "(0.6 * 1.4 * ((rain factor[0.3, 0.55]) * (rain factor[0.9, 0.6]))) * raindrops";
		range = 18;
	};
	class baseRainInner7Heavy_SoundShader
	{
		volume = "(rain factor[0.55, 0.9]) * raindrops * raindrops";
		range = 18;
	};
	class baseRainInner8Light_SoundShader
	{
		volume = "((0.17 * 1.3 * ((rain factor[0.05, 0.3])/((rain factor[0.05, 0.3]) + 0.3)) * (rain factor[0.55, 0.3]))) * raindrops";
		range = 22;
	};
	class baseRainInner8Medium_SoundShader
	{
		volume = "(0.6 * 1.4 * ((rain factor[0.3, 0.55]) * (rain factor[0.9, 0.6]))) * raindrops";
		range = 22;
	};
	class baseRainInner8Heavy_SoundShader
	{
		volume = "(rain factor[0.55, 0.9]) * raindrops * raindrops";
		range = 22;
	};
	class RainObjectInner0Metal1_Light_SoundShader: baseRainInner0Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Metal1_Medium_SoundShader: baseRainInner0Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Metal1_Heavy_SoundShader: baseRainInner0Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0SpotMetalSpot_Light_SoundShader: baseRainInner0SpotLight_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0SpotMetalSpot_Medium_SoundShader: baseRainInner0SpotMedium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0SpotMetalSpot_Heavy_SoundShader: baseRainInner0SpotHeavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Metal1_Light_SoundShader: baseRainInner1Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Metal1_Medium_SoundShader: baseRainInner1Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Metal1_Heavy_SoundShader: baseRainInner1Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1SpotMetalSpot_Light_SoundShader: baseRainInner1SpotLight_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1SpotMetalSpot_Medium_SoundShader: baseRainInner1SpotMedium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1SpotMetalSpot_Heavy_SoundShader: baseRainInner1SpotHeavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Metal1_Light_SoundShader: baseRainInner2Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Metal1_Medium_SoundShader: baseRainInner2Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Metal1_Heavy_SoundShader: baseRainInner2Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Metal1_Light_SoundShader: baseRainInner25Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Metal1_Medium_SoundShader: baseRainInner25Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Metal1_Heavy_SoundShader: baseRainInner25Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Metal1_Light_SoundShader: baseRainInner3Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Metal1_Medium_SoundShader: baseRainInner3Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Metal1_Heavy_SoundShader: baseRainInner3Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Metal1_Light_SoundShader: baseRainInner4Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Metal1_Medium_SoundShader: baseRainInner4Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Metal1_Heavy_SoundShader: baseRainInner4Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Metal1_Light_SoundShader: baseRainInner5Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Metal1_Medium_SoundShader: baseRainInner5Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Metal1_Heavy_SoundShader: baseRainInner5Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Metal1_Light_SoundShader: baseRainInner7Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Metal1_Medium_SoundShader: baseRainInner7Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Metal1_Heavy_SoundShader: baseRainInner7Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Metal2_Light_SoundShader: baseRainInner0Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Metal2_Medium_SoundShader: baseRainInner0Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Metal2_Heavy_SoundShader: baseRainInner0Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Metal2_Light_SoundShader: baseRainInner1Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Metal2_Medium_SoundShader: baseRainInner1Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Metal2_Heavy_SoundShader: baseRainInner1Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Metal2_Light_SoundShader: baseRainInner2Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Metal2_Medium_SoundShader: baseRainInner2Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Metal2_Heavy_SoundShader: baseRainInner2Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Metal2_Light_SoundShader: baseRainInner25Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Metal2_Medium_SoundShader: baseRainInner25Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Metal2_Heavy_SoundShader: baseRainInner25Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Metal2_Light_SoundShader: baseRainInner3Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Metal2_Medium_SoundShader: baseRainInner3Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Metal2_Heavy_SoundShader: baseRainInner3Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Metal2_Light_SoundShader: baseRainInner4Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Metal2_Medium_SoundShader: baseRainInner4Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Metal2_Heavy_SoundShader: baseRainInner4Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Metal2_Light_SoundShader: baseRainInner5Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Metal2_Medium_SoundShader: baseRainInner5Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Metal2_Heavy_SoundShader: baseRainInner5Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Metal2_Light_SoundShader: baseRainInner7Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Metal2_Medium_SoundShader: baseRainInner7Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Metal2_Heavy_SoundShader: baseRainInner7Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner8Metal2_Light_SoundShader: baseRainInner8Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner8Metal2_Medium_SoundShader: baseRainInner8Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner8Metal2_Heavy_SoundShader: baseRainInner8Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Metal3_Light_SoundShader: baseRainInner3Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Metal3_Medium_SoundShader: baseRainInner3Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Metal3_Heavy_SoundShader: baseRainInner3Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Metal3_Light_SoundShader: baseRainInner4Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Metal3_Medium_SoundShader: baseRainInner4Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Metal3_Heavy_SoundShader: baseRainInner4Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Metal3_Light_SoundShader: baseRainInner7Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Metal3_Medium_SoundShader: baseRainInner7Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Metal3_Heavy_SoundShader: baseRainInner7Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Fabric1_Light_SoundShader: baseRainInner0Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Fabric1_Medium_SoundShader: baseRainInner0Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Fabric1_Heavy_SoundShader: baseRainInner0Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Fabric1_Light_SoundShader: baseRainInner1Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Fabric1_Medium_SoundShader: baseRainInner1Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Fabric1_Heavy_SoundShader: baseRainInner1Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Fabric1_Light_SoundShader: baseRainInner2Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Fabric1_Medium_SoundShader: baseRainInner2Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Fabric1_Heavy_SoundShader: baseRainInner2Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Fabric1_Light_SoundShader: baseRainInner25Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Fabric1_Medium_SoundShader: baseRainInner25Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Fabric1_Heavy_SoundShader: baseRainInner25Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Fabric1_Light_SoundShader: baseRainInner3Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Fabric1_Medium_SoundShader: baseRainInner3Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Fabric1_Heavy_SoundShader: baseRainInner3Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Fabric1_Light_SoundShader: baseRainInner4Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Fabric1_Medium_SoundShader: baseRainInner4Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Fabric1_Heavy_SoundShader: baseRainInner4Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Fabric1_Light_SoundShader: baseRainInner5Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Fabric1_Medium_SoundShader: baseRainInner5Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Fabric1_Heavy_SoundShader: baseRainInner5Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Fabric1_Light_SoundShader: baseRainInner7Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Fabric1_Medium_SoundShader: baseRainInner7Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Fabric1_Heavy_SoundShader: baseRainInner7Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Fabric2_Light_SoundShader: baseRainInner0Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Fabric2_Medium_SoundShader: baseRainInner0Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Fabric2_Heavy_SoundShader: baseRainInner0Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Fabric2_Light_SoundShader: baseRainInner1Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Fabric2_Medium_SoundShader: baseRainInner1Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Fabric2_Heavy_SoundShader: baseRainInner1Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Fabric2_Light_SoundShader: baseRainInner2Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Fabric2_Medium_SoundShader: baseRainInner2Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Fabric2_Heavy_SoundShader: baseRainInner2Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Fabric2_Light_SoundShader: baseRainInner25Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Fabric2_Medium_SoundShader: baseRainInner25Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Fabric2_Heavy_SoundShader: baseRainInner25Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Fabric2_Light_SoundShader: baseRainInner3Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Fabric2_Medium_SoundShader: baseRainInner3Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Fabric2_Heavy_SoundShader: baseRainInner3Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Fabric2_Light_SoundShader: baseRainInner4Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Fabric2_Medium_SoundShader: baseRainInner4Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Fabric2_Heavy_SoundShader: baseRainInner4Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Fabric2_Light_SoundShader: baseRainInner5Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Fabric2_Medium_SoundShader: baseRainInner5Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Fabric2_Heavy_SoundShader: baseRainInner5Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Fabric2_Light_SoundShader: baseRainInner7Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Fabric2_Medium_SoundShader: baseRainInner7Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Fabric2_Heavy_SoundShader: baseRainInner7Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Tile_Light_SoundShader: baseRainInner0Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Tile_Medium_SoundShader: baseRainInner0Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Tile_Heavy_SoundShader: baseRainInner0Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Tile_Light_SoundShader: baseRainInner1Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Tile_Medium_SoundShader: baseRainInner1Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Tile_Heavy_SoundShader: baseRainInner1Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Tile_Light_SoundShader: baseRainInner2Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Tile_Medium_SoundShader: baseRainInner2Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Tile_Heavy_SoundShader: baseRainInner2Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Tile_Light_SoundShader: baseRainInner25Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Tile_Medium_SoundShader: baseRainInner25Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Tile_Heavy_SoundShader: baseRainInner25Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Tile_Light_SoundShader: baseRainInner3Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Tile_Medium_SoundShader: baseRainInner3Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Tile_Heavy_SoundShader: baseRainInner3Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Tile_Light_SoundShader: baseRainInner4Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Tile_Medium_SoundShader: baseRainInner4Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Tile_Heavy_SoundShader: baseRainInner4Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Tile_Light_SoundShader: baseRainInner5Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Tile_Medium_SoundShader: baseRainInner5Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Tile_Heavy_SoundShader: baseRainInner5Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Tile_Light_SoundShader: baseRainInner7Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Tile_Medium_SoundShader: baseRainInner7Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Tile_Heavy_SoundShader: baseRainInner7Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Ipa_Light_SoundShader: baseRainInner0Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Ipa_Medium_SoundShader: baseRainInner0Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Ipa_Heavy_SoundShader: baseRainInner0Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Ipa_Light_SoundShader: baseRainInner1Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Ipa_Medium_SoundShader: baseRainInner1Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Ipa_Heavy_SoundShader: baseRainInner1Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Ipa_Light_SoundShader: baseRainInner2Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Ipa_Medium_SoundShader: baseRainInner2Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Ipa_Heavy_SoundShader: baseRainInner2Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Ipa_Light_SoundShader: baseRainInner25Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Ipa_Medium_SoundShader: baseRainInner25Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner25Ipa_Heavy_SoundShader: baseRainInner25Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Ipa_Light_SoundShader: baseRainInner3Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Ipa_Medium_SoundShader: baseRainInner3Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Ipa_Heavy_SoundShader: baseRainInner3Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Ipa_Light_SoundShader: baseRainInner4Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Ipa_Medium_SoundShader: baseRainInner4Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner4Ipa_Heavy_SoundShader: baseRainInner4Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Ipa_Light_SoundShader: baseRainInner5Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Ipa_Medium_SoundShader: baseRainInner5Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner5Ipa_Heavy_SoundShader: baseRainInner5Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Ipa_Light_SoundShader: baseRainInner7Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Ipa_Medium_SoundShader: baseRainInner7Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner7Ipa_Heavy_SoundShader: baseRainInner7Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0SpotWood1_Light_SoundShader: baseRainInner0SpotLight_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0SpotWood1_Medium_SoundShader: baseRainInner0SpotMedium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0SpotWood1_Heavy_SoundShader: baseRainInner0SpotHeavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Wood1_Light_SoundShader: baseRainInner1Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Wood1_Medium_SoundShader: baseRainInner1Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Wood1_Heavy_SoundShader: baseRainInner1Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Wood1_Light_SoundShader: baseRainInner2Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Wood1_Medium_SoundShader: baseRainInner2Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Wood1_Heavy_SoundShader: baseRainInner2Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Wood1_Light_SoundShader: baseRainInner3Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Wood1_Medium_SoundShader: baseRainInner3Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner3Wood1_Heavy_SoundShader: baseRainInner3Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Glass_Light_SoundShader: baseRainInner2Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Glass_Medium_SoundShader: baseRainInner2Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Glass_Heavy_SoundShader: baseRainInner2Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Plastic_Light_SoundShader: baseRainInner1Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Plastic_Medium_SoundShader: baseRainInner1Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner1Plastic_Heavy_SoundShader: baseRainInner1Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Igelit_Light_SoundShader: baseRainInner2Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Igelit_Medium_SoundShader: baseRainInner2Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Igelit_Heavy_SoundShader: baseRainInner2Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Camo_Light_SoundShader: baseRainInner2Light_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Camo_Medium_SoundShader: baseRainInner2Medium_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner2Camo_Heavy_SoundShader: baseRainInner2Heavy_SoundShader
	{
		samples[] = {{"",1}};
	};
	class RainObjectInner0Gutter_SoundShader
	{
		samples[] = {{"",1},{"",1}};
		volume = "(rain/(rain + 0.4)) * 1.4";
		range = 7;
	};
};