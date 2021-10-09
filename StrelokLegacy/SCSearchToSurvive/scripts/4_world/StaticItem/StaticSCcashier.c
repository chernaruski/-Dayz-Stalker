class SCcashier extends ItemBase
{
    int CanCheckSCcashier = 0;
    ref Timer   m_CheckSCcashierTimer;

    void SCcashierTimer()
	{
		--CanCheckSCcashier
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCcashierTimer = new Timer;

		++CanCheckSCcashier
		m_CheckSCcashierTimer.Run(3600, this, "SCcashierTimer");
    }

    bool CanLootSCcashier()
    {
        if ( CanCheckSCcashier == 0 )
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