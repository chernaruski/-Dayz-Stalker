class SCpokladna extends ItemBase
{
    int CanCheckSCpokladna = 0;
    ref Timer   m_CheckSCpokladnaTimer;

    void SCpokladnaTimer()
	{
		--CanCheckSCpokladna
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCpokladnaTimer = new Timer;

		++CanCheckSCpokladna
		m_CheckSCpokladnaTimer.Run(3600, this, "SCpokladnaTimer");
    }

    bool CanLootSCpokladna()
    {
        if ( CanCheckSCpokladna == 0 )
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