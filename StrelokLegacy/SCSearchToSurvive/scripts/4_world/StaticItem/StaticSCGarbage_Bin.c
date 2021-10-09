class SCGarbage_Bin extends ItemBase
{
    int CanCheckSCGarbage_Bin = 0;
    ref Timer   m_CheckSCGarbage_BinTimer;

    void SCGarbage_BinTimer()
	{
		--CanCheckSCGarbage_Bin
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCGarbage_BinTimer = new Timer;

		++CanCheckSCGarbage_Bin
		m_CheckSCGarbage_BinTimer.Run(3600, this, "SCGarbage_BinTimer");
    }

    bool CanLootSCGarbage_Bin()
    {
        if ( CanCheckSCGarbage_Bin == 0 )
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
