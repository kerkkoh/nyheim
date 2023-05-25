class CfgPatches
{
	class trerik4_data
	{
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Surfaces"
		};
	};
};

class CfgSurfaces 
{
	class sand_ext;
	class cp_rock;
	class trerik_ice: sand_ext
	{	
		files = "trerik_ice_*";
	};
	class trerik_rock: sand_ext
	{	
		files = "trerik_rock_*";
	};
};

class CfgSoundTables
{
	class CfgStepSoundTables
	{
		#include "CfgStepSoundTables.hpp"
	};
};
