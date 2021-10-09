class SCGarbage_Container extends ItemBase
{
    int CanCheckSCGarbage_Container = 0;
    ref Timer   m_CheckSCGarbage_ContainerTimer;

    void SCGarbage_ContainerTimer()
	{
		--CanCheckSCGarbage_Container
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCGarbage_ContainerTimer = new Timer;

		++CanCheckSCGarbage_Container
		m_CheckSCGarbage_ContainerTimer.Run(3600, this, "SCGarbage_ContainerTimer");
    }

    bool CanLootSCGarbage_Container()
    {
        if ( CanCheckSCGarbage_Container == 0 )
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