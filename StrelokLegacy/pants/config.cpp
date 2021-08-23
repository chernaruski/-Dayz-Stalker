class CfgPatches
{
	class SL_Pants
	{
		units[]=
		{
			"SL_CargoPants_Khaki"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class CargoPants_Green;
	class SL_CargoPants_Khaki: CargoPants_Green
	{
		scope=2;
		visibilityModifier=0.3;		
		itemSize[]={4,3};
		itemsCargoSize[]={7,8};
		heatIsolation=1;
		hiddenSelectionsTextures[]=
		{
			"\StrelokLegacy\pants\cargo\data\SL_cargopants_green_co.paa",
			"\StrelokLegacy\pants\cargo\data\SL_cargopants_green_co.paa",
			"\StrelokLegacy\pants\cargo\data\SL_cargopants_green_co.paa"
		};
	};
};