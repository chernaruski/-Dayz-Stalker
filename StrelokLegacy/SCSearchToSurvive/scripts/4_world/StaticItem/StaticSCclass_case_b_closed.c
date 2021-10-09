class SCclass_case_b_closed extends ItemBase
{
    int CanCheckSCclass_case_b_closed = 0;
    ref Timer   m_CheckSCclass_case_b_closedTimer;

    void SCclass_case_b_closedTimer()
	{
		--CanCheckSCclass_case_b_closed
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCclass_case_b_closedTimer = new Timer;

		++CanCheckSCclass_case_b_closed
		m_CheckSCclass_case_b_closedTimer.Run(3600, this, "SCclass_case_b_closedTimer");
    }

    bool CanLootSCclass_case_b_closed()
    {
        if ( CanCheckSCclass_case_b_closed == 0 )
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