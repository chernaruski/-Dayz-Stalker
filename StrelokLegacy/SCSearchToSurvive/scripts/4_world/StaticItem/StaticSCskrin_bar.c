class SCskrin_bar extends ItemBase
{
    int CanCheckSCskrin_bar = 0;
    ref Timer   m_CheckSCskrin_barTimer;

    void SCskrin_barTimer()
	{
		--CanCheckSCskrin_bar
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCskrin_barTimer = new Timer;

		++CanCheckSCskrin_bar
		m_CheckSCskrin_barTimer.Run(3600, this, "SCskrin_barTimer");
    }

    bool CanLootSCskrin_bar()
    {
        if ( CanCheckSCskrin_bar == 0 )
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