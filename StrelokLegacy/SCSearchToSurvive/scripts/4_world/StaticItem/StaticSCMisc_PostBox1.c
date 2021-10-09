class SCMisc_PostBox1 extends ItemBase
{
    int CanCheckSCMisc_PostBox1 = 0;
    ref Timer   m_CheckSCMisc_PostBox1Timer;

    void SCMisc_PostBox1Timer()
	{
		--CanCheckSCMisc_PostBox1
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCMisc_PostBox1Timer = new Timer;

		++CanCheckSCMisc_PostBox1
		m_CheckSCMisc_PostBox1Timer.Run(3600, this, "SCMisc_PostBox1Timer");
    }

    bool CanLootSCMisc_PostBox1()
    {
        if ( CanCheckSCMisc_PostBox1 == 0 )
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