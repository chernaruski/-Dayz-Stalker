class SCmetalcase_01 extends ItemBase
{
    int CanCheckSCmetalcase_01 = 0;
    ref Timer   m_CheckSCmetalcase_01Timer;

    void SCmetalcase_01Timer()
	{
		--CanCheckSCmetalcase_01
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCmetalcase_01Timer = new Timer;

		++CanCheckSCmetalcase_01
		m_CheckSCmetalcase_01Timer.Run(3600, this, "SCmetalcase_01Timer");
    }

    bool CanLootSCmetalcase_01()
    {
        if ( CanCheckSCmetalcase_01 == 0 )
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