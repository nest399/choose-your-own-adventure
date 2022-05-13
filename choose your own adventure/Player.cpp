#include "Player.h"
using namespace std;

void Player::setHealth(int damage)
{
	health -= damage;
}

void Player::setLoganFound()	//once found permanently set found
{
	foundLogan = 1;
}

void Player::setAlarm()	//can only be turned on
{
	alarmSet = 1;
}

void Player::setWounded(int status)
{
	wounded = status;
}

float Player::getAttack()
{
	float attack=0;
	if (wounded == 1)
	{
		attack = (baseAttack / 2);
	}
	else
	{
		attack = baseAttack;
	}
	return attack;
}
