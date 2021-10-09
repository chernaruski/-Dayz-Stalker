//TraderFix V2
//Author: Borizz.K

modded class MissionServer
{
	override void OnUpdate(float timeslice) //All Trader code in mission server need relocate to World module!!!
	{
		//== ==//
		m_Trader_ZombieCleanupUpdateTimer = -1; //No zombies cleanup //clean at spawn
		//m_Trader_VehicleCleanupUpdateTimer = -1; //No vehicles cleanup //fix
		//== ==//
		super.OnUpdate(timeslice);
		//== ==//
	}
	
	override void readTraderData()
	{
		super.readTraderData();

		//Copy data to externall class in World module for future use in another classes
		GetStaticTraderConfig().m_Trader_TraderPositions 	= m_Trader_TraderPositions;
		GetStaticTraderConfig().m_Trader_TraderIDs 			= m_Trader_TraderIDs;
		GetStaticTraderConfig().m_Trader_TraderSafezones 	= m_Trader_TraderSafezones;
		//GetStaticTraderConfig().Debug();
	}
}

//P.S. Trader need own class in world module with own OnUpdate function inserted to scheduler ( example: GetDayZGame().GetUpdateQueue(CALL_CATEGORY_SYSTEM).Insert(OnUpdate); )