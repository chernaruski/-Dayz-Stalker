class SCGarbage_Pile1 extends ItemBase
{
    int CanCheckSCGarbage_Pile1 = 0;
    ref Timer   m_CheckSCGarbage_Pile1Timer;

    void SCGarbage_Pile1Timer()
	{
		--CanCheckSCGarbage_Pile1
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCGarbage_Pile1Timer = new Timer;

		++CanCheckSCGarbage_Pile1
		m_CheckSCGarbage_Pile1Timer.Run(3600, this, "SCGarbage_Pile1Timer");
    }

    bool CanLootSCGarbage_Pile1()
    {
        if ( CanCheckSCGarbage_Pile1 == 0 )
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