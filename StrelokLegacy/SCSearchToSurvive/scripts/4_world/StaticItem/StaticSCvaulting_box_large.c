class SCvaulting_box_large extends ItemBase
{
    int CanCheckSCvaulting_box_large = 0;
    ref Timer   m_CheckSCvaulting_box_largeTimer;

    void SCvaulting_box_largeTimer()
	{
		--CanCheckSCvaulting_box_large
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCvaulting_box_largeTimer = new Timer;

		++CanCheckSCvaulting_box_large
		m_CheckSCvaulting_box_largeTimer.Run(3600, this, "SCvaulting_box_largeTimer");
    }

    bool CanLootSCvaulting_box_large()
    {
        if ( CanCheckSCvaulting_box_large == 0 )
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