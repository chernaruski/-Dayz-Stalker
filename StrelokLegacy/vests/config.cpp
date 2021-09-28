class CfgPatches
{
	class SL_Vests
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Vests",
			"DZ_Gear_Containers",
			"DZ_Data"
		};
		magazines[]={};
	};
};
class CfgMagazines
{
	class DefaultMagazine;
	class Magazine_Base: DefaultMagazine
	{
		inventorySlot[]=
		{
			"magazine",
			"magazine2",
			"aod_VestMagazineC",
			"aod_VestMagazineD",
			"aod_VestMagazineE",
			"aod_VestMagazineF",
			"Belt_Left",
			"VestBackpack",
			"VestPouch",
			"aod_Corsair_pouchesBR"
		};
	};
};
class cfgVehicles
{
	class aod_Vest_military_smershvest;
	class aod_Vest_loner_smershvest;
	class aod_Vest_neytral_smershvest;
	class aod_Vest_loner_tacticalvest;
	class aod_Vest_loner1_tacticalvest;
	class aod_Vest_military_tacticalvest;
	class Revivle_Smersh_stalker_1;
	class SL_military_smershvest: aod_Vest_military_smershvest
	{
		attachments[]=
		{
			"VestBackpack",
			"magazine",
			"magazine2",
			"aod_VestMagazineC",
			"aod_VestMagazineD"
		};
	};
	class SL_loner_smershvest: aod_Vest_loner_smershvest
	{
		attachments[]=
		{
			"VestBackpack",
			"magazine",
			"magazine2",
			"aod_VestMagazineC",
			"aod_VestMagazineD"
		};
	};
	class SL_neytral_smershvest: aod_Vest_neytral_smershvest
	{
		attachments[]=
		{
			"VestBackpack",
			"magazine",
			"magazine2",
			"aod_VestMagazineC",
			"aod_VestMagazineD"
		};
	};
	class SL_Smersh_stalker_1: Revivle_Smersh_stalker_1
	{
		attachments[]=
		{
			"VestBackpack",
			"magazine",
			"magazine2",
			"aod_VestMagazineC",
			"aod_VestMagazineD"
		};
	};
	class SL_loner_tacticalvest: aod_Vest_loner_tacticalvest
	{
		attachments[]=
		{
			"magazine",
			"magazine2"
		};
	};
	class SL_loner1_tacticalvest: aod_Vest_loner1_tacticalvest
	{
		attachments[]=
		{
			"magazine",
			"magazine2"
		};
	};
	class SL_military_tacticalvest: aod_Vest_military_tacticalvest
	{
		attachments[]=
		{
			"magazine",
			"magazine2"
		};
	};
};
class CfgSlots
{
	class Slot_VestMagazineA
	{
		name="magazine";
		displayName="Магазин";
		ghostIcon="magazine";
	};
	class Slot_VestMagazineB
	{
		name="Magazine2";
		displayName="Магазин";
		ghostIcon="magazine";
	};
	class Slot_aod_VestMagazineC
	{
		name="aod_VestMagazineC";
		displayName="Магазин";
		ghostIcon="magazine2";
	};
	class Slot_aod_VestMagazineD
	{
		name="aod_VestMagazineD";
		displayName="Магазин";
		ghostIcon="magazine2";
	};
	class Slot_aod_VestMagazineE
	{
		name="aod_VestMagazineE";
		displayName="Магазин";
		ghostIcon="magazine2";
	};
	class Slot_aod_VestMagazineF
	{
		name="aod_VestMagazineF";
		displayName="Магазин";
		ghostIcon="magazine2";
	};
	class Slot_aod_Corsair_pouchesBR
	{
		name="aod_Corsair_pouchesBR";
		displayName="Подсумки";
		ghostIcon="back";
	};
	class Slot_aod_VityazBag_Corsair
	{
		name="VestBackpack";
		displayName="Сухарка";
		ghostIcon="VestBackpack";
	};
};
