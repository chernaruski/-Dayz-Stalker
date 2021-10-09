class CfgPatches
{
	class SL_Medicine
	{
		units[]=
		{
			"SlAptechkaOr",
			"SlAptechkaBl",
			"SlAptechkaYe"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Medical",
			"DZ_Characters"
		};
	};
};
class CfgMods
{
	class SL_Medicine
	{
		dir="SL_Medicine";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="SL_Medicine";
		credits="Crevan";
		author="Crevan";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"StrelokLegacy\SL_Medicine\4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
	class DayZRPMedKit_Base;
	class SL_Aptechka_Base : DayZRPMedKit_Base
	{
		SingleUseActions[]={};
	};

	class SlAptechkaOr: SL_Aptechka_Base
	{
		scope=2;
		displayName="Аптечка";
		descriptionShort="Аптечка Индивидуальная";
		weight=60;
		model="DayZRP\1static\Predmet\Medicine\apteka\MedKit.p3d";
		hiddenSelectionsTextures[]=
		{
			"DayZRP\1static\Predmet\Medicine\apteka\data\Medkit_co1.paa"
		};
	};
	class SlAptechkaBl: SL_Aptechka_Base
	{
		scope=2;
		displayName="Армейская аптечка";
		descriptionShort="Аптечка Армейская Индивидуальная";
		weight=60;
		model="DayZRP\1static\Predmet\Medicine\apteka\MedKit.p3d";
		hiddenSelectionsTextures[]=
		{
			"DayZRP\1static\Predmet\Medicine\apteka\data\Medkit_co2.paa"
		};
	};
	class SlAptechkaYe: SL_Aptechka_Base
	{
		scope=2;
		displayName="Научная аптечка";
		descriptionShort="Аптечка Научная Индивидуальная";
		weight=60;
		model="DayZRP\1static\Predmet\Medicine\apteka\MedKit.p3d";
		hiddenSelectionsTextures[]=
		{
			"DayZRP\1static\Predmet\Medicine\apteka\data\Medkit_co3.paa"
		};
	};
};