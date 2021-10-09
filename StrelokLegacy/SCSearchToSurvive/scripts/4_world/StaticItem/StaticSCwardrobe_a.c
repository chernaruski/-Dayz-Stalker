class SCwardrobe_a extends ItemBase
{
    int CanCheckSCwardrobe_a = 0;
    ref Timer   m_CheckSCwardrobe_aTimer;

    void SCwardrobe_aTimer()
	{
		--CanCheckSCwardrobe_a
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCwardrobe_aTimer = new Timer;

		++CanCheckSCwardrobe_a
		m_CheckSCwardrobe_aTimer.Run(3600, this, "SCwardrobe_aTimer");
    }

    bool CanLootSCwardrobe_a()
    {
        if ( CanCheckSCwardrobe_a == 0 )
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