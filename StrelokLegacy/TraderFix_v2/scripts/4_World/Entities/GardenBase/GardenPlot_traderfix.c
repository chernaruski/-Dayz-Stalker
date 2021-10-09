/*
modded class GardenPlot extends GardenBase
{
	override bool CanBePlaced( Man player, vector position )
	{
		if (GetGame().IsServer())
		{
			PlayerBase player_base = PlayerBase.Cast(player);
			if (player_base.m_Trader_IsInSafezone)
			{
				return false;
			}
		}
		return super.CanBePlaced( player, position );
	}
}
*/