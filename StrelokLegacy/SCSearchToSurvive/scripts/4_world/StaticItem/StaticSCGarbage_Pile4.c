class SCGarbage_Pile4 extends ItemBase
{
    int CanCheckSCGarbage_Pile4 = 0;
    ref Timer   m_CheckSCGarbage_Pile4Timer;

    void SCGarbage_Pile4Timer()
	{
		--CanCheckSCGarbage_Pile4
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCGarbage_Pile4Timer = new Timer;

		++CanCheckSCGarbage_Pile4
		m_CheckSCGarbage_Pile4Timer.Run(3600, this, "SCGarbage_Pile4Timer");
    }

    bool CanLootSCGarbage_Pile4()
    {
        if ( CanCheckSCGarbage_Pile4 == 0 )
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