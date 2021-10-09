class SCshelfs_small_crushed extends ItemBase
{
    int CanCheckSCshelfs_small_crushed = 0;
    ref Timer   m_CheckSCshelfs_small_crushedTimer;

    void SCshelfs_small_crushedTimer()
	{
		--CanCheckSCshelfs_small_crushed
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCshelfs_small_crushedTimer = new Timer;

		++CanCheckSCshelfs_small_crushed
		m_CheckSCshelfs_small_crushedTimer.Run(3600, this, "SCshelfs_small_crushedTimer");
    }

    bool CanLootSCshelfs_small_crushed()
    {
        if ( CanCheckSCshelfs_small_crushed == 0 )
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