class CfgPatches
{
	class SL_Shorts
	{
		units[]=
		{
			"SL_Sova_Short"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};

class CfgVehicles
{
	class ShortJeans_Black;
	class SL_Sova_Short : ShortJeans_Black 
	{
		varWetMax=1;
		heatIsolation=1;

		itemSize[]={3,3};
		itemsCargoSize[]={6,8};
		hiddenSelectionsTextures[]=
		{
			"\StrelokLegacy\shorts\data\shortjeans_black_co.paa",
			"\StrelokLegacy\shorts\data\shortjeans_black_co.paa",
			"\StrelokLegacy\shorts\data\shortjeans_black_co.paa"
		};
	}
}