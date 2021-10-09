class SCtable_drawer extends ItemBase
{
    int CanCheckSCtable_drawer = 0;
    ref Timer   m_CheckSCtable_drawerTimer;

    void SCtable_drawerTimer()
	{
		--CanCheckSCtable_drawer
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCtable_drawerTimer = new Timer;

		++CanCheckSCtable_drawer
		m_CheckSCtable_drawerTimer.Run(3600, this, "SCtable_drawerTimer");
    }

    bool CanLootSCtable_drawer()
    {
        if ( CanCheckSCtable_drawer == 0 )
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