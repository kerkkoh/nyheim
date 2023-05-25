class ActionDialCombinationLockOnMoreDoor : ActionContinuousBase
{
	void ActionDialCombinationLockOnMoreDoor()
	{
		m_CallbackClass = ActionDialCombinationLockOnTargetCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_LOW;
	}

	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINotPresent;
		m_ConditionTarget = new CCTNonRuined(UAMaxDistances.DEFAULT);
	}

	override bool HasProneException()
	{
		return true;
	}

	override string GetText()
	{
		PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
		string combination_lock_text;

		if (player)
		{
			ConstructionActionData construction_action_data = player.GetConstructionActionData();
			combination_lock_text = construction_action_data.GetDialNumberText();
		}

		return "#dial_combination_lock" + " " + combination_lock_text;
	}

	override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}

	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		Object targetObject = target.GetObject();
		if (targetObject && targetObject.CanUseConstruction())
		{
			DoorBase fence = DoorBase.Cast(targetObject);

			if (fence && fence.IsLocked())
			{
				ConstructionActionData construction_action_data = player.GetConstructionActionData();
				construction_action_data.SetCombinationLock(fence.GetCombinationLock());

				return true;

			}
		}

		return false;
	}

	override void OnFinishProgressServer(ActionData action_data)
	{
		//set dialed number
		ConstructionActionData construction_action_data = action_data.m_Player.GetConstructionActionData();
		CombinationLock combination_lock = construction_action_data.GetCombinationLock();
		if (combination_lock)
		{
			combination_lock.DialNextNumber();

			//check for unlock state
			if (!combination_lock.IsLockedOnGate())
			{
				EntityAI target_entity = EntityAI.Cast(action_data.m_Target.GetObject());
				combination_lock.UnlockServer(action_data.m_Player, target_entity);
			}
		}
	}
}
