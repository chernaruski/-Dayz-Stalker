class SClibrary_a extends ItemBase
{
    int CanCheckSClibrary_a = 0;
    ref Timer   m_CheckSClibrary_aTimer;

    void SClibrary_aTimer()
	{
		--CanCheckSClibrary_a
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSClibrary_aTimer = new Timer;

		++CanCheckSClibrary_a
		m_CheckSClibrary_aTimer.Run(3600, this, "SClibrary_aTimer");
    }

    bool CanLootSClibrary_a()
    {
        if ( CanCheckSClibrary_a == 0 )
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