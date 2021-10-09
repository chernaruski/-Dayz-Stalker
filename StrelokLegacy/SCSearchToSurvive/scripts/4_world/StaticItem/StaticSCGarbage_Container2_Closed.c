class SCGarbage_Container2_Closed extends ItemBase
{
    int CanCheckSCGarbage_Container2_Closed = 0;
    ref Timer   m_CheckSCGarbage_Container2_ClosedTimer;

    void SCGarbage_Container2_ClosedTimer()
	{
		--CanCheckSCGarbage_Container2_Closed
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCGarbage_Container2_ClosedTimer = new Timer;

		++CanCheckSCGarbage_Container2_Closed
		m_CheckSCGarbage_Container2_ClosedTimer.Run(3600, this, "SCGarbage_Container2_ClosedTimer");
    }

    bool CanLootSCGarbage_Container2_Closed()
    {
        if ( CanCheckSCGarbage_Container2_Closed == 0 )
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