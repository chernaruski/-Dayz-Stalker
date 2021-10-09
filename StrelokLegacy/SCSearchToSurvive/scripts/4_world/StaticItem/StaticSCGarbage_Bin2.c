class SCGarbage_Bin2 extends ItemBase
{
    int CanCheckSCGarbage_Bin2 = 0;
    ref Timer   m_CheckSCGarbage_Bin2Timer;

    void SCGarbage_Bin2Timer()
	{
		--CanCheckSCGarbage_Bin2
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCGarbage_Bin2Timer = new Timer;

		++CanCheckSCGarbage_Bin2
		m_CheckSCGarbage_Bin2Timer.Run(3600, this, "SCGarbage_Bin2Timer");
    }

    bool CanLootSCGarbage_Bin2()
    {
        if ( CanCheckSCGarbage_Bin2 == 0 )
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