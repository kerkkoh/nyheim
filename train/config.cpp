class CfgPatches
{
	class trerik4_train
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Vehicles_Wheeled"};
	};
};

class CfgVehicles
{
	class OffroadHatchback;
	class Driver;
	class CoDriver;
	class trerik_tog : OffroadHatchback
	{
		scope = 2;
		displayName = "Train";
		descriptionShort = "Train";
		model = "trerik4\train\trerik_tog.p3d";
		// weight = 300000;
		class Crew
		{
			class Driver
			{
				actionSel = "seat_driver"; // Memory
				proxyPos = "crewDriver"; // View Geo (and reso?)
				getInPos = "pos_driver"; // Memory
				getInDir = "pos_driver_dir"; // Memory
				isDriver = 1;
			};
			class CoDriver: CoDriver
			{
				actionSel = "seat_codriver";
				proxyPos = "crewCoDriver";
				getInPos = "pos_codriver";
				getInDir = "pos_codriver_dir";
			};
			class Cargo1
			{
				actionSel = "seat_cargo1";
				proxyPos = "crewcargo1";
				getInPos = "pos_codriver";
				getInDir = "pos_codriver_dir";
			};
			class Cargo2
			{
				actionSel = "seat_cargo2";
				proxyPos = "crewcargo2";
				getInPos = "pos_codriver";
				getInDir = "pos_codriver_dir";
			};
			class Cargo3
			{
				actionSel = "seat_cargo3";
				proxyPos = "crewcargo3";
				getInPos = "pos_codriver";
				getInDir = "pos_codriver_dir";
			};
			class Cargo4
			{
				actionSel = "seat_cargo4";
				proxyPos = "crewcargo4";
				getInPos = "pos_codriver";
				getInDir = "pos_codriver_dir";
			};
			class Cargo5
			{
				actionSel = "seat_cargo5";
				proxyPos = "crewcargo5";
				getInPos = "pos_codriver";
				getInDir = "pos_codriver_dir";
			};
			class Cargo6
			{
				actionSel = "seat_cargo6";
				proxyPos = "crewcargo6";
				getInPos = "pos_codriver";
				getInDir = "pos_codriver_dir";
			};
			class Cargo7
			{
				actionSel = "seat_cargo7";
				proxyPos = "crewcargo7";
				getInPos = "pos_codriver";
				getInDir = "pos_codriver_dir";
			};
			class Cargo8
			{
				actionSel = "seat_cargo8";
				proxyPos = "crewcargo8";
				getInPos = "pos_codriver";
				getInDir = "pos_codriver_dir";
			};
			class Cargo9
			{
				actionSel = "seat_cargo9";
				proxyPos = "crewcargo9";
				getInPos = "pos_codriver";
				getInDir = "pos_codriver_dir";
			};
			class Cargo10
			{
				actionSel = "seat_cargo10";
				proxyPos = "crewcargo10";
				getInPos = "pos_codriver";
				getInDir = "pos_codriver_dir";
			};
			class Cargo11
			{
				actionSel = "seat_cargo11";
				proxyPos = "crewcargo11";
				getInPos = "pos_codriver";
				getInDir = "pos_codriver_dir";
			};
			class Cargo12
			{
				actionSel = "seat_cargo12";
				proxyPos = "crewcargo12";
				getInPos = "pos_codriver";
				getInDir = "pos_codriver_dir";
			};
			class Cargo13
			{
				actionSel = "seat_cargo13";
				proxyPos = "crewcargo13";
				getInPos = "pos_codriver";
				getInDir = "pos_codriver_dir";
			};
			class Cargo14
			{
				actionSel = "seat_cargo14";
				proxyPos = "crewcargo14";
				getInPos = "pos_codriver";
				getInDir = "pos_codriver_dir";
			};
			class Cargo15
			{
				actionSel = "seat_cargo15";
				proxyPos = "crewcargo15";
				getInPos = "pos_codriver";
				getInDir = "pos_codriver_dir";
			};
		};
			hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"trerik4\train\data\jodbuggy_lights_e.rvmat",
			"trerik4\train\data\jodbuggy_lights_e.rvmat",
			"trerik4\train\data\jodbuggy_lights_e.rvmat",
			"trerik4\train\data\jodbuggy_lights_e.rvmat",
			"trerik4\train\data\jodbuggy_lights_e.rvmat",
			"trerik4\train\data\jodbuggy_lights_e.rvmat",
			"trerik4\train\data\jodbuggy_lights_e.rvmat",
			"trerik4\train\data\jodbuggy_lights_e.rvmat",
			"trerik4\train\data\jodbuggy_lights_e.rvmat"
		};
	};
};