class CfgPatches
{
	class SL_Suppressor
	{
		units[]=
		{
			"SL_762_Suppressor"
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
	class dzrp_762Suppressor;
    class SL_762_Suppressor : dzrp_762Suppressor
    {
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
				};
			};
		};
    }
}