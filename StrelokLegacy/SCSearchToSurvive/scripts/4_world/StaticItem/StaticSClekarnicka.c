class SClekarnicka extends ItemBase
{
    int CanCheckSClekarnicka = 0;
    ref Timer   m_CheckSClekarnickaTimer;

    void SClekarnickaTimer()
	{
		--CanCheckSClekarnicka
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSClekarnickaTimer = new Timer;

		++CanCheckSClekarnicka
		m_CheckSClekarnickaTimer.Run(3600, this, "SClekarnickaTimer");
    }

    bool CanLootSClekarnicka()
    {
        if ( CanCheckSClekarnicka == 0 )
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