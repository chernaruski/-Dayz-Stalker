class SClab_teacher_bench extends ItemBase
{
    int CanCheckSClab_teacher_bench = 0;
    ref Timer   m_CheckSClab_teacher_benchTimer;

    void SClab_teacher_benchTimer()
	{
		--CanCheckSClab_teacher_bench
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSClab_teacher_benchTimer = new Timer;

		++CanCheckSClab_teacher_bench
		m_CheckSClab_teacher_benchTimer.Run(3600, this, "SClab_teacher_benchTimer");
    }

    bool CanLootSClab_teacher_bench()
    {
        if ( CanCheckSClab_teacher_bench == 0 )
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