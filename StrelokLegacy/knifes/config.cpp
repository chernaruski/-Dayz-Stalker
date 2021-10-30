class CfgPatches
{
	class SL_Knife
	{
		units[]=
		{
			"SL_TacticalKnife"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee"
		};
	};
};
class CfgVehicles
{
	class CombatKnife;
    class SL_TacticalKnife: CombatKnife
	{
		displayName="Тактический нож";
		descriptionShort="Удобный тактический нож из очень прочной стали";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=90000000;
				};
			};
		};
	};

	class air_weapon_knife_geralt;
    class SL_Knife_geralt : air_weapon_knife_geralt
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=90000000;
				};
			};
		};
	};
};
