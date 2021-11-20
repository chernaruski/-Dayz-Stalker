class CfgPatches
{
	class SL_DZ_Weapons_Shotgun_Vepr12
	{
		units[]=
		{
			"SL_Vepr12",
			"SL_PKP",
			"SL_1014",
			"SL_MP153_Black",
			"SL_MP153",
			"SL_AK107",
			"SL_G36",
			"SL_M14EBR"
			
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
	class air_weapon_m240;
	class SL_m240_donate : air_weapon_m240
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
							1.01,
							
							{
								"air_WeaponPack\m240b\data\m240.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"air_WeaponPack\m240b\data\m240.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"air_WeaponPack\m240b\data\m240_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"air_WeaponPack\m240b\data\m240_baddamage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"air_WeaponPack\m240b\data\m240_destruct.rvmat"
							}
						}
					};
					
				};
			};
		};
	};
	class SL_m240 : air_weapon_m240
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"air_WeaponPack\m240b\data\m240.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"air_WeaponPack\m240b\data\m240.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"air_WeaponPack\m240b\data\m240_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"air_WeaponPack\m240b\data\m240_baddamage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"air_WeaponPack\m240b\data\m240_destruct.rvmat"
							}
						}
					};
					
				};
			};
		};
	};

	class air_weapon_akm_2;
	class SL_akm_2 : air_weapon_akm_2
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM_destruct.rvmat"
							}
						}
					};
					
				};
			};
		};
	}

	class air_weapon_groza;
	class SL_groza : air_weapon_groza
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"air_WeaponPack\Groza\data\groza.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"air_WeaponPack\Groza\data\groza.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"air_WeaponPack\Groza\data\groza_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"air_WeaponPack\Groza\data\groza_baddamage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"air_WeaponPack\Groza\data\groza_destruct.rvmat"
							}
						}
					};
					
				};
			};
		};
	}

	class air_weapon_sks_tactical;
	class SL_SKS_tactical : air_weapon_sks_tactical
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"DZ\weapons\firearms\SKS\data\sks.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\SKS\data\sks.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\SKS\data\sks_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\SKS\data\sks_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\firearms\SKS\data\sks_destruct.rvmat"
							}
						}
					};
					
				};
			};
		};
	}

	class dzrp_W_SVU;
	class SL_SVU : dzrp_W_SVU
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\svd\data\SVD.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\svd\data\SVD.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_destruct.rvmat"
							}
						}
					};
					
				};
			};
		};
	}

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
	class SL_1014 : dzrp2_1014
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
								"DZ\weapons\firearms\SKS\data\sks.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\SKS\data\sks.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\SKS\data\sks_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\SKS\data\sks_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\SKS\data\sks_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};

	class PKP;
	class SL_PKP : PKP
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=900;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SL_PKP_donate : PKP
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM_destruct.rvmat"
							}
						}
					};
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
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_destruct.rvmat"
							}
						}
					};
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
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\svd\data\SVD.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\svd\data\SVD.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_destruct.rvmat"
							}
						}
					};
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
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};

	class air_weapon_MP153;
	class air_weapon_MP153_Black;

	class SL_MP153 : air_weapon_MP153 
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"air_WeaponPack\mp153\data\mp153_2.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"air_WeaponPack\mp153\data\mp153_2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"air_WeaponPack\mp153\data\mp153_2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"air_WeaponPack\mp153\data\mp153_2_baddamage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"air_WeaponPack\mp153\data\mp153_2_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	}

	class SL_MP153_Black : air_weapon_MP153_Black 
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"air_WeaponPack\mp153\data\mp153_2.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"air_WeaponPack\mp153\data\mp153_2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"air_WeaponPack\mp153\data\mp153_2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"air_WeaponPack\mp153\data\mp153_2_baddamage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"air_WeaponPack\mp153\data\mp153_2_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	}

	
};
	