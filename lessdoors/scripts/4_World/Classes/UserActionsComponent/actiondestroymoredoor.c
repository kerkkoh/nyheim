class ActionDestroyMoreDoorCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(1200);
	}
};

class ActionDestroyMoreDoor : ActionContinuousBase
{
	void ActionDestroyMoreDoor()
	{
		m_CallbackClass = ActionDestroyMoreDoorCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DISASSEMBLE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;

		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
	}

	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined(UAMaxDistances.DEFAULT);
	}

	override string GetText()
	{
		return "Destroy";
	}

	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		Object target_object = target.GetObject();
		DoorBase base_building = DoorBase.Cast(target_object);
		if (base_building)
		{
			if (HasFancyRaidTools(item))
			{
				return DestroyCondition(player, target, item, true);
			}
		}

		return false;
	}

	bool HasFancyRaidTools(ItemBase item_in_hands)
	{
		ref TStringArray j_raidingTools = { "Hatchet", "Sledgehammer", "FirefighterAxe", "WoodAxe" };

		foreach (string tool : j_raidingTools)
		{
			if (item_in_hands && item_in_hands.IsKindOf(tool))
			{
				return true;
			}
		}
		return false;
	}

	override bool ActionConditionContinue(ActionData action_data)
	{
		return DestroyCondition(action_data.m_Player, action_data.m_Target, action_data.m_MainItem, false);
	}

	override void OnFinishProgressServer(ActionData action_data)
	{
		DoorBase base_building = DoorBase.Cast(action_data.m_Target.GetObject());
		int damageToTool = 25;

		base_building.Delete();

		action_data.m_MainItem.DecreaseHealth(damageToTool, false);
	}

	protected bool DestroyCondition(PlayerBase player, ActionTarget target, ItemBase item, bool camera_check)
	{
		if (player && !player.IsLeaning())
		{
			Object target_object = target.GetObject();
			DoorBase base_building = DoorBase.Cast(target_object);

			// if( base_building && base_building.DismantleDisabled())
			// {
			// 	return true;
			// }

			if (base_building)
			{
				string part_name = "door1";

				//camera and position checks
				if (base_building.IsFacingPlayer(player, part_name) && !player.GetInputController().CameraIsFreeLook())
				{
					//Camera check (client-only)
					if (camera_check)
					{
						if (GetGame() && (!GetGame().IsMultiplayer() || GetGame().IsClient()))
						{
							if (!base_building.IsFacingCamera(part_name))
							{
								return false;
							}
						}
					}
					return true;
				}
			}
		}
		return false;
	}

	override string GetAdminLogMessage(ActionData action_data)
	{
		return " destroyed " + action_data.m_Target.GetObject().GetDisplayName() + " with " + action_data.m_MainItem.GetDisplayName();
	}
}
