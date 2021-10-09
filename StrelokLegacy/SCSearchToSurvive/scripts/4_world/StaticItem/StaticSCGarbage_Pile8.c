class SCGarbage_Pile8 extends ItemBase
{
    int CanCheckSCGarbage_Pile8 = 0;
    ref Timer   m_CheckSCGarbage_Pile8Timer;

    void SCGarbage_Pile8Timer()
	{
		--CanCheckSCGarbage_Pile8
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCGarbage_Pile8Timer = new Timer;

		++CanCheckSCGarbage_Pile8
		m_CheckSCGarbage_Pile8Timer.Run(3600, this, "SCGarbage_Pile8Timer");
    }

    bool CanLootSCGarbage_Pile8()
    {
        if ( CanCheckSCGarbage_Pile8 == 0 )
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