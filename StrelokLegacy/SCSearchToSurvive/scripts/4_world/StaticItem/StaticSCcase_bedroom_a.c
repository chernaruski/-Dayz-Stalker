class SCcase_bedroom_a extends ItemBase
{
    int CanCheckSCcase_bedroom_a = 0;
    ref Timer   m_CheckSCcase_bedroom_aTimer;

    void SCcase_bedroom_aTimer()
	{
		--CanCheckSCcase_bedroom_a
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCcase_bedroom_aTimer = new Timer;

		++CanCheckSCcase_bedroom_a
		m_CheckSCcase_bedroom_aTimer.Run(3600, this, "SCcase_bedroom_aTimer");
    }

    bool CanLootSCcase_bedroom_a()
    {
        if ( CanCheckSCcase_bedroom_a == 0 )
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