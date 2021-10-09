//TraderFix V2
//Author: Borizz.K

//31.10.2019
static ref StaticTraderConfig g_StaticTraderConfig;
static ref StaticTraderConfig GetStaticTraderConfig()
{
	if (!g_StaticTraderConfig) g_StaticTraderConfig = new StaticTraderConfig();
	return g_StaticTraderConfig;
}

static bool IsTraderServer = false;

class StaticTraderConfig
{
	ref array<vector> 	m_Trader_TraderPositions;
	ref array<int> 		m_Trader_TraderIDs;
	ref array<int> 		m_Trader_TraderSafezones;
	
	void StaticTraderConfig()
	{
		if (GetGame().IsServer())
		{
			Print("::: TRADERFIX V2: [StaticTraderConfig]: Init.");
			IsTraderServer = true;
		}
		else
		{
			Print("::: TRADERFIX V2: [StaticTraderConfig]: Not need init server part on client.");
		}
	}

	void SetTraderPositions(ref array<vector> TraderPositions)
	{
		m_Trader_TraderPositions = TraderPositions;
	}

	void SetTraderIDs(ref array<int> TraderIDs)
	{
		m_Trader_TraderIDs = TraderIDs;
	}

	void SetTraderSafezones(ref array<int> TraderSafezones)
	{
		m_Trader_TraderSafezones = TraderSafezones;
	}

	ref array<vector> GetTraderPositions()
	{
		return m_Trader_TraderPositions;
	}

	ref array<int> GetTraderIDs()
	{
		return m_Trader_TraderIDs;
	}

	ref array<int> GetTraderSafezones()
	{
		return m_Trader_TraderSafezones;
	}
	
	void Debug()
	{
		Print("::: TRADERFIX V2: [StaticTraderConfig]: Debug:");
		m_Trader_TraderPositions.Debug();
		m_Trader_TraderIDs.Debug();
		m_Trader_TraderSafezones.Debug();
	}
}
//31.10.2019
