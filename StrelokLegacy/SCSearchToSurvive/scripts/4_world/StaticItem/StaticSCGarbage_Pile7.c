class SCGarbage_Pile7 extends ItemBase
{
    int CanCheckSCGarbage_Pile7 = 0;
    ref Timer   m_CheckSCGarbage_Pile7Timer;

    void SCGarbage_Pile7Timer()
	{
		--CanCheckSCGarbage_Pile7
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCGarbage_Pile7Timer = new Timer;

		++CanCheckSCGarbage_Pile7
		m_CheckSCGarbage_Pile7Timer.Run(3600, this, "SCGarbage_Pile7Timer");
    }

    bool CanLootSCGarbage_Pile7()
    {
        if ( CanCheckSCGarbage_Pile7 == 0 )
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