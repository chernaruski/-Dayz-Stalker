class SCGarbage_Pile2 extends ItemBase
{
    int CanCheckSCGarbage_Pile2 = 0;
    ref Timer   m_CheckSCGarbage_Pile2Timer;

    void SCGarbage_Pile2Timer()
	{
		--CanCheckSCGarbage_Pile2
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCGarbage_Pile2Timer = new Timer;

		++CanCheckSCGarbage_Pile2
		m_CheckSCGarbage_Pile2Timer.Run(3600, this, "SCGarbage_Pile2Timer");
    }

    bool CanLootSCGarbage_Pile2()
    {
        if ( CanCheckSCGarbage_Pile2 == 0 )
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