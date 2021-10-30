class CfgPatches
{
	class BulletRebalanceNAB
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Projectiles"
		};
		ammo[]=
		{
			"Bullet_545x39",
			"Bullet_357",
			"Bullet_9x39AP",
			"Bullet_9x39",
			"Bullet_762x39",
			"Bullet_308Win",
			"SL_Ammo_127x55"
		};
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class Bullet_545x39: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=130;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=60;
			};
		};
	};
	class Bullet_556x45: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=145;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=60;
			};
		};
	};
	class Bullet_762x39: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=160;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=70;
			};
		};
	};
	class Bullet_762x54: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=190;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=70;
			};
		};
	};
	class Bullet_9x39AP: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=175;
				armorDamage=3;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=40;
			};
		};
	};
	class Bullet_9x39: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=175;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=60;
			};
		};
	};
	class Bullet_308Win: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=210;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=60;
			};
		};
	};

	class Bullet_9x18: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=50;
			};
			class Blood
			{
				damage=50;
			};
			class Shock
			{
				damage=60;
			};
		};
	};

	class Bullet_5_7x28: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=100;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=60;
			};
		};
	};

	class Bullet_762X25: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=110;
			};
			class Blood
			{
				damage=110;
			};
			class Shock
			{
				damage=60;
			};
		};
	};

	class Bullet_762X33: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=140;
			};
			class Blood
			{
				damage=110;
			};
			class Shock
			{
				damage=60;
			};
		};
	};

	class Bullet_792X33: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=150;
			};
			class Blood
			{
				damage=110;
			};
			class Shock
			{
				damage=60;
			};
		};
	};

	class Bullet_792X57: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=175;
			};
			class Blood
			{
				damage=110;
			};
			class Shock
			{
				damage=60;
			};
		};
	};

	class Bullet_357: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=120;
			};
			class Blood
			{
				damage=110;
			};
			class Shock
			{
				damage=60;
			};
		};
	};

	class Bullet_12x99: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=4500;
			};
			class Blood
			{
				damage=110;
			};
			class Shock
			{
				damage=60;
			};
		};
	};

	class Bullet_127x55: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=600;
			};
			class Blood
			{
				damage=110;
			};
			class Shock
			{
				damage=60;
			};
		};
	};

	class Bullet_12_7x55: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=8000;
			};
			class Blood
			{
				damage=110;
			};
			class Shock
			{
				damage=60;
			};
		};
	};
};
