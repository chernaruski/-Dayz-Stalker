class SCtable_crushed extends ItemBase
{
    int CanCheckSCtable_crushed = 0;
    ref Timer   m_CheckSCtable_crushedTimer;

    void SCtable_crushedTimer()
	{
		--CanCheckSCtable_crushed
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCtable_crushedTimer = new Timer;

		++CanCheckSCtable_crushed
		m_CheckSCtable_crushedTimer.Run(3600, this, "SCtable_crushedTimer");
    }

    bool CanLootSCtable_crushed()
    {
        if ( CanCheckSCtable_crushed == 0 )
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