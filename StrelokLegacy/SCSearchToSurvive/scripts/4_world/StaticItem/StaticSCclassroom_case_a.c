class SCclassroom_case_a extends ItemBase
{
    int CanCheckSCclassroom_case_a = 0;
    ref Timer   m_CheckSCclassroom_case_aTimer;

    void SCclassroom_case_aTimer()
	{
		--CanCheckSCclassroom_case_a
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCclassroom_case_aTimer = new Timer;

		++CanCheckSCclassroom_case_a
		m_CheckSCclassroom_case_aTimer.Run(3600, this, "SCclassroom_case_aTimer");
    }

    bool CanLootSCclassroom_case_a()
    {
        if ( CanCheckSCclassroom_case_a == 0 )
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