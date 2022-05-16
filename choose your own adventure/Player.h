class Player
{
private:
	int health;
	int baseAttack;
	int wounded;	//if wounded set to 1 if not then 0
	int foundLogan;
	int alarmSet;
	int medicEnemyRemaining;
public:
	Player()
	{
		health = 100;
		baseAttack = 30;
		wounded = 0;
		foundLogan = 0;
		alarmSet = 0;
		medicEnemyRemaining = 3;
	}

	void takeDamage(int);
	void setHealth(int);
	void setLoganFound();
	void setAlarm();
	void setWounded(int);
	void setMedicEnemyRemaining(int);
	float getAttack();

	int getHealth()
	{
		return health;
	}
	int getWounded()
	{
		return wounded;
	}
	int getLogan()
	{
		return foundLogan;
	}

	int getAlarm()
	{
		return alarmSet;
	}

	int getMedicEnemyRemaining()
	{
		return medicEnemyRemaining;
	}
};
