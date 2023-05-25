class Static_Lamp : Static
{
    PointLightBase m_PointLight;
    vector m_AmbientColor = "1.0 1.0 0.6";
    vector m_DiffuseColor = "1.0 1.0 0.6";
    float m_Brightness = 4.0;
    float m_Radius = 10.0;
    bool m_CastShadow = false;
    float m_KillRadius = 50.0;
    bool m_Enabled = true;

    void Static_Lamp()
    {
        // FX only on Client and in Single
        // Setup loop to reset the light if it has been destroyed
        if (!GetGame().IsMultiplayer() || GetGame().IsClient())
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.AddPointLight, 3000, true);
    }

    void AddPointLight()
    {
        if (!m_Enabled && m_PointLight)
        {
            m_PointLight.Destroy();
        }
        else if (m_Enabled && !m_PointLight)
        {
            m_PointLight = Static_Lamp_PointLight.Cast(ScriptedLightBase.CreateLight(Static_Lamp_PointLight, "0 0 0"));
            if (MemoryPointExists("light"))
                m_PointLight.AttachOnMemoryPoint(this, "light");
        }
    }
}

/*class Static_Wall : Static_Lamp {};
class Static_Neon_Sign : Static_Lamp
{
    void Static_Neon_Sign()
    {
        m_AmbientColor = "0.847 0.012 0.333";
        m_DiffuseColor = "0.847 0.012 0.333";
        m_Brightness = 1.0;
        m_Radius = 3.0;
        m_CastShadow = false;
    }
};
class Static_Sign : Static_Lamp
{
    void Static_Sign()
    {
        m_AmbientColor = "0.9 0.0 0.0";
        m_DiffuseColor = "0.9 0.0 0.0";
        m_Brightness = 2.0;
        m_Radius = 4.0;
        m_CastShadow = false;
    }
};*/
