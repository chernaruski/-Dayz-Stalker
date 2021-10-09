class SCkitchen_unit_a_dz extends ItemBase
{
    int CanCheckSCkitchen_unit_a_dz = 0;
    ref Timer   m_CheckSCkitchen_unit_a_dzTimer;

    void SCkitchen_unit_a_dzTimer()
	{
		--CanCheckSCkitchen_unit_a_dz
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCkitchen_unit_a_dzTimer = new Timer;

		++CanCheckSCkitchen_unit_a_dz
		m_CheckSCkitchen_unit_a_dzTimer.Run(3600, this, "SCkitchen_unit_a_dzTimer");
    }

    bool CanLootSCkitchen_unit_a_dz()
    {
        if ( CanCheckSCkitchen_unit_a_dz == 0 )
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