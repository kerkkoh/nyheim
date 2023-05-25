typedef array<ref Pole> TrainTrack;

class Pole
{
	vector m_position;
	float m_target_speed;
	int m_timeout;

	void Pole(vector position = "0 0 0", float target_speed = 0.0, int timeout = 0)
	{
		m_position = position;
		m_target_speed = target_speed;
		m_timeout = timeout;
	}
};