class SlAptechkaOr : Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionGiveSLAptechkaOrSelf);
		AddAction(ActionGiveSLAptechkaOrTarget);
	}
};

class SlAptechkaBl : Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionGiveSLAptechkaBlSelf);
		AddAction(ActionGiveSLAptechkaBlTarget);
	}
};

class SlAptechkaYe : Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionGiveSLAptechkaYeSelf);
		AddAction(ActionGiveSLAptechkaYeTarget);
	}
};