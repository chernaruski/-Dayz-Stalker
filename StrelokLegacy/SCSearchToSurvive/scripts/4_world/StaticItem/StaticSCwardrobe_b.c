class SCwardrobe_b extends ItemBase
{
    int CanCheckSCwardrobe_b = 0;
    ref Timer   m_CheckSCwardrobe_bTimer;

    void SCwardrobe_bTimer()
	{
		--CanCheckSCwardrobe_b
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCwardrobe_bTimer = new Timer;

		++CanCheckSCwardrobe_b
		m_CheckSCwardrobe_bTimer.Run(3600, this, "SCwardrobe_bTimer");
    }

    bool CanLootSCwardrobe_b()
    {
        if ( CanCheckSCwardrobe_b == 0 )
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