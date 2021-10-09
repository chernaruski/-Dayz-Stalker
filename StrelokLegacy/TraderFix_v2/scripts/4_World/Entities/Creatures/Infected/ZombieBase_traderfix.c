modded class ZombieBase extends DayZInfected
{
	override void Init()
	{
		super.Init();
		if (GetGame().IsServer())
		{
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(CleanInTraderSafeZone, 50, false);
		}
	}
	
	void CleanInTraderSafeZone()
	{
		if (!GetStaticTraderConfig().m_Trader_TraderPositions) return;
		
		vector ai_Position = this.GetPosition();
		
		for (int k = 0; k < GetStaticTraderConfig().m_Trader_TraderPositions.Count(); k++)
		{
			if (vector.Distance(ai_Position, GetStaticTraderConfig().m_Trader_TraderPositions[k]) <= GetStaticTraderConfig().m_Trader_TraderSafezones[k] * 3)
			{
				this.Delete();
				break;
			}
		}
	}
}
