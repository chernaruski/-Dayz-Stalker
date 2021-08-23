class CfgPatches
{
	class SL_Jackets
	{
		units[]=
		{
			"SL_M65Jacket_Khaki"
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
	class M65Jacket_Khaki;
	class SL_M65Jacket_Khaki: M65Jacket_Khaki
	{
		scope=2;
		visibilityModifier=0.4;		
		itemSize[]={4,3};
		itemsCargoSize[]={7,8};
		heatIsolation=1;
		hiddenSelectionsTextures[]=
		{
			"\StrelokLegacy\jackets\m65\data\SL_m65_jacket_khaki_co.paa",
			"\StrelokLegacy\jackets\m65\data\SL_m65_jacket_khaki_co.paa",
			"\StrelokLegacy\jackets\m65\data\SL_m65_jacket_khaki_co.paa"
		};
	};
};