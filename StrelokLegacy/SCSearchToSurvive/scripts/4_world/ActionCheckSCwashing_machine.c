class ActionCheckSCwashing_machine: ActionInteractBase
{
	ref Timer		m_CheckSCwashing_machineTimer;

	void ActionCheckSCwashing_machine()
	{
	//	m_MessageSuccess = "";
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Object targetObject = target.GetObject();
		SCwashing_machine m_CheckRandomLoot = SCwashing_machine.Cast( targetObject );

		if ( m_CheckRandomLoot && m_CheckRandomLoot.CanLootSCwashing_machine() )
		{
			return true;
		}
		return false;
	}

	override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}

	override string GetText()
	{
		return "Осмотреть";
	}

	override void OnStartServer( ActionData action_data )
	{
        Object targetObject = action_data.m_Target.GetObject();
		SCwashing_machine Garbage_BinTimerCast = SCwashing_machine.Cast( targetObject );
		Garbage_BinTimerCast.Garbage_BinTimerStart()

		vector pos = action_data.m_Player.GetPosition();
	 	switch (Math.RandomInt(0, 5)) 
        {
            case 0:
				switch (Math.RandomInt(0, 2))
				{
    				case 0:
						ItemBase Garbage1 = ItemBase.Cast( GetGame().CreateObject("CableReel", pos) );
						SetItemQuantity1(Garbage1);
            		break; 
					
           			case 1:
						ItemBase Garbage2 = ItemBase.Cast( GetGame().CreateObject("MetalWire", pos) );
						SetItemQuantity2(Garbage2);
            		break;
				}
            break; 
            case 1:
			switch (Math.RandomInt(0, 3))
				{
    				case 0:
						ItemBase Garbage3 = ItemBase.Cast( GetGame().CreateObject("Bear_White", pos) );
						SetItemQuantity3(Garbage3);
            		break; 
					
           			case 1:
						ItemBase Garbage4 = ItemBase.Cast( GetGame().CreateObject("BoonieHat_Black", pos) );
						SetItemQuantity4(Garbage4);
            		break;
					
					case 2:
						ItemBase Garbage5 = ItemBase.Cast( GetGame().CreateObject("", pos) );
            		break;
				}
            break;
            case 2:
				switch (Math.RandomInt(0, 3))
				{
    				case 0:
						ItemBase Garbage6 = ItemBase.Cast( GetGame().CreateObject("ManSuit_White", pos) );
						SetItemQuantity6(Garbage6);
            		break; 
					
           			case 1:
						ItemBase Garbage7 = ItemBase.Cast( GetGame().CreateObject("Breeches_White", pos) );
						SetItemQuantity7(Garbage7);
            		break;
					
					case 2:
						ItemBase Garbage8 = ItemBase.Cast( GetGame().CreateObject("", pos) );
            		break;
				}
            break;
			case 3:
				switch (Math.RandomInt(0, 4))
				{
    				case 0:
						ItemBase Garbage9 = ItemBase.Cast( GetGame().CreateObject("WomanSuit_White", pos) );
						SetItemQuantity9(Garbage9);
            		break; 
					
           			case 1:
						ItemBase Garbage10 = ItemBase.Cast( GetGame().CreateObject("BoneHook", pos) );
						SetItemQuantity10(Garbage10);
            		break;
					
					case 2:
						ItemBase Garbage11 = ItemBase.Cast( GetGame().CreateObject("", pos) );
            		break;
					
					case 3:
						ItemBase Garbage12 = ItemBase.Cast( GetGame().CreateObject("", pos) );
            		break;
				}
            break;
			case 4:
				switch (Math.RandomInt(0, 7))
				{
    				case 0:
						Weapon_Base Garbage13 = Weapon_Base.Cast( GetGame().CreateObject("Pipe", pos) );
						SetItemQuantity13(Garbage13);
            		break; 
					
           			case 1:
						ItemBase Garbage14 = ItemBase.Cast( GetGame().CreateObject("BDUJacket", pos) );
						SetItemQuantity14(Garbage14);
            		break;
					
					case 2:
						ItemBase Garbage16 = ItemBase.Cast( GetGame().CreateObject("", pos) );
            		break;
					
					case 3:
						ItemBase Garbage17 = ItemBase.Cast( GetGame().CreateObject("", pos) );
            		break;
					
					case 4:
						ItemBase Garbage18 = ItemBase.Cast( GetGame().CreateObject("", pos) );
            		break;
					
					case 5:
						ItemBase Garbage19 = ItemBase.Cast( GetGame().CreateObject("", pos) );
            		break;
					
					case 6:
						ItemBase Garbage20 = ItemBase.Cast( GetGame().CreateObject("", pos) );
            		break;
				}
            break;
        }
		
	}

    void SetItemQuantity1(ItemBase Garbage1)
	{
		if ( Garbage1 )
		{
			int rndQty1 = Math.RandomInt(55,90);
			Garbage1.SetQuantity(rndQty1);
		}
	}

    void SetItemQuantity2(ItemBase Garbage2)
	{
		if ( Garbage2 )
		{
			int rndQty2 = Math.RandomInt(55,90);
			Garbage2.SetQuantity(rndQty2);
		}
	}

    void SetItemQuantity3(ItemBase Garbage3)
	{
		if ( Garbage3 )
		{
			int rndQty3 = Math.RandomInt(55,90);
			Garbage3.SetQuantity(rndQty3);
		}
	}
	void SetItemQuantity4(ItemBase Garbage4)
	{
		if ( Garbage4 )
		{
			int rndQty4 = Math.RandomInt(55,90);
			Garbage4.SetQuantity(rndQty4);
		}
	}
	void SetItemQuantity6(ItemBase Garbage6)
	{
		if ( Garbage6 )
		{
			int rndQty6 = Math.RandomInt(55,90);
			Garbage6.SetQuantity(rndQty6);
		}
	}

    void SetItemQuantity7(ItemBase Garbage7)
	{
		if ( Garbage7 )
		{
			int rndQty7 = Math.RandomInt(55,90);
			Garbage7.SetQuantity(rndQty7);
		}
	}

    void SetItemQuantity9(ItemBase Garbage9)
	{
		if ( Garbage9 )
		{
			int rndQty9 = Math.RandomInt(55,90);
			Garbage9.SetQuantity(rndQty9);
		}
	}
	void SetItemQuantity10(ItemBase Garbage10)
	{
		if ( Garbage10 )
		{
			int rndQty10 = Math.RandomInt(55,90);
			Garbage10.SetQuantity(rndQty10);
		}
	}
	void SetItemQuantity13(Weapon_Base Garbage13)
	{
		if ( Garbage13 )
		{
			int rndQty13 = Math.RandomInt(20,70);
			Garbage13.SetQuantity(rndQty13);
		}
	}

    void SetItemQuantity14(ItemBase Garbage14)
	{
		if ( Garbage14 )
		{
			int rndQty14 = Math.RandomInt(55,90);
			Garbage14.SetQuantity(rndQty14);
		}
	}
	void SetItemQuantity15(ItemBase Garbage15)
	{
		if ( Garbage15 )
		{
			int rndQty15 = Math.RandomInt(55,90);
			Garbage15.SetQuantity(rndQty15);
		}
	}
}