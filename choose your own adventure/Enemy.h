class Enemy
{
private:
	int role;	//0 is worker and 1 is hero
	int health;
	int baseAttack;
	int wounded;	//if wounded set to 1 if not then 0
	int alarmSet;
	int aware;
public:
	Enemy()
	{
		role = 0;
		health = 100;
		baseAttack = 15;
		wounded = 0;
		alarmSet = 0;
		aware = 0;
	}

	void setRole(int);
	void takeDamage(int);
	void setHealth(int);
	void setWounded(int);
	void setAlarm();
	void setAware(int);
	void displayRole();
	float getAttack();
	void displayAware();
	
	int getAware()
	{
		return aware;
	}

	int getHealth()
	{
		return health;
	}

	int getWounded()
	{
		return wounded;
	}

	int getAlarm()
	{
		return alarmSet;
	}
};

