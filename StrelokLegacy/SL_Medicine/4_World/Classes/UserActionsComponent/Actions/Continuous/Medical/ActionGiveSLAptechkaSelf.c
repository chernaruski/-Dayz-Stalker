class ActionGiveSLAptechkaSelfCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.SALINE);
	}
};

class ActionGiveSLAptechkaOrSelf : ActionContinuousBase
{
	void ActionGiveSLAptechkaOrSelf()
	{
		m_CallbackClass = ActionGiveSLAptechkaSelfCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_SALINEBLOODBAG;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}

	override bool HasTarget()
	{
		return false;
	}
		
	override string GetText()
	{
		return "#give_saline";
	}
	
	override void OnFinishProgressServer( ActionData action_data )
     {
        action_data.m_Player.AddHealth("GlobalHealth", "Health", 15);
        action_data.m_Player.AddHealth("GlobalHealth", "Blood", 250);
        action_data.m_Player.GetModifiersManager().ActivateModifier(eModifiers.MDF_SALINE);
        action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
        
        action_data.m_MainItem.Delete();
     }
};

class ActionGiveSLAptechkaBlSelf : ActionContinuousBase
{
	void ActionGiveSLAptechkaBlSelf()
	{
		m_CallbackClass = ActionGiveSLAptechkaSelfCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_SALINEBLOODBAG;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}

	override bool HasTarget()
	{
		return false;
	}
		
	override string GetText()
	{
		return "#give_saline";
	}
	
	override void OnFinishProgressServer( ActionData action_data )
     {
        action_data.m_Player.AddHealth("GlobalHealth", "Health", 25);
        action_data.m_Player.AddHealth("GlobalHealth", "Blood", 350);
        action_data.m_Player.GetModifiersManager().ActivateModifier(eModifiers.MDF_SALINE);
        action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
        
        action_data.m_MainItem.Delete();
     }
};

class ActionGiveSLAptechkaYeSelf : ActionContinuousBase
{
	void ActionGiveSLAptechkaYeSelf()
	{
		m_CallbackClass = ActionGiveSLAptechkaSelfCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_SALINEBLOODBAG;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}

	override bool HasTarget()
	{
		return false;
	}
		
	override string GetText()
	{
		return "#give_saline";
	}
	
	override void OnFinishProgressServer( ActionData action_data )
     {
        action_data.m_Player.AddHealth("GlobalHealth", "Health", 40);
        action_data.m_Player.AddHealth("GlobalHealth", "Blood", 600);
        action_data.m_Player.GetModifiersManager().ActivateModifier(eModifiers.MDF_SALINE);
        action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
        
        action_data.m_MainItem.Delete();
     }
};