class SCwashing_machine extends ItemBase
{
    int CanCheckSCwashing_machine = 0;
    ref Timer   m_CheckSCwashing_machineTimer;

    void SCwashing_machineTimer()
	{
		--CanCheckSCwashing_machine
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCwashing_machineTimer = new Timer;

		++CanCheckSCwashing_machine
		m_CheckSCwashing_machineTimer.Run(3600, this, "SCwashing_machineTimer");
    }

    bool CanLootSCwashing_machine()
    {
        if ( CanCheckSCwashing_machine == 0 )
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