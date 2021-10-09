class SCGarbage_Pile3 extends ItemBase
{
    int CanCheckSCGarbage_Pile3 = 0;
    ref Timer   m_CheckSCGarbage_Pile3Timer;

    void SCGarbage_Pile3Timer()
	{
		--CanCheckSCGarbage_Pile3
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCGarbage_Pile3Timer = new Timer;

		++CanCheckSCGarbage_Pile3
		m_CheckSCGarbage_Pile3Timer.Run(3600, this, "SCGarbage_Pile3Timer");
    }

    bool CanLootSCGarbage_Pile3()
    {
        if ( CanCheckSCGarbage_Pile3 == 0 )
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