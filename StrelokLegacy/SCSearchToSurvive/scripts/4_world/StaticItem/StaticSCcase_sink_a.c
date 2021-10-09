class SCcase_sink_a extends ItemBase
{
    int CanCheckSCcase_sink_a = 0;
    ref Timer   m_CheckSCcase_sink_aTimer;

    void SCcase_sink_aTimer()
	{
		--CanCheckSCcase_sink_a
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCcase_sink_aTimer = new Timer;

		++CanCheckSCcase_sink_a
		m_CheckSCcase_sink_aTimer.Run(3600, this, "SCcase_sink_aTimer");
    }

    bool CanLootSCcase_sink_a()
    {
        if ( CanCheckSCcase_sink_a == 0 )
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