class CfgPatches
{
	class SL_DZ_Weapons
	{
		units[]=
		{
			"SL_Vepr12"
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
	class SL_Vepr12: Vepr12_AoD
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_main_body.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_gas_tube.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_handle.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_magwell.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_main_barrel.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_upper.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_main_body.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_gas_tube.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_handle.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_magwell.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_main_barrel.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_upper.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_main_body_damage.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_gas_tube_damage.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_handle_damage.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_magwell_damage.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_main_barrel_damage.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_upper_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_main_body_damage.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_gas_tube_damage.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_handle_damage.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_magwell_damage.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_main_barrel_damage.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_upper_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_main_body_destruct.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_gas_tube_destruct.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_handle_destruct.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_magwell_destruct.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_main_barrel_destruct.rvmat",
								"areaofdecay\dz_aod_weapons\wpn_vepr12\data\weapon_vepr12_upper_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	
	class dzrp2_1014;
	
	class SL_1014: dzrp2_1014
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
	
	class SL_PKM: dzrp_PKM
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
	
	class SL_PKM_donate: dzrp_PKM
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
	
	class SL_PKP: dzrp2_PKP
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
	
	class SL_PKP_donate: dzrp2_PKP
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
};
