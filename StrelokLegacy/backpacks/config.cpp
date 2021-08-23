class CfgPatches
{
	class SL_Backpacks
	{
		units[]=
		{
			"SL_MountainBag_120_Green",
			"SL_MountainBag_250_Green",
			"SL_MountainBag_500_Green",
			"SL_MountainBag_100_Black",
			"SL_MountainBag_250_Black",
			"SL_MountainBag_500_Black",
			"SL_MountainBag_120_Camo",
			"SL_MountainBag_250_Camo",
			"SL_MountainBag_500_Camo",
			"SL_MountainBag_120_BlackCamo",
			"SL_MountainBag_250_BlackCamo",
			"SL_MountainBag_500_BlackCamo"
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
	class CoyoteBag_Green;
	class SL_CoyoteBag_Green_80: CoyoteBag_Green;

	class AliceBag_Green;
	class AliceBag_Black;
	class AliceBag_Camo;
	class SL_AliceBag_Green_100: AliceBag_Green;
	class SL_AliceBag_Black_100: AliceBag_Black;
	class SL_AliceBag_Camo_100: AliceBag_Camo;

	class MountainBag_ColorBase;
	class SL_MountainBag_120_Green: MountainBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		displayName="Туристический рюкзак";
		descriptionShort="Вместительный туристический рюкзак";
		attachments[]=
		{
			"Chemlight",
			"knife",
			"WalkieTalkie"
		};
		itemSize[]={3,5};
		itemsCargoSize[]={10,12};
		hiddenSelectionsTextures[]=
		{
			"\StrelokLegacy\backpacks\data\sl_mountain_green_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_green_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_green_co.paa"
		};
	};
	class SL_MountainBag_250_Green: MountainBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		displayName="Туристический рюкзак";
		descriptionShort="Вместительный туристический рюкзак";
		attachments[]=
		{
			"melee",
			"Chemlight",
			"knife",
			"WalkieTalkie"
		};
		itemSize[]={3,5};
		itemsCargoSize[]={10,25};
		hiddenSelectionsTextures[]=
		{
			"\StrelokLegacy\backpacks\data\sl_mountain_green_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_green_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_green_co.paa"
		};
	};
	class SL_MountainBag_500_Green: MountainBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		displayName="Туристический рюкзак";
		descriptionShort="Вместительный туристический рюкзак";
		attachments[]=
		{
			"melee",
			"Chemlight",
			"Belt_Back",
			"VestHolster",
			"VestPouch",
			"WalkieTalkie"
		};
		itemSize[]={3,5};
		itemsCargoSize[]={10,50};
		hiddenSelectionsTextures[]=
		{
			"\StrelokLegacy\backpacks\data\sl_mountain_green_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_green_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_green_co.paa"
		};
	};

	class SL_MountainBag_120_Black: MountainBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		displayName="Туристический рюкзак";
		descriptionShort="Вместительный туристический рюкзак";
		attachments[]=
		{
			"Chemlight",
			"knife",
			"WalkieTalkie"
		};
		itemSize[]={3,5};
		itemsCargoSize[]={10,12};
		hiddenSelectionsTextures[]=
		{
			"\StrelokLegacy\backpacks\data\sl_mountain_black_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_black_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_black_co.paa"
		};
	};
	class SL_MountainBag_250_Black: MountainBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		displayName="Туристический рюкзак";
		descriptionShort="Вместительный туристический рюкзак";
		attachments[]=
		{
			"melee",
			"Chemlight",
			"knife",
			"WalkieTalkie"
		};
		itemSize[]={3,5};
		itemsCargoSize[]={10,25};
		hiddenSelectionsTextures[]=
		{
			"\StrelokLegacy\backpacks\data\sl_mountain_black_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_black_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_black_co.paa"
		};
	};
	class SL_MountainBag_500_Black: MountainBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		displayName="Туристический рюкзак";
		descriptionShort="Вместительный туристический рюкзак";
		attachments[]=
		{
			"melee",
			"Chemlight",
			"Belt_Back",
			"VestHolster",
			"VestPouch",
			"WalkieTalkie"
		};
		itemSize[]={3,5};
		itemsCargoSize[]={10,50};
		hiddenSelectionsTextures[]=
		{
			"\StrelokLegacy\backpacks\data\sl_mountain_black_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_black_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_black_co.paa"
		};
	};

	class SL_MountainBag_120_Camo: MountainBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		displayName="Туристический рюкзак";
		descriptionShort="Вместительный туристический рюкзак";
		attachments[]=
		{
			"Chemlight",
			"knife",
			"WalkieTalkie"
		};
		itemSize[]={3,5};
		itemsCargoSize[]={10,12};
		hiddenSelectionsTextures[]=
		{
			"\StrelokLegacy\backpacks\data\sl_mountain_camo_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_camo_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_camo_co.paa"
		};
	};
	class SL_MountainBag_250_Camo: MountainBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		displayName="Туристический рюкзак";
		descriptionShort="Вместительный туристический рюкзак";
		attachments[]=
		{
			"melee",
			"Chemlight",
			"knife",
			"WalkieTalkie"
		};
		itemSize[]={3,5};
		itemsCargoSize[]={10,25};
		hiddenSelectionsTextures[]=
		{
			"\StrelokLegacy\backpacks\data\sl_mountain_camo_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_camo_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_camo_co.paa"
		};
	};
	class SL_MountainBag_500_Camo: MountainBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		displayName="Туристический рюкзак";
		descriptionShort="Вместительный туристический рюкзак";
		attachments[]=
		{
			"melee",
			"Chemlight",
			"Belt_Back",
			"VestHolster",
			"VestPouch",
			"WalkieTalkie"
		};
		itemSize[]={3,5};
		itemsCargoSize[]={10,50};
		hiddenSelectionsTextures[]=
		{
			"\StrelokLegacy\backpacks\data\sl_mountain_camo_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_camo_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_camo_co.paa"
		};
	};

	class SL_MountainBag_120_BlackCamo: MountainBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		displayName="Туристический рюкзак";
		descriptionShort="Вместительный туристический рюкзак";
		attachments[]=
		{
			"Chemlight",
			"knife",
			"WalkieTalkie"
		};
		itemSize[]={3,5};
		itemsCargoSize[]={10,12};
		hiddenSelectionsTextures[]=
		{
			"\StrelokLegacy\backpacks\data\sl_mountain_blackcamo_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_blackcamo_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_blackcamo_co.paa"
		};
	};
	class SL_MountainBag_250_BlackCamo: MountainBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		displayName="Туристический рюкзак";
		descriptionShort="Вместительный туристический рюкзак";
		attachments[]=
		{
			"melee",
			"Chemlight",
			"knife",
			"WalkieTalkie"
		};
		itemSize[]={3,5};
		itemsCargoSize[]={10,25};
		hiddenSelectionsTextures[]=
		{
			"\StrelokLegacy\backpacks\data\sl_mountain_blackcamo_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_blackcamo_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_blackcamo_co.paa"
		};
	};
	class SL_MountainBag_500_BlackCamo: MountainBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		displayName="Туристический рюкзак";
		descriptionShort="Вместительный туристический рюкзак";
		attachments[]=
		{
			"melee",
			"Chemlight",
			"Belt_Back",
			"VestHolster",
			"VestPouch",
			"WalkieTalkie"
		};
		itemSize[]={3,5};
		itemsCargoSize[]={10,50};
		hiddenSelectionsTextures[]=
		{
			"\StrelokLegacy\backpacks\data\sl_mountain_blackcamo_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_blackcamo_co.paa",
			"\StrelokLegacy\backpacks\data\sl_mountain_blackcamo_co.paa"
		};
	};
};