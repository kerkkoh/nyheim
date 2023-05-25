class DoorBase : Fence
{
	void DoorBase() {}
	void ~DoorBase() {}

    override bool HasHinges() { return true; }

	override ItemBase FoldBaseBuildingObject()
	{
		ItemBase item = CreateConstructionKit();
		DestroyConstruction();
		return item;
	}
	ItemBase CreateConstructionKit()
	{
		ItemBase construction_kit = ItemBase.Cast( GetGame().CreateObject( GetConstructionKitType(), GetPosition() ) );
		if ( m_ConstructionKitHealth > 0 )construction_kit.SetHealth( m_ConstructionKitHealth );
		return construction_kit;
	}
	protected string GetConstructionKitType() { return "WoodenCrate"; }

	override bool CanReceiveAttachment( EntityAI attachment, int slotId ) { return true; }
	override bool CanDisplayAttachmentCategory( string category_name ) { return true; }
    override bool CanDisplayAttachmentSlot( string slot_name ) { return true; }
    override bool NameOverride(out string output) { return false; }

	override void EEHealthLevelChanged(int oldLevel, int newLevel, string zone) { this.SetHealth(9999990); }

	override void OnStoreSave( ParamsWriteContext ctx )
	{   
		super.OnStoreSave( ctx );
		this.SetHealth(9999990);
	}

	override void AfterStoreLoad()
	{
        super.AfterStoreLoad();

		//prevent deletion after taking damage
		this.SetHealth(9999990);
		this.SetLifetime(3888000);
	}

	override void SetActions()
	{
		super.SetActions();

		//AddAction(ActionDialCombinationLockOnTarget);
		//AddAction(ActionNextCombinationLockDialOnTarget);
		RemoveAction(ActionFoldBaseBuildingObject);
		
		AddAction(ActionDialCombinationLockOnMoreDoor);
		AddAction(ActionNextCombinationLockDialOnMoreDoor);
	}
}

class Door1 : DoorBase {
	override string GetConstructionKitType() { return "Door1Kit"; }
}
