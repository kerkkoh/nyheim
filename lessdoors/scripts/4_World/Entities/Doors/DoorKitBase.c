class DoorKit : ItemBase
{
	string GetDoorType() { return "DoorBase"; }

 	override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
	{
		// super.OnPlacementComplete( player, position, orientation );
		if ( GetGame().IsServer() )
		{
			PlayerBase player_base = PlayerBase.Cast( player );
			vector newPosition = player_base.GetLocalProjectionPosition();
			vector newOrientation = player_base.GetLocalProjectionOrientation();

			DoorBase door = DoorBase.Cast( GetGame().CreateObject( GetDoorType(), GetPosition() ) );//DoorBase.Cast( GetGame().CreateObjectEx( "DoorBase", newPosition, ECE_PLACE_ON_SURFACE ) );
			door.SetPosition( newPosition );
			door.SetOrientation( newOrientation );

			this.Delete();
		}

		SetIsDeploySound( true );
	}

	override bool IsDeployable() { return true; }

	override bool DoPlacingHeightCheck() { return false; }

	/*override void DisassembleKit(ItemBase item)
	{
		if (!IsHologram())
		{
			ItemBase stick = ItemBase.Cast(GetGame().CreateObjectEx("WoodenStick",GetPosition(),ECE_PLACE_ON_SURFACE));
			MiscGameplayFunctions.TransferItemProperties(this, stick);
			stick.SetQuantity(2);
			Rope rope = Rope.Cast(item);
			CreateRope(rope);
		}
	}*/

	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
	}
}
