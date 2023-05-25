class ActionNextCombinationLockDialOnMoreDoor : ActionInteractBase
{
	void ActionNextCombinationLockDialOnMoreDoor() {}

	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNonRuined(UAMaxDistances.DEFAULT);
	}

	override string GetText()
	{
		return "#next_combination_lock_dial";
	}

	override bool IsInstant()
	{
		return true;
	}

	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		Object targetObject = target.GetObject();
		if (targetObject && targetObject.CanUseConstruction())
		{
			DoorBase fence = DoorBase.Cast(targetObject);

			if (fence && fence.IsLocked() && !player.GetItemInHands())
			{
				string selection = fence.GetActionComponentName(target.GetComponentIndex());

				ConstructionActionData construction_action_data = player.GetConstructionActionData();
				construction_action_data.SetCombinationLock(fence.GetCombinationLock());

				return true;

			}
		}

		return false;
	}

	override void Start(ActionData action_data)
	{
		super.Start(action_data);

		//set next dial
		ConstructionActionData construction_action_data = action_data.m_Player.GetConstructionActionData();
		CombinationLock combination_lock = construction_action_data.GetCombinationLock();
		if (combination_lock)
		{
			combination_lock.SetNextDial();
		}
	}
}
