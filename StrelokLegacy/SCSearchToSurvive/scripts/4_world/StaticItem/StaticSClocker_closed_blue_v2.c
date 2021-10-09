class SClocker_closed_blue_v2 extends ItemBase
{
    int CanCheckSClocker_closed_blue_v2 = 0;
    ref Timer   m_CheckSClocker_closed_blue_v2Timer;

    void SClocker_closed_blue_v2Timer()
	{
		--CanCheckSClocker_closed_blue_v2
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSClocker_closed_blue_v2Timer = new Timer;

		++CanCheckSClocker_closed_blue_v2
		m_CheckSClocker_closed_blue_v2Timer.Run(3600, this, "SClocker_closed_blue_v2Timer");
    }

    bool CanLootSClocker_closed_blue_v2()
    {
        if ( CanCheckSClocker_closed_blue_v2 == 0 )
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