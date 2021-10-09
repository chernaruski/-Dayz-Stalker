class SCalmara extends ItemBase
{
    int CanCheckSCalmara = 0;
    ref Timer   m_CheckSCalmaraTimer;

    void SCalmaraTimer()
	{
		--CanCheckSCalmara
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCalmaraTimer = new Timer;

		++CanCheckSCalmara
		m_CheckSCalmaraTimer.Run(3600, this, "SCalmaraTimer");
    }

    bool CanLootSCalmara()
    {
        if ( CanCheckSCalmara == 0 )
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