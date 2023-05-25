/* class ActionLaunchMissile : ActionInteractBase
{
	Land_missile_launcher m_launcher;

	void ActionLaunchMissile()
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
		return "Launch Missile";
	}

	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		if (!target || !target.GetObject() || !Class.CastTo(m_launcher, target.GetObject()))
			return false;

		return true;
	}

	override void OnStartServer(ActionData action_data)
	{
		vector missileSpawn = m_launcher.ModelToWorld(m_launcher.GetNextMissileSpawnPos());
		Missile obj = Missile.Cast(GetGame().CreateObject("Missile", missileSpawn));
		obj.SetPosition(missileSpawn);
		obj.SetDirection(m_launcher.GetAxisDirection());

		GetMissileHandler().m_missiles.Insert(obj);
		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(obj.SetActive, 3300, false, true);
		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(m_launcher.PlayMissileSound, 2800, false);
	}
}
 */