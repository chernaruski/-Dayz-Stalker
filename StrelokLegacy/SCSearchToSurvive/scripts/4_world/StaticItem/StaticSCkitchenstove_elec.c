class SCkitchenstove_elec extends ItemBase
{
    int CanCheckSCkitchenstove_elec = 0;
    ref Timer   m_CheckSCkitchenstove_elecTimer;

    void SCkitchenstove_elecTimer()
	{
		--CanCheckSCkitchenstove_elec
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCkitchenstove_elecTimer = new Timer;

		++CanCheckSCkitchenstove_elec
		m_CheckSCkitchenstove_elecTimer.Run(3600, this, "SCkitchenstove_elecTimer");
    }

    bool CanLootSCkitchenstove_elec()
    {
        if ( CanCheckSCkitchenstove_elec == 0 )
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