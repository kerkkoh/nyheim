modded class MissionBase
{
    override void InitialiseWorldData()
    {
        string worldName = "empty";
        GetGame().GetWorldName(worldName);
        worldName.ToLower();

        if (worldName == "trerik4")
            m_WorldData = new TrerikData;
        else
            super.InitialiseWorldData();
    }
}

modded class MissionGameplay
{
    ref TrerikBase m_TrerikBase;

    ref TrerikBase GetTrerikBase()
    {
        if (!m_TrerikBase)
            m_TrerikBase = new ref TrerikBase;

        return m_TrerikBase;
    }

    /*
    void MissionGameplay()
    {
        if (!GetGame().IsMultiplayer())
        {
            // GetMissileHandler();
            // GetTrainHandler();
        }
    }
    */

    override void OnMissionStart()
    {
        super.OnMissionStart();
        GetTrerikBase();
    }

    override void OnUpdate(float timeslice)
    {
        super.OnUpdate(timeslice);
        GetTrerikBase().OnUpdate(timeslice);

        Input input = GetGame().GetInput();

        if (input.LocalPress("UAToggleMapSounds", false))
        {
            bool toggle = GetTrerikBase().ToggleMapSounds();

            if (toggle)
                GetTrerikBase().MessagePlayer("Enabled map sounds");
            else
                GetTrerikBase().MessagePlayer("Disabled map sounds");
        }
    }
}

modded class MissionServer
{
    ref TrerikBase m_TrerikBase;

    ref TrerikBase GetTrerikBase()
    {
        if (!m_TrerikBase)
            m_TrerikBase = new ref TrerikBase;

        return m_TrerikBase;
    }

    void MissionServer()
    {
        if (GetGame().IsMultiplayer())
        {
            // GetMissileHandler();
            GetTrainHandler();
        }
    }

    override void OnInit()
    {
        super.OnInit();
        GetTrerikBase().OnInit();
    }

    override void OnUpdate(float timeslice)
    {
        super.OnUpdate(timeslice);
        GetTrerikBase().OnUpdate(timeslice);
    }
}
