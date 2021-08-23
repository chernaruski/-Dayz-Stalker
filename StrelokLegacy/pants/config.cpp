class CfgPatches
{
	class SL_Pants
	{
		units[]=
		{
			"SL_CargoPants_Khaki"
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
	class CargoPants_Green;
	class SL_CargoPants_Khaki: CargoPants_Green
	{
		scope=2;
		visibilityModifier=0.3;		
		itemSize[]={4,3};
		itemsCargoSize[]={7,8};
		heatIsolation=1;
		hiddenSelectionsTextures[]=
		{
			"\StrelokLegacy\pants\cargo\data\SL_cargopants_green_co.paa",
			"\StrelokLegacy\pants\cargo\data\SL_cargopants_green_co.paa",
			"\StrelokLegacy\pants\cargo\data\SL_cargopants_green_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\pants\Data\CargoPants.rvmat",
								"DZ\characters\pants\Data\CargoPants_g.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\pants\Data\CargoPants.rvmat",
								"DZ\characters\pants\Data\CargoPants_g.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\pants\Data\CargoPants_damage.rvmat",
								"DZ\characters\pants\Data\CargoPants_g_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\pants\Data\CargoPants_damage.rvmat",
								"DZ\characters\pants\Data\CargoPants_g_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\pants\Data\CargoPants_destruct.rvmat",
								"DZ\characters\pants\Data\CargoPants_g_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
			};
		};
	};
};