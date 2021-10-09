class SLApteckaMdfr: ModifierBase
{
	float m_RegenTime;
	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		//m_ID 					= eModifiers.MDF_SALINE;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_ACTIVE;
		m_RegenTime = CalculateRegenTime();
	}

	override bool ActivateCondition(PlayerBase player)
	{
		return false;
	}

	override bool DeactivateCondition(PlayerBase player)
	{
		float attached_time = GetAttachedTime();

		if ( attached_time > m_RegenTime )
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	override void OnReconnect(PlayerBase player)
	{
		OnActivate(player);
	}
	
	override void OnActivate(PlayerBase player)
	{
		player.IncreaseHealingsCount();
		/*
		if( player.GetNotifiersManager() )
			player.GetNotifiersManager().ActivateByType(eNotifiers.NTF_PILLS);
		*/
	}
	
	override void OnDeactivate(PlayerBase player)
	{
		player.DecreaseHealingsCount();
		/*
		if( player.GetNotifiersManager() )
			player.GetNotifiersManager().DeactivateByType(eNotifiers.NTF_PILLS);
		*/
	}
	
	override void OnTick(PlayerBase player, float deltaT)
	{
		float blood =  player.GetHealth("GlobalHealth", "Blood");

		float blood_scale_normalized = Math.InverseLerp(PlayerConstants.BLOOD_THRESHOLD_FATAL, player.GetMaxHealth("", "Blood"), blood);
		blood_scale_normalized = Math.Clamp(blood_scale_normalized,0,1);
		float regen_speed = Math.Lerp(PlayerConstants.HEALTH_REGEN_MIN, PlayerConstants.HEALTH_REGEN_MAX, blood_scale_normalized);
		regen_speed = regen_speed * deltaT;
		if( player.GetHealth("GlobalHealth", "Health") > 0.001 )
		{
			player.AddHealth("GlobalHealth", "Health",	regen_speed * 5.5 );
			player.AddHealth("GlobalHealth", "Blood", 	regen_speed * 5.5);
		}
	} 
    
    float CalculateRegenTime()
    {
        float regen_time = 60
        return regen_time;
    }
};