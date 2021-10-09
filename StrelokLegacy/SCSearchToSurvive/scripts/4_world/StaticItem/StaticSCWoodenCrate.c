class SCWoodenCrate extends ItemBase
{
    int CanCheckSCWoodenCrate = 0;
    ref Timer   m_CheckSCWoodenCrateTimer;

    void SCWoodenCrateTimer()
	{
		--CanCheckSCWoodenCrate
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCWoodenCrateTimer = new Timer;

		++CanCheckSCWoodenCrate
		m_CheckSCWoodenCrateTimer.Run(3600, this, "SCWoodenCrateTimer");
    }

    bool CanLootSCWoodenCrate()
    {
        if ( CanCheckSCWoodenCrate == 0 )
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