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
			"Bullet_308Win"
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
};
