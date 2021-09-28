class CfgPatches
{
	class SL_Skat_helm
	{
		units[]=
		{
			"SL_Skat_Duty_Helm",
			"SL_Skat_Mil_Helm"
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
	class Mich2001Helmet;
	class SL_Skat_Duty_Helm: Mich2001Helmet
	{
		scope=2;
		displayName="Шлем «Сфера-12М» (Долг)";
		descriptionShort="Армейский бронекостюм СКАТ-9М создан для проведения штурмовых операций в зонах активности аномалий. В составе: тяжёлый армейский бронекостюм серии ПСЗ-12п, встроенный компенсационный костюм, шлем Сфера-12М. Предоставляет великолепную защиту от пулевого и осколочного попадания, при этом не снижает подвижности солдата. В наличии сбалансированная система защиты от аномального воздействия.";
		model="\areaofdecay\dz_aod_characters\helmet\helmet_skat\aod_skat_duty_helmet_g.p3d";
		noMask=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"areaofdecay\dz_aod_characters\vests\vests_skat\data\vests_skat_duty.rvmat"
							},
							
							{
								"areaofdecay\dz_aod_characters\helmet\helmet_skat\data\helm_skat_antigas.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"areaofdecay\dz_aod_characters\vests\vests_skat\data\vests_skat_duty.rvmat"
							},
							
							{
								"areaofdecay\dz_aod_characters\helmet\helmet_skat\data\helm_skat_antigas.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"areaofdecay\dz_aod_characters\vests\vests_skat\data\vests_skat_duty_damage.rvmat"
							},
							
							{
								"areaofdecay\dz_aod_characters\helmet\helmet_skat\data\helm_skat_antigas_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"areaofdecay\dz_aod_characters\vests\vests_skat\data\vests_skat_duty_damage.rvmat"
							},
							
							{
								"areaofdecay\dz_aod_characters\helmet\helmet_skat\data\helm_skat_antigas_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"areaofdecay\dz_aod_characters\vests\vests_skat\data\vests_skat_duty_destruct.rvmat"
							},
							
							{
								"areaofdecay\dz_aod_characters\helmet\helmet_skat\data\helm_skat_antigas_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\areaofdecay\dz_aod_characters\helmet\helmet_skat\aod_skat_duty_helmet.p3d";
			female="\areaofdecay\dz_aod_characters\helmet\helmet_skat\aod_skat_duty_helmet.p3d";
		};
	};
	class SL_Skat_Mil_Helm: SL_Skat_Duty_Helm
	{
		displayName="Шлем «Сфера-12М» (Военные)";
		model="\areaofdecay\dz_aod_characters\helmet\helmet_skat\aod_skat_military_helmet_g.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"areaofdecay\dz_aod_characters\vests\vests_skat\data\vests_skat_military.rvmat"
							},
							
							{
								"areaofdecay\dz_aod_characters\helmet\helmet_skat\data\helm_skat_antigas.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"areaofdecay\dz_aod_characters\vests\vests_skat\data\vests_skat_military.rvmat"
							},
							
							{
								"areaofdecay\dz_aod_characters\helmet\helmet_skat\data\helm_skat_antigas.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"areaofdecay\dz_aod_characters\vests\vests_skat\data\vests_skat_military_damage.rvmat"
							},
							
							{
								"areaofdecay\dz_aod_characters\helmet\helmet_skat\data\helm_skat_antigas_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"areaofdecay\dz_aod_characters\vests\vests_skat\data\vests_skat_military_damage.rvmat"
							},
							
							{
								"areaofdecay\dz_aod_characters\helmet\helmet_skat\data\helm_skat_antigas_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"areaofdecay\dz_aod_characters\vests\vests_skat\data\vests_skat_military_destruct.rvmat"
							},
							
							{
								"areaofdecay\dz_aod_characters\helmet\helmet_skat\data\helm_skat_antigas_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\areaofdecay\dz_aod_characters\helmet\helmet_skat\aod_skat_military_helmet.p3d";
			female="\areaofdecay\dz_aod_characters\helmet\helmet_skat\aod_skat_military_helmet.p3d";
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMxHelmet_visor: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"DBHelmetVisor"
		};
		model="\dz\characters\headgear\MxHelmet_visor.p3d";
	};
	class ProxyMxHelmet_mouthguard: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"DBHelmetMouth"
		};
		model="\dz\characters\headgear\MxHelmet_mouthguard.p3d";
	};
	class Proxyhelmet_flashlight: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"helmetFlashlight"
		};
		model="\dz\characters\headgear\proxies\helmet_flashlight.p3d";
	};
};
