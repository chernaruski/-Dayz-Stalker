class CfgMods
{
    class SearchToSurvive
    {
        dir = "SCSearchToSurvive";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "SCSearchToSurvive";
        credits = "Snaret";
        author = "Snaret";
        authorID = ""; 
        version = "1.0"; 
        extra = 0;
        type = "mod";
        
        dependencies[] = {"World"};
        
        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = 
				{
					"StrelokLegacy/SCSearchToSurvive/scripts/4_World"
				};
			};
		};
    };
};

class CfgPatches
{
	class SearchToSurvive
	{
		units[]={};
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
	class Inventory_Base;
	
	class SCGarbage_Bin: Inventory_Base
	{
		scope=2;
		displayName="Мусорная корзина";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\residential\Misc\Garbage_Bin.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCGarbage_Container: Inventory_Base
	{
		scope=2;
		displayName="Мусорный контейнер";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\dz\structures\residential\Misc\Garbage_Container.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCGarbage_Container_Glass: Inventory_Base
	{
		scope=2;
		displayName="Мусорный контейнер";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\dz\structures\residential\Misc\Garbage_Container_Glass.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCGarbage_Container_Paper: Inventory_Base
	{
		scope=2;
		displayName="Мусорный контейнер";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\dz\structures\residential\Misc\Garbage_Container_Paper.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCGarbage_Container_Plastic: Inventory_Base
	{
		scope=2;
		displayName="Мусорный контейнер";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\dz\structures\residential\Misc\Garbage_Container_Plastic.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCGarbage_Container2_Closed: Inventory_Base
	{
		scope=2;
		displayName="Пластиковый мусорный контейнер";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures_bliss\residential\Misc\Garbage_Container2_Closed.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCGarbage_Container2_Open: Inventory_Base
	{
		scope=2;
		displayName="Пластиковый мусорный контейнер";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures_bliss\residential\Misc\Garbage_Container2_Open.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCGarbage_Bin2: Inventory_Base
	{
		scope=2;
		displayName="Пластиковая мусорная корзина";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures_bliss\residential\Misc\Garbage_Bin2.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCbox_c_multi: Inventory_Base
	{
		scope=2;
		displayName="Картонные коробки";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\decoration\box_c\box_c_multi.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCMisc_PostBox1: Inventory_Base
	{
		scope=2;
		displayName="Почтовый ящик";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\residential\misc\misc_postbox1.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCWoodenCrate: Inventory_Base
	{
		scope=2;
		displayName="Деревянный ящик";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures_bliss\residential\Misc\Misc_WoodenCrate.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCcashier: Inventory_Base
	{
		scope=2;
		displayName="Кассовый аппарат";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\generalstore\cashier.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SClocker_closed_blue_v1: Inventory_Base
	{
		scope=2;
		displayName="Металлический ящик";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\cases\locker\locker_closed_blue_v1.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SClocker_closed_blue_v2: Inventory_Base
	{
		scope=2;
		displayName="Металлический ящик";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\cases\locker\locker_closed_blue_v2.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SClocker_closed_blue_v3: Inventory_Base
	{
		scope=2;
		displayName="Металлический ящик";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\cases\locker\locker_closed_blue_v3.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SClocker_closed_v1: Inventory_Base
	{
		scope=2;
		displayName="Металлический ящик";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\cases\locker\locker_closed_v1.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SClocker_closed_v2: Inventory_Base
	{
		scope=2;
		displayName="Металлический ящик";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\cases\locker\locker_closed_v2.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SClocker_closed_v3: Inventory_Base
	{
		scope=2;
		displayName="Металлический ящик";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\cases\locker\locker_closed_v3.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCalmara: Inventory_Base
	{
		scope=2;
		displayName="Шкаф";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\cases\almara\almara.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCcase_a: Inventory_Base
	{
		scope=2;
		displayName="Шкаф";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\cases\case_a\case_a.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCcase_bedroom_a: Inventory_Base
	{
		scope=2;
		displayName="Тумбочка";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\cases\case_bedroom_a\case_bedroom_a.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCcase_bedroom_b: Inventory_Base
	{
		scope=2;
		displayName="Тумба";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\cases\case_bedroom_b\case_bedroom_b.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCcase_cans_b: Inventory_Base
	{
		scope=2;
		displayName="Зеленый шкаф";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\cases\case_cans_b\case_cans_b.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SClibrary_a: Inventory_Base
	{
		scope=2;
		displayName="Шкаф с книгами";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\cases\library_a\library_a.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SClibrary_a_open: Inventory_Base
	{
		scope=2;
		displayName="Шкаф с книгами";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\cases\library_a\library_a_open.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCskrin_bar: Inventory_Base
	{
		scope=2;
		displayName="Шкаф-стенка";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\cases\skrin_bar\skrin_bar.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SClekarnicka: Inventory_Base
	{
		scope=2;
		displayName="Настенная аптечка";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\decoration\lekarnicka\lekarnicka.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCpokladna: Inventory_Base
	{
		scope=2;
		displayName="Кассовый аппарат";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\eletrical_appliances\pokladna\pokladna.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCvending_machine: Inventory_Base
	{
		scope=2;
		displayName="Аппарат для продажи напитков";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\eletrical_appliances\vending_machine\vending_machine.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCwashing_machine: Inventory_Base
	{
		scope=2;
		displayName="Стиральная машинка";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\eletrical_appliances\washing_machine\washing_machine.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCfridge: Inventory_Base
	{
		scope=2;
		displayName="Холодильник";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\kitchen\fridge\fridge.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCkitchenstove_elec: Inventory_Base
	{
		scope=2;
		displayName="Электрическая печь";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\kitchen\kitchenstove_elec\kitchenstove_elec.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SClab_teacher_bench: Inventory_Base
	{
		scope=2;
		displayName="Лабораторный стол";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\school_equipment\lab_teacher_bench.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCvaulting_box_large: Inventory_Base
	{
		scope=2;
		displayName="Ящики-хранилища";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\school_equipment\vaulting_box_large.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCoffice_desk: Inventory_Base
	{
		scope=2;
		displayName="Офисный стол";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\tables\office_desk\desk_office.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCbag_dz: Inventory_Base
	{
		scope=2;
		displayName="Мешок";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\various\bag_dz.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCkitchen_unit_a_dz: Inventory_Base
	{
		scope=2;
		displayName="Буфет";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\various\kitchen_unit_a_dz.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCGarbage_Pile1: Inventory_Base
	{
		scope=2;
		displayName="Куча мусора";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\residential\Misc\Garbage_Pile1.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCGarbage_Pile2: Inventory_Base
	{
		scope=2;
		displayName="Куча мусора";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\residential\Misc\Garbage_Pile2.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCGarbage_Pile3: Inventory_Base
	{
		scope=2;
		displayName="Куча мусора";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\residential\Misc\Garbage_Pile3.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCGarbage_Pile4: Inventory_Base
	{
		scope=2;
		displayName="Куча мусора";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\residential\Misc\Garbage_Pile4.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCGarbage_Pile5: Inventory_Base
	{
		scope=2;
		displayName="Куча мусора";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\residential\Misc\Garbage_Pile5.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCGarbage_Pile6: Inventory_Base
	{
		scope=2;
		displayName="Куча мусора";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\residential\Misc\Garbage_Pile6.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCGarbage_Pile7: Inventory_Base
	{
		scope=2;
		displayName="Куча мусора";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures_bliss\residential\Misc\Garbage_Pile7.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCGarbage_Pile8: Inventory_Base
	{
		scope=2;
		displayName="Куча мусора";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures_bliss\residential\Misc\Garbage_Pile8.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCAmmoBox: Inventory_Base
	{
		scope=2;
		displayName="Ящик из под боеприпасов";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\dz\gear\containers\300RoundBox.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCwardrobe_a: Inventory_Base
	{
		scope=2;
		displayName="Шифоньер";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures_bliss\ruins\Proxy\wardrobe_a.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCwardrobe_b: Inventory_Base
	{
		scope=2;
		displayName="Шифоньер";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures_bliss\ruins\Proxy\wardrobe_b.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCmetalcase_01: Inventory_Base
	{
		scope=2;
		displayName="Металлический шкафчик";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\cases\metalcase\metalcase_01.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};	
	class SCcase_sink_a: Inventory_Base
	{
		scope=2;
		displayName="Шкаф с раковиной";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\kitchen\case_sink_a\case_sink_a.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCclass_case_b_closed: Inventory_Base
	{
		scope=2;
		displayName="Шкаф с полками";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\school_equipment\class_case_b_closed.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCclassroom_case_a: Inventory_Base
	{
		scope=2;
		displayName="Шкаф";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures_bliss\ruins\Proxy\classroom_case_a.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCclassroom_case_b_crushed: Inventory_Base
	{
		scope=2;
		displayName="Обломки мебели";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures_bliss\ruins\Proxy\classroom_case_b_crushed.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCclassroom_case_a_crushed: Inventory_Base
	{
		scope=2;
		displayName="Обломки мебели";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures_bliss\ruins\Proxy\classroom_case_a_crushed.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCbed_large_metal_crushed: Inventory_Base
	{
		scope=2;
		displayName="Обломки мебели";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures_bliss\ruins\Proxy\bed_large_metal_crushed.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCtable_crushed: Inventory_Base
	{
		scope=2;
		displayName="Обломки мебели";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures_bliss\ruins\Proxy\table_crushed.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCshelfs_small_crushed: Inventory_Base
	{
		scope=2;
		displayName="Обломки металлической кровати";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures_bliss\ruins\Proxy\shelfs_small_crushed.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCMisc_PostBox2: Inventory_Base
	{
		scope=2;
		displayName="Почтовый ящик";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\residential\misc\misc_postbox2.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCoffice_table_a: Inventory_Base
	{
		scope=2;
		displayName="Офисный стол";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\tables\office_table_a\office_table_a.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class SCtable_drawer: Inventory_Base
	{
		scope=2;
		displayName="Стол";
		descriptionShort="";
		visibilityModifier=0.94999999;
		model="\DZ\structures\furniture\tables\table_drawer\table_drawer.p3d";
		carveNavmesh=1;
		handheld="false";
		weight=10000;
		physLayer="item_large";
		itemSize[]={16,16};
		canBeDigged=0;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
};