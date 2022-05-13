class Player
{
private:
	int health;
	int baseAttack;
	int wounded;	//if wounded set to 1 if not then 0
	int foundLogan;
	int alarmSet;
	//int foundRoman; if doing escape
public:
	Player()
	{
		health = 100;
		baseAttack = 30;
		wounded = 0;
		foundLogan = 0;
		alarmSet = 0;
	}

	int getHealth()
	{
		return health;
	}
	void setHealth(int damage);
	float getAttack();
	int getWounded();
	void setWounded();
	int getLogan();
	void setLoganFound();
	int getAlarm();
	void setAlarm();
};
