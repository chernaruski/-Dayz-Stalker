class SClibrary_a_open extends ItemBase
{
    int CanCheckSClibrary_a_open = 0;
    ref Timer   m_CheckSClibrary_a_openTimer;

    void SClibrary_a_openTimer()
	{
		--CanCheckSClibrary_a_open
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSClibrary_a_openTimer = new Timer;

		++CanCheckSClibrary_a_open
		m_CheckSClibrary_a_openTimer.Run(3600, this, "SClibrary_a_openTimer");
    }

    bool CanLootSClibrary_a_open()
    {
        if ( CanCheckSClibrary_a_open == 0 )
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