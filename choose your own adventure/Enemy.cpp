#include "Enemy.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void Enemy::setRole(int)	//0 is worker 1 is hero
{
	role = 1;
}

void Enemy::setHealth(int damage)
{
	health -= damage;
}

void Enemy::setWounded(int status)
{
	wounded = status;
}

void Enemy::setAlarm()	//can only be turned on
{
	alarmSet = 1;
	aware = 1;
}

void Enemy::setAware(int status)	//0 is unaware 1 is aware
{
	aware = status;
}

float Enemy::getAttack()
{
	float attack = 0;
	switch (role)
	{
	case 0:	//worker
		if (wounded == 1)
		{
			attack = (baseAttack / 2);
		}
		else
		{
			attack = baseAttack;
		}
		break;
	case 1:	//hero
		if (wounded == 1)
		{
			attack = baseAttack;
		}
		else
		{
			attack = baseAttack*2;
		}
		break;
	}

	return attack;
}

void Enemy::getRole()
{
	if (role == 1)
	{
		cout << "hero";
	}
	else {
		cout << "worker";
	}
}

void Enemy::getAware()
{
	if (aware == 1)
	{
		cout << "has noticed you";
	}
	else {
		cout << "has not noticed you";
	}
}
