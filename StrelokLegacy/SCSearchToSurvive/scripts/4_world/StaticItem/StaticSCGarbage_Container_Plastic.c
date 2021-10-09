class SCGarbage_Container_Plastic extends ItemBase
{
    int CanCheckSCGarbage_Container_Plastic = 0;
    ref Timer   m_CheckSCGarbage_Container_PlasticTimer;

    void SCGarbage_Container_PlasticTimer()
	{
		--CanCheckSCGarbage_Container_Plastic
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCGarbage_Container_PlasticTimer = new Timer;

		++CanCheckSCGarbage_Container_Plastic
		m_CheckSCGarbage_Container_PlasticTimer.Run(3600, this, "SCGarbage_Container_PlasticTimer");
    }

    bool CanLootSCGarbage_Container_Plastic()
    {
        if ( CanCheckSCGarbage_Container_Plastic == 0 )
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