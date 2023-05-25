class TrerikData extends WorldData
{
	const int RAIN_TIME_MIN = 10;
	const int RAIN_TIME_MAX = 30;
	const int CLEAR_WEATHER_CHANCE = 70;
	const int BAD_WEATHER_CHANCE = 30;

	// Actual temperature is lerped between these two values
	const float MAX_TEMPERATURE = 14;
	const float MIN_TEMPERATURE = 9;

	override void Init()
	{
		super.Init();

		// This is the initial temperature
		m_EnvironmentTemperature = MIN_TEMPERATURE;

		m_Sunrise_Jan = 8.54;
		m_Sunset_Jan = 15.52;
		m_Sunrise_Jul = 3.26;
		m_Sunset_Jul = 20.73;
		m_MaxTemps = {3,5,7,10,12,14,14,14,14,12,10,5};
		m_MinTemps = {-3,-2,0,4,9,10,11,12,9,7,4,0};

		// These disable the broken temperature fluctuation
		/*int i;
		for (i = 0; i < 12; i++)
		{
			m_MaxTemps[i] = MAX_TEMPERATURE;
			m_MinTemps[i] = MIN_TEMPERATURE;
		}*/
	}
};