class CfgPatches
{
	class nyheim
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces","DZ_Worlds_Chernarusplus_World"};
		worlds[] = {"nyheim"};
	};
};


class cfgCharacterScenes
{
	class nyheim
	{
		// OG wall
		class loc1
		{
			target[] = {3450.891,2044.687,25.97};
			position[] = {3463.719,2039.340,1.560};
			fov = 0.9236;
			date[] = {1984,10,28,14,27};
			overcast = 0.4;
			rain = 0.1;
			fog = 0.5;
		};
		// Island bridge
		class loc2
		{
			target[] = {7733.03, 7828.13, 25.97};
			position[] = {7858.7, 7065.20, 1.560};
			fov = 0.9236;
			date[] = {2015,10,28,14,27};
			overcast = 0.0;
			rain = 0.0;
			fog = 0.2;
		};
		// ship
		class loc3
		{
			target[] = {4704.1, 1810.4, 25.97};
			position[] = {4789.1, 1747.8, 1.560};
			fov = 0.9236;
			date[] = {2015,10,28,14,27};
			overcast = 0.1;
			rain = 0.0;
			fog = 0.3;
		};
		// research center
		class loc4
		{
			target[] = {3570.2, 3822.0, 25.97};
			position[] = {3595.3, 3614.8, 1.560};
			fov = 0.9236;
			date[] = {2015,10,28,14,27};
			overcast = 0.2;
			rain = 0.0;
			fog = 0.1;
		};
		// Cottage by curvy road near millie's ship
		class loc5
		{
			target[] = {2654.5, 5072.4, 25.97};
			position[] = {2609.5, 5019.9, 1.560};
			fov = 0.9236;
			date[] = {2015,10,28,14,27};
			overcast = 0.2;
			rain = 0.1;
			fog = 0.4;
		};
		// Destroyed city by jet
		class loc6
		{
			target[] = {3117.8, 6766.6, 10.97};
			position[] = {3176.2, 6763.0, 1.560};
			fov = 0.9236;
			date[] = {2015,10,28,14,27};
			overcast = 0.8;
			rain = 0.2;
			fog = 0.8;
		};
		// Farm
		class loc7
		{
			target[] = {176.3, 7567.6, 10.97};
			position[] = {76.0, 7519.3, 1.560};
			fov = 0.9236;
			date[] = {2015,10,28,14,27};
			overcast = 0.6;
			rain = 0.1;
			fog = 0.4;
		};
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class Trerik4Intro
		{
			directory = "trerik4\extra\scenes\intro.nyheim";
		};
	};
};
class CfgWorlds
{
	class DefaultWorld {};
	class CAWorld: DefaultWorld
	{
		class Grid;
		class Clutter;
		class Weather
		{
			class Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
				class Weather6;
			};
		};
	};
	class DefaultLighting;
	class DefaultClutter;
	class ChernarusPlus: CAWorld {};
	// class ChernarusPlus;

	class nyheim: ChernarusPlus
	{
		cutscenes[] = {"Trerik4Intro"};
		description = "Nyheim";
		worldName = "trerik4\world\nyheim.wrp";
		#include "navmesh.hpp"
		//longitude = 20;
		//latitude = -60; //originally -69
		startTime="12:35";
		startDate="04/04/2015";
		class OutsideTerrain
		{
			satellite = "trerik4\data\outside_sat_co.paa";
			enableTerrainSynth = 1;
			class Layers
			{
				class Layer0
				{
					nopx = "DZ\surfaces\data\terrain\cp_grass_nopx.paa";
					texture = "DZ\surfaces\data\terrain\cp_grass_ca.paa";
				};
			};
		};
		
		// rainMaterial = "{C70A81898707E2F0}Graphics/Materials/postprocess/snow.emat";
		
		envTexture = "trerik4\extra\env_land_co.paa";
		startWeather=0.4;
		startFog=0.1;
		forecastWeather=0.6;
		forecastFog=0.15;

		starsIntensity = 0.6;
		hazeDistCoef = 0.0;
		hazeFogCoef = 1.0;
		volFogOffset = 0;
		
		centerPosition[]={2560,2560,300};
		
		// override for sea materials (enfusion materials)
		//oceanMaterial = "trerik4\data\trerik_sea.emat";
		//oceanNiceMaterial = "trerik4\data\trerik_sea_nice.emat";
		//oceanStormMaterial = "trerik4\data\trerik_sea_storm.emat";
		
		ceFiles = "trerik4\ce";
		
		class SecondaryAirports {
			class ChernarusPlusAirstrip1
			{
				ilsPosition[] = {15360,15360};
				ilsDirection[] = {0.0,0.0,0.0};
				ilsTaxiIn[] = {12385,12363,12250,12419,11939,12545};
				ilsTaxiOff[] = {11917,12555,11864,12578,11875,12602};
				drawTaxiway = 0;
			};
			class ChernarusPlusAirstrip2
			{
				ilsPosition[] = {15360,15360};
				ilsDirection[] = {0.0,0.0,0.0};
				ilsTaxiIn[] = {4958,2449,4975,2460,5072,2367};
				ilsTaxiOff[] = {4888,2573,4973,2472,4958,2449};
				drawTaxiway = 0;
			};
		};
		
		terrainNormalTexture="trerik4\data\global_nohq.paa";
		minTreesInForestSquare=5;
		minRocksInRockSquare=5;
		
		class UsedTerrainMaterials
		{
			material0="DZ\surfaces\data\terrain\cp_grass.rvmat";
			material1="DZ\surfaces\data\terrain\cp_rock.rvmat";
			material2="DZ\surfaces\data\terrain\cp_concrete1.rvmat";
			material3="trerik4\data\surfaces\trerik_ice.rvmat";
			material4="DZ\surfaces\data\terrain\cp_conifer_common2.rvmat";
			material5="DZ\surfaces\data\terrain\cp_broadleaf_dense1.rvmat";
			material6="DZ\surfaces\data\terrain\cp_gravel.rvmat";
		};
		// map item name (default value is #STR_CfgVehicles_ChernarusMap0)
		mapDisplayNameKey = "Nyheim Map";
		// map item description (default value is #STR_CfgVehicles_ChernarusMap1)
		mapDescriptionKey = "A complete map of Nyheim";
		// closed map item texture (default value is dz\gear\navigation\data\map_chernarus_co.paa)
		mapTextureClosed = "trerik4\extra\mapitem\map_chernarus_co.paa";
		//mapTextureClosed = "dz\gear\navigation\data\map_chernarus_co.paa";
		// opened map item texture (check dz\structures\signs\tourist\data\karta_co.paa to see how it should look like)
		mapTextureOpened = "trerik4\extra\mapitem\karta_co.paa";
		//mapTextureOpened = "dz\structures\signs\tourist\data\karta_co.paa";
		// opened map item legend part (check dz\structures\signs\tourist\data\karta_side_co.paa to see how it should look like)
		mapTextureLegend = "trerik4\extra\mapitem\karta_side_co.paa";
		//mapTextureLegend = "dz\structures\signs\tourist\data\karta_side_co.paa";
		// 2D map overlay map for this world (see dz\gear\navigation\data\usermap for an example - it is basically same like proper satellite texture for the terrain just with different sort of info)
		userMapPath = "";

		#include "weather.hpp"

		// 2d map grid
		class Grid
		{
			offsetX = 0;
			offsetY = 0;
			class Zoom1
			{
				zoomMax = 0.15;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = 100;
			};
			class Zoom2
			{
				zoomMax = 0.85;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = 1000;
			};
			class Zoom3
			{
				zoomMax = 1e+30;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = 10000;
			};
		};
		class Names
		{
			class NyheimNewCity
			{
				name="Nyheim New City";
				position[]={3169.66,2105.95};
				type="Capital";
				radiusA=569.66;
				radiusB=420.14;
				angle=0.000;
			};
			class NyheimIndustrial
			{
				name="Nyheim Industrial";
				position[]={3246.80,2311.82};
				type="City";
				radiusA=569.66;
				radiusB=420.14;
				angle=0.000;
			};
			class Nyhavn
			{
				name="Nyhavn";
				position[]={3784.73,2028.69};
				type="Marine";
				radiusA=569.66;
				radiusB=420.14;
				angle=0.000;
			};
			class NyheimKriminalomsorgsanlegg
			{
				name="Nyheim Prison";
				position[]={2699.96,2073.89};
				type="Village";
				radiusA=569.66;
				radiusB=420.14;
				angle=0.000;
			};
			class NyheimOldCity
			{
				name="Nyheim Old City";
				position[]={2692.06,2390.44};
				type="City";
				radiusA=569.66;
				radiusB=420.14;
				angle=0.000;
			};
			class DestroyedCity
			{
				name="Destroyed City";
				position[]={2333.25,2474.63};
				type="City";
				radiusA=569.66;
				radiusB=420.14;
				angle=0.000;
			};
			class NyheimCommercialDistrict
			{
				name="Nyheim Commercial District";
				position[]={1754.87,2560.79};
				type="Capital";
				radiusA=569.66;
				radiusB=420.14;
				angle=0.000;
			};
			class Rodal
			{
				name="Rodal";
				position[]={4505.21,439.38};
				type="City";
				radiusA=400.00;
				radiusB=400.00;
				angle=0.000;
			};
			class Nyheimfjorden
			{
				name="Nyheimfjorden";
				position[]={4359.43,1986.02};
				type="Marine";
				radiusA=569.66;
				radiusB=420.14;
				angle=0.000;
			};
			class Snohaug
			{
				name="Snohaug";
				position[]={229.09,4422.85};
				type="ViewPoint";
				radiusA=364.58;
				radiusB=268.89;
				angle=0.000;
			};
			class NorthernMilitaryTrainingArea
			{
				name="Northern Military Training Area";
				position[]={296.61,4020.80};
				type="ViewPoint";
				radiusA=569.66;
				radiusB=420.14;
				angle=0.000;
			};
			class NorthernResort
			{
				name="Northern Resort";
				position[]={914.24,3473.39};
				type="ViewPoint";
				radiusA=364.58;
				radiusB=268.89;
				angle=0.000;
			};
			class NyheimHolidayResort
			{
				name="Nyheim Holiday Resort";
				position[]={3046.34,1891.92};
				type="ViewPoint";
				radiusA=291.67;
				radiusB=215.11;
				angle=0.000;
			};
			class Kraftverk
			{
				name="Kraftverk";
				position[]={4416.39,3932.89};
				type="Village";
				radiusA=455.73;
				radiusB=336.11;
				angle=0.000;
			};
			class Lilleby
			{
				name="Lilleby";
				position[]={4201.12,4049.45};
				type="City";
				radiusA=455.73;
				radiusB=336.11;
				angle=0.000;
			};
			class NyheimElectricalFacility
			{
				name="Nyheim Electrical Facility";
				position[]={4353.62,2546.60};
				type="Local";
				radiusA=455.73;
				radiusB=336.11;
				angle=0.000;
			};
			class Odin
			{
				name="Odin";
				position[]={4713.92,1816.52};
				type="City";
				radiusA=291.67;
				radiusB=215.11;
				angle=0.000;
			};
			class Flytoppen
			{
				name="Flytoppen";
				position[]={2269.33,726.77};
				type="ViewPoint";
				radiusA=400.00;
				radiusB=400.00;
				angle=0.000;
			};
			class Nyelva
			{
				name="Nyelva";
				position[]={453.22,3162.04};
				type="Marine";
				radiusA=569.66;
				radiusB=420.14;
				angle=0.000;
			};
			class Dalen
			{
				name="Dalen";
				position[]={1230.88,4171.41};
				type="City";
				radiusA=712.08;
				radiusB=525.18;
				angle=0.000;
			};
			class Piggen
			{
				name="Piggen";
				position[]={1334.50,5075.82};
				type="ViewPoint";
				radiusA=569.66;
				radiusB=420.14;
				angle=0.000;
			};
			class Vestby
			{
				name="Vestby";
				position[]={484.96,503.63};
				type="City";
				radiusA=929.39;
				radiusB=645.34;
				angle=0.000;
			};
			class Sorbu
			{
				name="Sorbu";
				position[]={3026.40,366.10};
				type="City";
				radiusA=500.00;
				radiusB=500.00;
				angle=0.000;
			};
			class Kebabnino
			{
				name="Kebabnino";
				position[]={6894.08,1249.92};
				type="Local";
				radiusA=1161.74;
				radiusB=806.67;
				angle=0.000;
			};
			class Utkjaer
			{
				name="Utkjaer";
				position[]={167.28,7636.60};
				type="City";
				radiusA=929.39;
				radiusB=645.34;
				angle=0.000;
			};
			class Oya
			{
				name="Oya";
				position[]={7279.22,8163.31};
				type="City";
				radiusA=1815.22;
				radiusB=1260.42;
				angle=0.000;
			};
			class Nordsundet
			{
				name="Nordsundet";
				position[]={4106.43,6931.37};
				type="Local";
				radiusA=500.00;
				radiusB=500.00;
				angle=0.000;
			};
			class Utkanten
			{
				name="Utkanten";
				position[]={199.98,6696.67};
				type="City";
				radiusA=1161.74;
				radiusB=806.67;
				angle=0.000;
			};
			class Ulvetind
			{
				name="Ulvetind";
				position[]={420.81,1042.89};
				type="City";
				radiusA=890.09;
				radiusB=656.47;
				angle=0.000;
			};
			class Ostby
			{
				name="Ostby";
				position[]={6353.36,2062.62};
				type="City";
				radiusA=750.03;
				radiusB=516.46;
				angle=0.000;
			};
			class Halvoya
			{
				name="Halvoya";
				position[]={6899.05,6535.81};
				type="City";
				radiusA=1171.92;
				radiusB=806.96;
				angle=0.000;
			};
			class Hofsoy
			{
				name="Hofsoy";
				position[]={7808.92,811.27};
				type="City";
				radiusA=750.03;
				radiusB=516.46;
				angle=0.000;
			};
			class Olderoya
			{
				name="Olderoya";
				position[]={6942.46,376.01};
				type="Village";
				radiusA=480.02;
				radiusB=330.53;
				angle=0.000;
			};
			class Thorshammer
			{
				name="Thor's hammer";
				position[]={6884.32,2669.25};
				type="Local";
				radiusA=750.03;
				radiusB=516.46;
				angle=0.000;
			};
			class Nyvoll
			{
				name="Nyvoll";
				position[]={4592.80,4738.76};
				type="Capital";
				radiusA=600.03;
				radiusB=413.17;
				angle=0.000;
			};
			class Gruve
			{
				name="Gruve";
				position[]={5428.36,5157.33};
				type="Local";
				radiusA=600.03;
				radiusB=413.17;
				angle=0.000;
			};
			class Elde
			{
				name="Elde";
				position[]={5873.73,5252.92};
				type="City";
				radiusA=600.03;
				radiusB=413.17;
				angle=0.000;
			};
			class Evenes
			{
				name="Evenes";
				position[]={2546.38,8316.90};
				type="City";
				radiusA=937.54;
				radiusB=645.57;
				angle=0.000;
			};
			class Kjerstad
			{
				name="Kjerstad";
				position[]={2124.97,8074.37};
				type="City";
				radiusA=480.02;
				radiusB=330.53;
				angle=0.000;
			};
			class Brorstad
			{
				name="Brorstad";
				position[]={6570.40,5454.80};
				type="City";
				radiusA=600.03;
				radiusB=413.17;
				angle=0.000;
			};
			class Sydalen
			{
				name="Sydalen";
				position[]={7896.91,4695.17};
				type="Village";
				radiusA=480.02;
				radiusB=330.53;
				angle=0.000;
			};
			class Valberg
			{
				name="Valberg";
				position[]={7626.56,5772.34};
				type="Hill";
				radiusA=937.54;
				radiusB=645.57;
				angle=0.000;
			};
			class Rostad
			{
				name="Rostad";
				position[]={6613.89,4276.86};
				type="City";
				radiusA=480.02;
				radiusB=330.53;
				angle=0.000;
			};
			class NyheimRefugeeCenter
			{
				name="Refugee Arrival Center";
				position[]={3582.31,5619.70};
				type="Village";
				radiusA=361.41;
				radiusB=248.86;
				angle=0.000;
			};
			class NyheimLufthavn
			{
				name="Nyheim Lufthavn";
				position[]={1869.74,1313.93};
				type="Local";
				radiusA=564.71;
				radiusB=388.85;
				angle=0.000;
			};
			class NyheimMilitaerFlyplass
			{
				name="Nyheim Militaer Flyplass";
				position[]={1889.53,883.16};
				type="Local";
				radiusA=564.71;
				radiusB=388.85;
				angle=0.000;
			};
			class Storvik
			{
				name="Storvik";
				position[]={4680.81,6562.51};
				type="City";
				radiusA=600.03;
				radiusB=413.17;
				angle=0.000;
			};
			class Lithaugen
			{
				name="Lithaugen";
				position[]={4773.76,6270.40};
				type="City";
				radiusA=245.77;
				radiusB=169.23;
				angle=0.000;
			};
			class Stoa
			{
				name="Stoa";
				position[]={4019.83,6186.41};
				type="Village";
				radiusA=480.02;
				radiusB=330.53;
				angle=0.000;
			};
			class Bruem
			{
				name="Bruem";
				position[]={6220.09,7255.82};
				type="City";
				radiusA=750.03;
				radiusB=516.46;
				angle=0.000;
			};
			class Fresvik
			{
				name="Fresvik";
				position[]={1440.64,6197.52};
				type="Village";
				radiusA=600.03;
				radiusB=413.17;
				angle=0.000;
			};
			class Steine
			{
				name="Steine";
				position[]={3033.96,5152.57};
				type="Village";
				radiusA=400.00;
				radiusB=400.00;
				angle=0.000;
			};
			class Dyrdal
			{
				name="Dyrdal";
				position[]={2157.55,6071.69};
				type="City";
				radiusA=750.03;
				radiusB=516.46;
				angle=0.000;
			};
			class Bredden
			{
				name="Bredden";
				position[]={1498.61,7227.13};
				type="Local";
				radiusA=937.54;
				radiusB=645.57;
				angle=0.000;
			};
			class Undredal
			{
				name="Undredal";
				position[]={2245.50,7065.43};
				type="Village";
				radiusA=384.01;
				radiusB=264.43;
				angle=0.000;
			};
			class Leveld
			{
				name="Leveld";
				position[]={2593.71,7226.36};
				type="Village";
				radiusA=384.01;
				radiusB=264.43;
				angle=0.000;
			};
			class Opheim
			{
				name="Opheim";
				position[]={2319.03,7734.12};
				type="Village";
				radiusA=384.01;
				radiusB=264.43;
				angle=0.000;
			};
			class Moane
			{
				name="Moane";
				position[]={7542.81,3147.55};
				type="Hill";
				radiusA=384.01;
				radiusB=264.43;
				angle=0.000;
			};
			class Hegge
			{
				name="Hegge";
				position[]={8239.34,3078.70};
				type="Village";
				radiusA=384.01;
				radiusB=264.43;
				angle=0.000;
			};
			class Grimsbu
			{
				name="Grimsbu";
				position[]={1909.37,2950.46};
				type="Village";
				radiusA=307.21;
				radiusB=211.54;
				angle=0.000;
			};
			class PiggenGruve
			{
				name="Piggen Gruve";
				position[]={2248.59,4640.37};
				type="Local";
				radiusA=600.03;
				radiusB=413.17;
				angle=0.000;
			};
			class Brydal
			{
				name="Brydal";
				position[]={4592.47,3173.89};
				type="Village";
				radiusA=245.77;
				radiusB=169.23;
				angle=0.000;
			};
			class Koppang
			{
				name="Koppang";
				position[]={5705.83,4615.61};
				type="Village";
				radiusA=307.21;
				radiusB=211.54;
				angle=0.000;
			};
			class Kloster
			{
				name="Kloster";
				position[]={5568.31,4167.59};
				type="Local";
				radiusA=307.21;
				radiusB=211.54;
				angle=0.000;
			};
			class Slott
			{
				name="Slott";
				position[]={5464.24,2166.91};
				type="Village";
				radiusA=307.21;
				radiusB=211.54;
				angle=0.000;
			};
			class Larvik
			{
				name="Larvik";
				position[]={285.37,5509.13};
				type="City";
				radiusA=600.03;
				radiusB=413.17;
				angle=0.000;
			};
			class Gammelheim
			{
				name="Gammelheim";
				position[]={7746.95,6584.23};
				type="Local";
				radiusA=196.61;
				radiusB=135.39;
				angle=0.000;
			};
			class Holand
			{
				name="Holand";
				position[]={4812.92,7715.26};
				type="Village";
				radiusA=307.21;
				radiusB=211.54;
				angle=0.000;
			};
			class Bangsund
			{
				name="Bangsund";
				position[]={4459.50,7415.56};
				type="Village";
				radiusA=480.02;
				radiusB=330.53;
				angle=0.000;
			};
			class Helvete
			{
				name="Helvete";
				position[]={15149.37,15276.13};
				type="City";
				radiusA=245.77;
				radiusB=169.23;
				angle=0.000;
			};
			class Lauvsnes
			{
				name="Lauvsnes";
				position[]={5766.43,772.19};
				type="Village";
				radiusA=937.54;
				radiusB=645.57;
				angle=0.000;
			};
			class Ledang
			{
				name="Ledang";
				position[]={2636.20,1312.72};
				type="Village";
				radiusA=480.02;
				radiusB=330.53;
				angle=0.000;
			};
			class Holt
			{
				name="Holt";
				position[]={3626.83,1255.97};
				type="Village";
				radiusA=384.01;
				radiusB=264.43;
				angle=0.000;
			};
			class Vikan
			{
				name="Vikan";
				position[]={7840.27,2940.62};
				type="City";
				radiusA=307.21;
				radiusB=211.54;
				angle=0.000;
			};
			class Hylla
			{
				name="Hylla";
				position[]={4841.84,5417.32};
				type="Village";
				radiusA=384.01;
				radiusB=264.43;
				angle=0.000;
			};
			class Fjellhytta
			{
				name="Fjellhytta";
				position[]={1098.33,1880.89};
				type="Village";
				radiusA=384.01;
				radiusB=264.43;
				angle=0.000;
			};
		};
	};
	initWorld = "nyheim";
};
class CfgWorldList
{
	class nyheim {};
};
