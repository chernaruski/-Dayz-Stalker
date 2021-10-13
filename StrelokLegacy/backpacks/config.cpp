class CfgPatches
{
	class SL_Backpacks
	{
		units[]=
		{
			"SL_CoyoteBag_Green_80",
			"SL_AliceBag_Green_100",
			"SL_AliceBag_Black_100",
			"SL_AliceBag_Camo_100",
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
	class SL_CoyoteBag_Green_80: CoyoteBag_Green
	{
		itemsCargoSize[]={8,10};
	};

	class AliceBag_Green;
	class AliceBag_Black;
	class AliceBag_Camo;
	class SL_AliceBag_Green_100: AliceBag_Green
	{
		itemsCargoSize[]={10,10};
	};
	class SL_AliceBag_Black_100: AliceBag_Black
	{
		itemsCargoSize[]={10,10};
	};
	class SL_AliceBag_Camo_100: AliceBag_Camo
	{
		itemsCargoSize[]={10,10};
	};

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
			"Belt_Left",
			"knife",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
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
			"Belt_Left",
			"Belt_Back",
			"VestHolster",
			"VestPouch",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
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
			"Belt_Left",
			"knife",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
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
			"Belt_Left",
			"Belt_Back",
			"VestHolster",
			"VestPouch",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
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
			"Belt_Left",
			"knife",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
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
			"Belt_Left",
			"Belt_Back",
			"VestHolster",
			"VestPouch",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
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
			"Belt_Left",
			"knife",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
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
			"Belt_Left",
			"Belt_Back",
			"VestHolster",
			"VestPouch",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
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
	class Revivle_StalkerBag_monolit;
	class SL_ArmyBag : Revivle_StalkerBag_monolit
	{
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie"
		};
		itemSize[]={3,5};
		itemsCargoSize[]={10,13};
	};

	class FP4_HuntingTOP_Bag;
	class FP4_HuntingTOP_Bag_BLACK;

	class SL_HuntingBag_500 : FP4_HuntingTOP_Bag
	{
		attachments[]=
		{
			"melee",
			"Belt_Left",
			"Belt_Back",
			"VestHolster",
			"VestPouch",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
		};
		itemSize[]={3,5};
		itemsCargoSize[]={10,50};
	};

	class SL_HuntingBag_500_Black : FP4_HuntingTOP_Bag_BLACK
	{
		attachments[]=
		{
			"melee",
			"Belt_Left",
			"Belt_Back",
			"VestHolster",
			"VestPouch",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
		};
		itemSize[]={3,5};
		itemsCargoSize[]={10,50};
	};

	class dzrp_backpack_mountain_free;
	class dzrp_backpack_mountain_dolg;
	class dzrp_backpack_mountain_band;
	class dzrp_backpack_mountain_green_st;
	class dzrp_backpack_mountain_st2;

	class SL_MountainBag_250_Svoboda : dzrp_backpack_mountain_free
	{
		attachments[]=
		{
			"melee",
			"Chemlight",
			"Belt_Left",
			"knife",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
		};
	};

	class SL_MountainBag_500_Svoboda : dzrp_backpack_mountain_free
	{
		attachments[]=
		{
			"melee",
			"Belt_Left",
			"Belt_Back",
			"VestHolster",
			"VestPouch",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
		};
		itemsCargoSize[]={10,50};
	};

	class SL_MountainBag_250_Dolg : dzrp_backpack_mountain_dolg
	{
		attachments[]=
		{
			"melee",
			"Chemlight",
			"Belt_Left",
			"knife",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
		};
	};

	class SL_MountainBag_500_Dolg : dzrp_backpack_mountain_dolg
	{
		attachments[]=
		{
			"melee",
			"Belt_Left",
			"Belt_Back",
			"VestHolster",
			"VestPouch",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
		};
		itemsCargoSize[]={10,50};
	};

	class SL_MountainBag_250_Band : dzrp_backpack_mountain_band
	{
		attachments[]=
		{
			"melee",
			"Chemlight",
			"Belt_Left",
			"knife",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
		};
	};

	class SL_MountainBag_500_Band : dzrp_backpack_mountain_band
	{
		attachments[]=
		{
			"melee",
			"Belt_Left",
			"Belt_Back",
			"VestHolster",
			"VestPouch",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
		};
		itemsCargoSize[]={10,50};
	};

	class SL_MountainBag_250_Green_st : dzrp_backpack_mountain_green_st
	{
		attachments[]=
		{
			"melee",
			"Chemlight",
			"Belt_Left",
			"knife",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
		};
	};

	class SL_MountainBag_500_Green_st : dzrp_backpack_mountain_green_st
	{
		attachments[]=
		{
			"melee",
			"Belt_Left",
			"Belt_Back",
			"VestHolster",
			"VestPouch",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
		};
		itemsCargoSize[]={10,50};
	};

	class SL_MountainBag_250_st2 : dzrp_backpack_mountain_st2
	{
		attachments[]=
		{
			"melee",
			"Chemlight",
			"Belt_Left",
			"knife",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
		};
	};

	class SL_MountainBag_500_st2 : dzrp_backpack_mountain_st2
	{
		attachments[]=
		{
			"melee",
			"Belt_Left",
			"Belt_Back",
			"VestHolster",
			"VestPouch",
			"WalkieTalkie",
			"CookingEquipment",
			"cookingtripod"
		};
		itemsCargoSize[]={10,50};
	};


};
