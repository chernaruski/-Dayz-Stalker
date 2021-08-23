class CfgPatches
{
	class SL_Belts
	{
		units[]=
		{
			"SL_Belt_42"
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
	class MilitaryBelt;
	class SL_Belt_42: MilitaryBelt
	{
		displayName="Тактический ремень";
		descriptionShort="На первый взгляд обычный ремень. Удобный, легкий, прочный";
		itemsCargoSize[]={6,7};
		class Health
		{
			hitpoints=1000;
			healthLevels[]=
			{
						
				{
					1,
							
						{
							"DZ\characters\belts\data\mil_belt.rvmat"
						}
				},
						
				{
					0.69999999,
							
						{
							"DZ\characters\belts\data\mil_belt.rvmat"
						}
				},
						
				{
					0.5,
						
						{
							"DZ\characters\belts\data\mil_belt_damage.rvmat"
						}
				},
						
				{
					0.30000001,
							
						{
							"DZ\characters\belts\data\mil_belt_damage.rvmat"
						}
				},
						
				{
					0,
							
						{
							"DZ\characters\belts\data\mil_belt_destruct.rvmat"
						}
				}
			};
		};
	};
};
	
