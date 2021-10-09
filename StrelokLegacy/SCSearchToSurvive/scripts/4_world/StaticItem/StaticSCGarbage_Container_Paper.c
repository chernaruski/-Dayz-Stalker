class SCGarbage_Container_Paper extends ItemBase
{
    int CanCheckSCGarbage_Container_Paper = 0;
    ref Timer   m_CheckSCGarbage_Container_PaperTimer;

    void SCGarbage_Container_PaperTimer()
	{
		--CanCheckSCGarbage_Container_Paper
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCGarbage_Container_PaperTimer = new Timer;

		++CanCheckSCGarbage_Container_Paper
		m_CheckSCGarbage_Container_PaperTimer.Run(3600, this, "SCGarbage_Container_PaperTimer");
    }

    bool CanLootSCGarbage_Container_Paper()
    {
        if ( CanCheckSCGarbage_Container_Paper == 0 )
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