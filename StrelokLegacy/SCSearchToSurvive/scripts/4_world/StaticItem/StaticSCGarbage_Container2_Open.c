class SCGarbage_Container2_Open extends ItemBase
{
    int CanCheckSCGarbage_Container2_Open = 0;
    ref Timer   m_CheckSCGarbage_Container2_OpenTimer;

    void SCGarbage_Container2_OpenTimer()
	{
		--CanCheckSCGarbage_Container2_Open
	}

    void Garbage_BinTimerStart()
    {
    	m_CheckSCGarbage_Container2_OpenTimer = new Timer;

		++CanCheckSCGarbage_Container2_Open
		m_CheckSCGarbage_Container2_OpenTimer.Run(3600, this, "SCGarbage_Container2_OpenTimer");
    }

    bool CanLootSCGarbage_Container2_Open()
    {
        if ( CanCheckSCGarbage_Container2_Open == 0 )
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