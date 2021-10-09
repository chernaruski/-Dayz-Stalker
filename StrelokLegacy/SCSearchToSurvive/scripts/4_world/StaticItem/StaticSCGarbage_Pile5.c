class SCGarbage_Pile5 extends ItemBase
{
    int CanCheckSCGarbage_Pile5 = 0;
    ref Timer   m_CheckSCGarbage_Pile5Timer;

    void SCGarbage_Pile5Timer()
	{
		--CanCheckSCGarbage_Pile5
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCGarbage_Pile5Timer = new Timer;

		++CanCheckSCGarbage_Pile5
		m_CheckSCGarbage_Pile5Timer.Run(3600, this, "SCGarbage_Pile5Timer");
    }

    bool CanLootSCGarbage_Pile5()
    {
        if ( CanCheckSCGarbage_Pile5 == 0 )
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