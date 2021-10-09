class SClocker_closed_v3 extends ItemBase
{
    int CanCheckSClocker_closed_v3 = 0;
    ref Timer   m_CheckSClocker_closed_v3Timer;

    void SClocker_closed_v3Timer()
	{
		--CanCheckSClocker_closed_v3
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSClocker_closed_v3Timer = new Timer;

		++CanCheckSClocker_closed_v3
		m_CheckSClocker_closed_v3Timer.Run(3600, this, "SClocker_closed_v3Timer");
    }

    bool CanLootSClocker_closed_v3()
    {
        if ( CanCheckSClocker_closed_v3 == 0 )
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