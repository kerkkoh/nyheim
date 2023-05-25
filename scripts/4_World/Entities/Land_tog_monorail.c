// This somehow broke after 1.09, frick! I promise it was super cool before
/*class Land_tog_monorail : BuildingSuper
{
    float animVal = 0.0;

	void Land_tog_monorail()
	{
        // Print("## TR3RIK4 ## : Land_tog_monorail");
        GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( this.ToggleAnimState, 10000, true );
	}

    void ToggleAnimState()
    {
        animVal = 1.0 - animVal;
        // Print("## TR3RIK4 ## : ToggleAnimState " + animVal);
        SetAnimationPhase( "Move", animVal );
    }
}*/