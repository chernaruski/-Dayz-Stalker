class CfgPatches
{
	class SL_Containers
	{
		units[]={
			"SL_AmmoBox_100",
			"SL_AmmoBox_500"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class AmmoBox;
	class SmallProtectorCase;
	class FirstAidKit;
    class SL_AmmoBox_100: AmmoBox
	{
		scope=2;
		displayName="Вместительная коробка для патронов";
		descriptionShort="Удобная и вместительная коробка";
		itemSize[]={4,3};
		itemsCargoSize[]={10,10};
	};
	class SL_AmmoBox_500: AmmoBox
	{
		scope=2;
		displayName="Вместительная коробка для патронов";
		descriptionShort="Удобная и вместительная коробка";
		itemSize[]={4,3};
		itemsCargoSize[]={10,50};
	};
	class SL_ProtectorCase_100: SmallProtectorCase
	{
		scope=2;
		displayName="Вместительный контейнер";
		descriptionShort="Вместительный защитный контейнер";
		itemSize[]={4,3};
		itemsCargoSize[]={10,10};
	};
	class SL_FirstAidKit_100: FirstAidKit
	{
		scope=2;
		displayName="Вместительная аптечка";
		descriptionShort="Вместительная аптечка";
		itemSize[]={4,3};
		itemsCargoSize[]={10,10};
	};
};