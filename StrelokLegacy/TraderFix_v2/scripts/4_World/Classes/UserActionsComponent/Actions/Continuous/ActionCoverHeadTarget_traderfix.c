modded class ActionCoverHeadTarget: ActionContinuousBase
{	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		PlayerBase targetPlayer;
		Class.CastTo(targetPlayer, target.GetObject());
		
		if (targetPlayer)
			if (targetPlayer.m_Trader_IsInSafezone)
            	return false;

		return super.ActionCondition(player, target, item);
	}
}
