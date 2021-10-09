#ifdef Trader_ShowServerLogs
modded class TraderMessage
{
	static void ServerLog(string str)
	{
        Print("" + str);
    }
}
#endif
