class SCAmmoBox extends ItemBase
{
    int CanCheckSCAmmoBox = 0;
    ref Timer   m_CheckSCAmmoBoxTimer;

    void SCAmmoBoxTimer()
	{
		--CanCheckSCAmmoBox
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCAmmoBoxTimer = new Timer;

		++CanCheckSCAmmoBox
		m_CheckSCAmmoBoxTimer.Run(3600, this, "SCAmmoBoxTimer");
    }

    bool CanLootSCAmmoBox()
    {
        if ( CanCheckSCAmmoBox == 0 )
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