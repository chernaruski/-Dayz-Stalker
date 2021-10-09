class SCcase_a extends ItemBase
{
    int CanCheckSCcase_a = 0;
    ref Timer   m_CheckSCcase_aTimer;

    void SCcase_aTimer()
	{
		--CanCheckSCcase_a
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCcase_aTimer = new Timer;

		++CanCheckSCcase_a
		m_CheckSCcase_aTimer.Run(3600, this, "SCcase_aTimer");
    }

    bool CanLootSCcase_a()
    {
        if ( CanCheckSCcase_a == 0 )
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