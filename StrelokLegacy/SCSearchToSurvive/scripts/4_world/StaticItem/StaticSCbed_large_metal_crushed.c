class SCbed_large_metal_crushed extends ItemBase
{
    int CanCheckSCbed_large_metal_crushed = 0;
    ref Timer   m_CheckSCbed_large_metal_crushedTimer;

    void SCbed_large_metal_crushedTimer()
	{
		--CanCheckSCbed_large_metal_crushed
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCbed_large_metal_crushedTimer = new Timer;

		++CanCheckSCbed_large_metal_crushed
		m_CheckSCbed_large_metal_crushedTimer.Run(3600, this, "SCbed_large_metal_crushedTimer");
    }

    bool CanLootSCbed_large_metal_crushed()
    {
        if ( CanCheckSCbed_large_metal_crushed == 0 )
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