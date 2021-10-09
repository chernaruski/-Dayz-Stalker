class SCoffice_table_a extends ItemBase
{
    int CanCheckSCoffice_table_a = 0;
    ref Timer   m_CheckSCoffice_table_aTimer;

    void SCoffice_table_aTimer()
	{
		--CanCheckSCoffice_table_a
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCoffice_table_aTimer = new Timer;

		++CanCheckSCoffice_table_a
		m_CheckSCoffice_table_aTimer.Run(3600, this, "SCoffice_table_aTimer");
    }

    bool CanLootSCoffice_table_a()
    {
        if ( CanCheckSCoffice_table_a == 0 )
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