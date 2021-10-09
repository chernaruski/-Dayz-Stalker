class SCvending_machine extends ItemBase
{
    int CanCheckSCvending_machine = 0;
    ref Timer   m_CheckSCvending_machineTimer;

    void SCvending_machineTimer()
	{
		--CanCheckSCvending_machine
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCvending_machineTimer = new Timer;

		++CanCheckSCvending_machine
		m_CheckSCvending_machineTimer.Run(3600, this, "SCvending_machineTimer");
    }

    bool CanLootSCvending_machine()
    {
        if ( CanCheckSCvending_machine == 0 )
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