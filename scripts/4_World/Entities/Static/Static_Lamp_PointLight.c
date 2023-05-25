class Static_Lamp_PointLight : PointLightBase
{
	private float m_DefaultBrightness = 4.0;
	private float m_DefaultRadius = 10.0;
	protected float m_KillRadius = 50.0;

	void Static_Lamp_PointLight()
	{
		SetVisibleDuringDaylight(false);
		SetFadeOutTime(2);
		SetFromParent();
	}

	void SetFromParent()
	{
		Static_Lamp parent = Static_Lamp.Cast(m_Parent);
		if (parent)
		{
			SetBrightnessTo(parent.m_Brightness);

			vector color = parent.m_AmbientColor;
			SetAmbientColor(color[0], color[1], color[2]);
			color = parent.m_DiffuseColor;
			SetDiffuseColor(color[0], color[1], color[2]);

			SetCastShadow(parent.m_CastShadow);

			SetRadiusTo(parent.m_Radius);

			m_KillRadius = parent.m_KillRadius;

			m_DefaultBrightness = m_Brightness;
			m_DefaultBrightness = m_Radius;
		}
	}

	void SetIntensity(float coef, float time)
	{
		FadeBrightnessTo(m_DefaultBrightness * coef, time);
		FadeRadiusTo(m_DefaultRadius * coef, time);
	}

	override void AttachOnObject(Object parent, vector local_pos = "0 0 0", vector local_ori = "0 0 0")
	{
		super.AttachOnObject(parent, local_pos, local_ori);
		SetFromParent();
	}

	//! On frame event.
	override void EOnFrame(IEntity other, float timeSlice)
	{
		super.EOnFrame(other, timeSlice);
		if (m_KillRadius != 0.0 && vector.Distance(GetPosition(), GetGame().GetCurrentCameraPosition()) > m_KillRadius)
			Destroy();
	}
}
