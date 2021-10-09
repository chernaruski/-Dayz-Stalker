modded class ActionConstructor 
{
    override void RegisterActions(TTypenameArray actions)
    {
		super.RegisterActions(actions);

		actions.Insert(ActionGiveSLAptechkaOrSelf);
		actions.Insert(ActionGiveSLAptechkaOrTarget);

		actions.Insert(ActionGiveSLAptechkaBlSelf);
		actions.Insert(ActionGiveSLAptechkaBlTarget);

		actions.Insert(ActionGiveSLAptechkaYeSelf);
		actions.Insert(ActionGiveSLAptechkaYeTarget);
		
	}
};