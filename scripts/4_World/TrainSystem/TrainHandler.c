class TrainHandler
{
	autoptr array<trerik_tog> m_trains;

	void TrainHandler()
	{
		m_trains = new array<trerik_tog>();
	}

	void OnUpdate(float timeslice)
	{
		for (int i = 0; i < m_trains.Count(); i++)
		{
			auto train = m_trains.Get(i);

			if (!train)
			{
				m_trains.Remove(i);
				continue;
			}

			if (train && train.GetActive())
			{
				train.Move(timeslice);
			}
		}
	}
}

static ref TrainHandler g_TrainHandler;
static ref TrainHandler GetTrainHandler()
{
	if (!g_TrainHandler)
		g_TrainHandler = new ref TrainHandler();
	return g_TrainHandler;
}
