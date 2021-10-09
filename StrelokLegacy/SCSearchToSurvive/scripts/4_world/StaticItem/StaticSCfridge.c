class SCfridge extends ItemBase
{
    int CanCheckSCfridge = 0;
    ref Timer   m_CheckSCfridgeTimer;

    void SCfridgeTimer()
	{
		--CanCheckSCfridge
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCfridgeTimer = new Timer;

		++CanCheckSCfridge
		m_CheckSCfridgeTimer.Run(3600, this, "SCfridgeTimer");
    }

    bool CanLootSCfridge()
    {
        if ( CanCheckSCfridge == 0 )
        {
            return true;
        }
        return false;
    }

    override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return false;}        
        if ( GetNumberOfItems() == 0)
        {
            return false;
        }
        return false;
    }
    
    override bool CanPutIntoHands(EntityAI parent)
    {
        if( !super.CanPutIntoHands( parent ) )
        {
            return false;
        }
        if ( GetNumberOfItems() == 0 )
        {
            return false;
        }
        return false;

    }
}