class SCMisc_PostBox2 extends ItemBase
{
    int CanCheckSCMisc_PostBox2 = 0;
    ref Timer   m_CheckSCMisc_PostBox2Timer;

    void SCMisc_PostBox2Timer()
	{
		--CanCheckSCMisc_PostBox2
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCMisc_PostBox2Timer = new Timer;

		++CanCheckSCMisc_PostBox2
		m_CheckSCMisc_PostBox2Timer.Run(3600, this, "SCMisc_PostBox2Timer");
    }

    bool CanLootSCMisc_PostBox2()
    {
        if ( CanCheckSCMisc_PostBox2 == 0 )
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