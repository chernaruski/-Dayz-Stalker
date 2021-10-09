class SCbox_c_multi extends ItemBase
{
    int CanCheckSCbox_c_multi = 0;
    ref Timer   m_CheckSCbox_c_multiTimer;

    void SCbox_c_multiTimer()
	{
		--CanCheckSCbox_c_multi
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCbox_c_multiTimer = new Timer;

		++CanCheckSCbox_c_multi
		m_CheckSCbox_c_multiTimer.Run(3600, this, "SCbox_c_multiTimer");
    }

    bool CanLootSCbox_c_multi()
    {
        if ( CanCheckSCbox_c_multi == 0 )
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