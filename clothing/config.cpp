class CfgPatches
{
	class Trerik_Clothing
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Tops"};
	};
};
class CfgVehicles
{
	class M65Jacket_Black;
	class Mich2001Helmet;
	class MilitaryBeret_Red;
	class PlateCarrierVest;
	class PlateCarrierPouches;
	class PlateCarrierHolster;
	class TTSKOPants;
	class CargoPants_Grey;
	class CargoPantsBloused_ColorBase;
	//class Sneakers_Gray;
	class Trerik_M65Jacket_M90_Winter: M65Jacket_Black
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\trerik4\clothing\data\M65Jacket_M90_Winter_co.paa","\trerik4\clothing\data\M65Jacket_M90_Winter_co.paa","\trerik4\clothing\data\M65Jacket_M90_Winter_co.paa"};
	};
	class Trerik_M65Jacket_M90_Summer: M65Jacket_Black
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\trerik4\clothing\data\M65Jacket_M90_Summer_co.paa","\trerik4\clothing\data\M65Jacket_M90_Summer_co.paa","\trerik4\clothing\data\M65Jacket_M90_Summer_co.paa"};
	};
	class Trerik_M65Jacket_Black_Plikt: M65Jacket_Black
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\trerik4\clothing\data\M65Jacket_Black_co.paa","\trerik4\clothing\data\M65Jacket_Black_co.paa","\trerik4\clothing\data\M65Jacket_Black_co.paa"};
	};
	class Trerik_Mich2001Helmet_M90_Winter: Mich2001Helmet
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\trerik4\clothing\data\Mich2001_M90_Winter_co.paa","\trerik4\clothing\data\Mich2001_M90_Winter_co.paa","\trerik4\clothing\data\Mich2001_M90_Winter_co.paa"};
	};
	class Trerik_MilitaryBeret_Black_Plikt: MilitaryBeret_Red
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\trerik4\clothing\data\MilitaryBeret_Black_Plikt_co.paa","\trerik4\clothing\data\MilitaryBeret_Black_Plikt_co.paa","\trerik4\clothing\data\MilitaryBeret_Black_Plikt_co.paa"};
	};
	class Trerik_PlateCarrierVest_M90_Winter_Plikt: PlateCarrierVest
	{
		scope=2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\trerik4\clothing\data\PlateCarrierVest_M90_Winter_Plikt_co.paa","\trerik4\clothing\data\PlateCarrierVest_M90_Winter_Plikt_co.paa","\trerik4\clothing\data\PlateCarrierVest_M90_Winter_Plikt_co.paa"};
	};
	class Trerik_PlateCarrierPouches_M90_Winter: PlateCarrierPouches
	{
		scope = 2;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"\trerik4\clothing\data\PlateCarrierVest_M90_Winter_Plikt_co.paa"};
	};
	class Trerik_PlateCarrierHolster_M90_Winter: PlateCarrierHolster
	{
		scope = 2;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"\trerik4\clothing\data\PlateCarrierVest_M90_Winter_Plikt_co.paa"};
	};
	class Trerik_TTSKOPants_M90_Winter: TTSKOPants
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\trerik4\clothing\data\TTSKOPants_M90_Winter_co.paa","\trerik4\clothing\data\TTSKOPants_M90_Winter_co.paa","\trerik4\clothing\data\TTSKOPants_M90_Winter_co.paa"};
	};
	class Trerik_CargoPants_M90_Summer: CargoPants_Grey
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\trerik4\clothing\data\CargoPants_M90_Summer_co.paa","\trerik4\clothing\data\CargoPants_M90_Summer_co.paa","\trerik4\clothing\data\CargoPants_M90_Summer_co.paa"};
	};
};
