class CfgPatches
{
	class SL_Jackets
	{
		units[]=
		{
			"SL_M65Jacket_Khaki"
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
	class M65Jacket_Khaki;
	class SL_M65Jacket_Khaki: M65Jacket_Khaki
	{
		scope=2;
		visibilityModifier=0.40000001;
		itemSize[]={4,3};
		itemsCargoSize[]={7,8};
		heatIsolation=1;
		hiddenSelectionsTextures[]=
		{
			"\StrelokLegacy\jackets\m65\data\SL_m65_jacket_khaki_co.paa",
			"\StrelokLegacy\jackets\m65\data\SL_m65_jacket_khaki_co.paa",
			"\StrelokLegacy\jackets\m65\data\SL_m65_jacket_khaki_co.paa"
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
								"DZ\characters\tops\Data\M65_Jacket.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\tops\Data\M65_Jacket.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\tops\Data\M65_Jacket_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\tops\Data\M65_Jacket_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\tops\Data\M65_Jacket_destruct.rvmat"
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
						damage=0.80000001;
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
						damage=0.80000001;
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
