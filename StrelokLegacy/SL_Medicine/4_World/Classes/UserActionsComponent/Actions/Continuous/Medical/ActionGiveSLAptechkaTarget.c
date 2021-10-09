class ActionGiveSLAptechkaTargetCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.SALINE);
	}
};

class ActionGiveSLAptechkaOrTarget : ActionContinuousBase
{
	void ActionGiveSLAptechkaOrTarget()
	{
		m_CallbackClass = ActionGiveSLAptechkaTargetCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_SALINEBLOODBAGTARGET;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
	}
	
	override void CreateConditionComponents()  
	{	
		
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT);	
	}
		
	override string GetText()
	{
		return "#give_saline_person";
	}
	
	override void OnFinishProgressServer( ActionData action_data )
    {
        PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
        Param1<float> nacdata = Param1<float>.Cast( action_data.m_ActionComponent.GetACData() );
        float delta = nacdata.param1;
        
        ntarget.AddHealth("GlobalHealth", "Health", 15);
        ntarget.AddHealth("GlobalHealth", "Blood", 250);
        ntarget.GetModifiersManager().ActivateModifier(eModifiers.MDF_SALINE);
        
        action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
        
        action_data.m_MainItem.Delete();
    }
};

class ActionGiveSLAptechkaBlTarget : ActionContinuousBase
{
	void ActionGiveSLAptechkaBlTarget()
	{
		m_CallbackClass = ActionGiveSLAptechkaTargetCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_SALINEBLOODBAGTARGET;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
	}
	
	override void CreateConditionComponents()  
	{	
		
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT);	
	}
		
	override string GetText()
	{
		return "#give_saline_person";
	}
	
	override void OnFinishProgressServer( ActionData action_data )
    {
        PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
        Param1<float> nacdata = Param1<float>.Cast( action_data.m_ActionComponent.GetACData() );
        float delta = nacdata.param1;
        
        ntarget.AddHealth("GlobalHealth", "Health", 25);
        ntarget.AddHealth("GlobalHealth", "Blood", 350);
        ntarget.GetModifiersManager().ActivateModifier(eModifiers.MDF_SALINE);
        
        action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
        
        action_data.m_MainItem.Delete();
    }
};

class ActionGiveSLAptechkaYeTarget : ActionContinuousBase
{
	void ActionGiveSLAptechkaYeTarget()
	{
		m_CallbackClass = ActionGiveSLAptechkaTargetCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_SALINEBLOODBAGTARGET;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
	}
	
	override void CreateConditionComponents()  
	{	
		
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT);	
	}
		
	override string GetText()
	{
		return "#give_saline_person";
	}
	
	override void OnFinishProgressServer( ActionData action_data )
    {
        PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
        Param1<float> nacdata = Param1<float>.Cast( action_data.m_ActionComponent.GetACData() );
        float delta = nacdata.param1;
        
        ntarget.AddHealth("GlobalHealth", "Health", 40);
        ntarget.AddHealth("GlobalHealth", "Blood", 600);
        ntarget.GetModifiersManager().ActivateModifier(eModifiers.MDF_SALINE);
        
        action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
        
        action_data.m_MainItem.Delete();
    }
};