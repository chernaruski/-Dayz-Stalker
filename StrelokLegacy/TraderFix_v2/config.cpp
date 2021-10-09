class CfgPatches
{
	class TraderFix_v2
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{ 
			"Trader","DZ_Data"
		};
	};
};

class CfgMods
{
	class TraderFix_v2_Server
	{
		dir = "TraderFix_v2";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "TraderFix_v2";
		credits = "Borizz.K";
		author = "Borizz.K aka [G.P]NOlZZ(MC2)";
		authorID = "76561198156927007";
		version = "2";
		extra = 0;
		type = "mod";
		dependencies[] =
		{
			"World", "Mission"
		};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] =
				{
					"StrelokLegacy/TraderFix_v2/scripts/4_World"
				};
			};

			class missionScriptModule
			{
				value="";
				files[]=
				{
					"StrelokLegacy/TraderFix_v2/scripts/5_Mission"
				};
			};
		};
	};
};
