class SCclassroom_case_a_crushed extends ItemBase
{
    int CanCheckSCclassroom_case_a_crushed = 0;
    ref Timer   m_CheckSCclassroom_case_a_crushedTimer;

    void SCclassroom_case_a_crushedTimer()
	{
		--CanCheckSCclassroom_case_a_crushed
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCclassroom_case_a_crushedTimer = new Timer;

		++CanCheckSCclassroom_case_a_crushed
		m_CheckSCclassroom_case_a_crushedTimer.Run(3600, this, "SCclassroom_case_a_crushedTimer");
    }

    bool CanLootSCclassroom_case_a_crushed()
    {
        if ( CanCheckSCclassroom_case_a_crushed == 0 )
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