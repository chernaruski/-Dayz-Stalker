class SCGarbage_Container_Glass extends ItemBase
{
    int CanCheckSCGarbage_Container_Glass = 0;
    ref Timer   m_CheckSCGarbage_Container_GlassTimer;

    void SCGarbage_Container_GlassTimer()
	{
		--CanCheckSCGarbage_Container_Glass
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCGarbage_Container_GlassTimer = new Timer;

		++CanCheckSCGarbage_Container_Glass
		m_CheckSCGarbage_Container_GlassTimer.Run(3600, this, "SCGarbage_Container_GlassTimer");
    }

    bool CanLootSCGarbage_Container_Glass()
    {
        if ( CanCheckSCGarbage_Container_Glass == 0 )
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