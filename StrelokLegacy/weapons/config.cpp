class CfgPatches
{
	class SL_DZ_Weapons_Shotgun_Vepr12
	{
		units[]=
		{
			"SL_Vepr12",
			"SL_PKM",
			"SL_PKP",
			"SL_1014"
			
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
	};
};

class cfgWeapons
{
	class Vepr12_AoD;
	class SL_Vepr12 : Vepr12_AoD
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
					
				};
			};
		};
	};
	
	class dzrp_PKM;
	class SL_PKM : dzrp_PKM
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
				};
			};
		};
	};
	
	class dzrp2_1014;
	class SL_1014 : dzrp2_1014
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
				};
			};
		};
	};
	class dzrp2_PKP;
	class SL_PKP : dzrp2_PKP
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
				};
			};
		};
	};
	
	class dzrp2_G36;
	class SL_G36 : dzrp2_G36
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};
	
	class dzrp2_M14EBR;
	class SL_M14EBR : dzrp2_M14EBR
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};

	class dzrp2_AK107;
	class SL_AK107 : dzrp2_AK107
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};
};
	