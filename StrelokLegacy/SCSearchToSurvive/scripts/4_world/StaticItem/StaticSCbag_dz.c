class SCbag_dz extends ItemBase
{
    int CanCheckSCbag_dz = 0;
    ref Timer   m_CheckSCbag_dzTimer;

    void SCbag_dzTimer()
	{
		--CanCheckSCbag_dz
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCbag_dzTimer = new Timer;

		++CanCheckSCbag_dz
		m_CheckSCbag_dzTimer.Run(3600, this, "SCbag_dzTimer");
    }

    bool CanLootSCbag_dz()
    {
        if ( CanCheckSCbag_dz == 0 )
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