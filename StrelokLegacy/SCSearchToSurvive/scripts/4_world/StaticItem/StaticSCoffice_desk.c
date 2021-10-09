class SCoffice_desk extends ItemBase
{
    int CanCheckSCoffice_desk = 0;
    ref Timer   m_CheckSCoffice_deskTimer;

    void SCoffice_deskTimer()
	{
		--CanCheckSCoffice_desk
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCoffice_deskTimer = new Timer;

		++CanCheckSCoffice_desk
		m_CheckSCoffice_deskTimer.Run(3600, this, "SCoffice_deskTimer");
    }

    bool CanLootSCoffice_desk()
    {
        if ( CanCheckSCoffice_desk == 0 )
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