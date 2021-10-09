class SCGarbage_Pile6 extends ItemBase
{
    int CanCheckSCGarbage_Pile6 = 0;
    ref Timer   m_CheckSCGarbage_Pile6Timer;

    void SCGarbage_Pile6Timer()
	{
		--CanCheckSCGarbage_Pile6
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCGarbage_Pile6Timer = new Timer;

		++CanCheckSCGarbage_Pile6
		m_CheckSCGarbage_Pile6Timer.Run(3600, this, "SCGarbage_Pile6Timer");
    }

    bool CanLootSCGarbage_Pile6()
    {
        if ( CanCheckSCGarbage_Pile6 == 0 )
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