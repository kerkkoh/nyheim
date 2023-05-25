modded class Hatchet
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionDismantleMoreDoor);
	}
};

modded class Crowbar
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionDismantleMoreDoor);
	}
};

modded class Hacksaw extends ToolBase
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionDestroyCombinationLockMoreDoor);
	}
};
