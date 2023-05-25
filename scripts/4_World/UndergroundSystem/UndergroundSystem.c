/*static void Msg(string msg)
{
    // GetGame().GetMission().OnEvent(ChatMessageEventTypeID, new ChatMessageEventParams(CCAdmin, "UGSYS", msg, ""));
}*/

#ifdef UNDERGROUND_SYSTEM
class UndergroundSystem
{
    private ref array<ref UndergroundArea> m_ugAreas;
    
    private float m_defaultAccom;
    private float m_accom = 1.0; // Eye accommodation (accom), https://en.wikipedia.org/wiki/Accommodation_(eye)
    private float m_accomTarget = 1.0; // Target to which we change m_accom towards
    const float ACCOM_CHANGE_STEP = 0.01; // Multiplier for the difference between accom & target, which modifies the accom
    const float ACCOM_EQUALS_THRESHOLD = 0.015; // "epsilon" = how close is close enough for accoms to be equal
    const float UNDERGROUND_ACCOM = 0.01; // Accom for underground portions of the map
    const float UNDERGROUND_NVG_ACCOM = 0.95; // Accom for when NVGs are enabled

    private float m_timeCounter = 0.0; // Counter for regulating undg checks
    const float TIME_COUNTER_MAX = 0.2; // How often should underground checks be performed (seconds)
    
    private bool m_initialized = false;
    
    bool m_previousNVGStatus = false;

    void UndergroundSystem()
    {
        m_defaultAccom = GetGame().GetWorld().GetEyeAccom();
        m_ugAreas = new array<ref UndergroundArea>;

        // Commercial area
        TPointArray bounds = { new Point(2200, 2700), new Point(1500, 2700), new Point(1500, 2350), new Point(2200, 2350) };
        UndergroundArea ugArea = new UndergroundArea(bounds, 33.0);
        m_ugAreas.Insert(ugArea);
        // Research lab
        TPointArray bounds1 = { new Point(3518.7, 4206.9), new Point(3518.7, 4045.1), new Point(3448.0, 4045.1), new Point(3448.0, 4206.5), new Point(3518.7, 4206.9) };
        TPointArray bounds2 = { new Point(3570.4, 4057.9), new Point(3570.4, 3958.8), new Point(3482.1, 3958.8), new Point(3482.1, 4057.9), new Point(3570.4, 4057.9) };
        TPointArray bounds3 = { new Point(3541.0, 4169.5), new Point(3541.0, 4055.4), new Point(3516.8, 4055.4), new Point(3516.8, 4169.5), new Point(3541.0, 4169.5) };
        TPointArray bounds4 = { new Point(3556.0, 4055.5), new Point(3538.6, 4055.5), new Point(3538.6, 4073.7), new Point(3556.0, 4073.7), new Point(3556.0, 4055.5) };
        TPointArray bounds5 = { new Point(3484.1, 4045.7), new Point(3484.1, 4016.0), new Point(3453.9, 4016.0), new Point(3453.9, 4045.7), new Point(3484.1, 4045.7) };

        UndergroundArea ugArea1 = new UndergroundArea(bounds1, 181.0);
        UndergroundArea ugArea2 = new UndergroundArea(bounds2, 181.0);
        UndergroundArea ugArea3 = new UndergroundArea(bounds3, 181.0);
        UndergroundArea ugArea4 = new UndergroundArea(bounds4, 181.0);
        UndergroundArea ugArea5 = new UndergroundArea(bounds5, 181.0);
        m_ugAreas.Insert(ugArea1);
        m_ugAreas.Insert(ugArea2);
        m_ugAreas.Insert(ugArea3);
        m_ugAreas.Insert(ugArea4);
        m_ugAreas.Insert(ugArea5);
    }

    void ~UndergroundSystem()
    {
        delete m_ugAreas;
    }

    bool IsUnderground(vector pos)
    {
        foreach (UndergroundArea area : m_ugAreas)
        {
            if (area && area.IsInside(pos))
            {
                return true;
            }
        }
        return false;
    }

    void SetEyeAccom(float to)
    {
        GetGame().GetWorld().SetEyeAccom(to);
    }

    void UpdateEyeAccom()
    {
        // Msg(string.Format("UpdateEyeAccom :: m_accom: %1 | m_accomTarget: %2", m_accom, m_accomTarget));
        GetGame().GetWorld().SetEyeAccom(m_accom);
    }

    void ChangeAccomInstantly(float accom, bool previousNVGStatus)
    {
        m_accom = accom;
        m_accomTarget = accom;
        m_previousNVGStatus = previousNVGStatus;
        UpdateEyeAccom();
    }

    void Initialize(float accom, bool previousNVGStatus, bool initialized = true)
    {
        ChangeAccomInstantly(accom, previousNVGStatus);
        m_initialized = initialized;
    }

    void OnUpdate(float timeslice)
    {
        if (!GetGame() || !GetGame().GetPlayer())
            return;
        if (!GetGame().GetPlayer().IsAlive())
        {
            // De-initialize dead players
            if (m_initialized) Initialize(1.0, false, false);
            // Do not apply effects on them
            return;
        }

        m_timeCounter += timeslice;

        // Every .2 seconds, complete underground & nvg check
        if (m_timeCounter >= TIME_COUNTER_MAX)
        {
            m_timeCounter = 0.0;

            PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
            vector pos = GetGame().GetPlayer().GetPosition();
            bool currentNvgStatus = player.m_applyNVGEyeAcc;

            if (IsUnderground(pos))
            {
                // We are underground...

                if (!m_initialized)
                {
                    Initialize(UNDERGROUND_ACCOM, currentNvgStatus);
                    return;
                }

                // NVG switching logic
                // NVG switched on --> Instant light (this will fade to 1.0 later)
                if (currentNvgStatus && !m_previousNVGStatus)
                {
                    // Msg("Going to nvg m_previousNVGStatus: " + m_previousNVGStatus + " m_applyNVGEyeAcc: " + currentNvgStatus);
                    ChangeAccomInstantly(UNDERGROUND_NVG_ACCOM, true);
                    return;
                }
                // NVG switched off --> Instant darkness
                else if (m_previousNVGStatus && !currentNvgStatus)
                {
                    // Msg("Back from nvg m_previousNVGStatus: " + m_previousNVGStatus + " m_applyNVGEyeAcc: " + currentNvgStatus);
                    ChangeAccomInstantly(UNDERGROUND_ACCOM, false);
                    return;
                }
                // NVG staying on (keep target the same)
                else if (currentNvgStatus && m_previousNVGStatus)
                {
                    return;
                }

                m_accomTarget = UNDERGROUND_ACCOM;
            }
            else
            {
                // We are not underground...

                if (!m_initialized)
                {
                    Initialize(m_defaultAccom, currentNvgStatus);
                    return;
                }

                if (m_previousNVGStatus && !currentNvgStatus)
                {
                    // Msg("NOT UG Back from nvg m_previousNVGStatus: " + m_previousNVGStatus + " m_applyNVGEyeAcc: " + currentNvgStatus);
                    ChangeAccomInstantly(m_defaultAccom, false);
                    return;
                }

                m_accomTarget = m_defaultAccom;
            }

            // Debug
            /*if (m_accom != m_accomTarget)
            {
                float result;
                if (m_accomTarget > m_accom)
                {
                    result = Math.Min(m_accomTarget, m_accom + ((m_accomTarget - m_accom) * ACCOM_CHANGE_STEP));
                }
                else
                {
                    result = Math.Max(m_accomTarget, m_accom + ((m_accomTarget - m_accom) * ACCOM_CHANGE_STEP));
                }
                // Msg(string.Format("new m_accom: %1", result));
            }*/
        }

        // Only update accom if there's a need to do so
        if (m_accom != m_accomTarget)
        {
            // Check if difference is small and set the accom to target if so
            if (Math.AbsFloat(m_accomTarget - m_accom) < ACCOM_EQUALS_THRESHOLD)
            {
                m_accom = m_accomTarget;
                UpdateEyeAccom();
                return;
            }

            // Increment/decrement accom in small steps
            float newAccom = m_accom + ((m_accomTarget - m_accom) * ACCOM_CHANGE_STEP);

            // Min/Max, Making sure that they don't overflow/underflow
            // m_accom = Funk<float>.Conditional(m_accomTarget > m_accom, Math.Min(m_accomTarget, newAccom), Math.Max(m_accomTarget, newAccom));
            if (m_accomTarget > m_accom)
            {
                m_accom = Math.Min(m_accomTarget, newAccom);
            }
            else
            {
                m_accom = Math.Max(m_accomTarget, newAccom);
            }
            // Msg(string.Format("setting m_accom: %1", m_accom));
            UpdateEyeAccom();
        }
    }
}

typedef array<ref Point> TPointArray;
class Point
{
    float X, Y;
    void Point(float i_x, float i_y)
    {
        X = i_x;
        Y = i_y;
    }
}

class UndergroundArea
{
    ref TPointArray m_bounds = new TPointArray;
    float m_altitude;

    void UndergroundArea(TPointArray bounds, float altitude)
    {
        m_bounds = bounds;
        m_altitude = altitude;
        // foreach (Point p : m_bounds)
        // {
        //     // Msg("UGSYS" + string.Format("x: %1 y: %2", p.X, p.Y));
        //     // Print("UGSYS: " + string.Format("x: %1 y: %2", p.X, p.Y));
        // }
    }

    void ~UndergroundArea()
    {
        if (m_bounds)
        {
            for (int i = 0; i < m_bounds.Count(); i++)
            {
                delete m_bounds[i];
            }
            delete m_bounds;
        }
    }

    bool IsInside(vector pos)
    {
        bool isinpont = IsPosInPolygon(pos);
        // Msg("pos " + pos[1] + " | m_altitude " + m_altitude + " | is smaller " + (pos[1] < m_altitude));
        return IsPosInPolygon(pos) && (pos[1] < m_altitude);
    }

    bool IsPosInPolygon(vector pos)
    {
        float minX = m_bounds[0].X;
        float maxX = m_bounds[0].X;
        float minY = m_bounds[0].Y;
        float maxY = m_bounds[0].Y;

        for (int i = 1; i < m_bounds.Count(); i++)
        {
            Point q = m_bounds[i];
            minX = Math.Min(q.X, minX);
            maxX = Math.Max(q.X, maxX);
            minY = Math.Min(q.Y, minY);
            maxY = Math.Max(q.Y, maxY);
        }

        return pos[0] < maxX && pos[0] > minX && pos[2] < maxY && pos[2] > minY;
    }
}
#endif
