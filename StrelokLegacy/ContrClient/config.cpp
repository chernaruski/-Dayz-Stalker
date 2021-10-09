class CfgPatches
{
	class Client
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class Client
	{
		dir="Client";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Client";
		overview="Client";
		credits="Borland";
		author="Borland";
		authorID="0";
		version=1.1;
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"StrelokLegacy/ContrClient/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"StrelokLegacy/ContrClient/scripts/4_World"
				};
			};
		};
	};
};
