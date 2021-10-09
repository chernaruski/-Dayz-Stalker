class SCcase_cans_b extends ItemBase
{
    int CanCheckSCcase_cans_b = 0;
    ref Timer   m_CheckSCcase_cans_bTimer;

    void SCcase_cans_bTimer()
	{
		--CanCheckSCcase_cans_b
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCcase_cans_bTimer = new Timer;

		++CanCheckSCcase_cans_b
		m_CheckSCcase_cans_bTimer.Run(3600, this, "SCcase_cans_bTimer");
    }

    bool CanLootSCcase_cans_b()
    {
        if ( CanCheckSCcase_cans_b == 0 )
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