class SCcase_bedroom_b extends ItemBase
{
    int CanCheckSCcase_bedroom_b = 0;
    ref Timer   m_CheckSCcase_bedroom_bTimer;

    void SCcase_bedroom_bTimer()
	{
		--CanCheckSCcase_bedroom_b
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCcase_bedroom_bTimer = new Timer;

		++CanCheckSCcase_bedroom_b
		m_CheckSCcase_bedroom_bTimer.Run(3600, this, "SCcase_bedroom_bTimer");
    }

    bool CanLootSCcase_bedroom_b()
    {
        if ( CanCheckSCcase_bedroom_b == 0 )
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