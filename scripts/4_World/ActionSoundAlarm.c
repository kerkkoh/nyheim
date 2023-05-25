/*class ActionSoundAlarm : ActionInteractBase
{
	Land_alarm_control m_launcher;

	void ActionSoundAlarm()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ATTACHITEM;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.OpenDoors;
	}

	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTObject(UAMaxDistances.BASEBUILDING);
	}

	override typename GetInputType()
	{
		return InteractActionInput;
	}

	override string GetText()
	{
		return "Sound alarm";
	}

	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		if (!target || !target.GetObject() || !Class.CastTo(m_launcher, target.GetObject()))
			return false;

		return true;
	}

	override void OnStartServer(ActionData action_data)
	{
		int timestamp = TRK_Time.GetTime().GetTimestamp();
		// Print("TRERIK::ActionSoundAlarm::OnStartServer" + timestamp);
		GetRPCManager().SendRPC( "Trerik", "SoundAlarm", new Param1<int>(timestamp) );
	}
}*/
