#include "Player.h"
using namespace std;

void Player::takeDamage(int damage)
{
	health -= damage;
	wounded = 1;
}

void Player::setHealth(int temp)
{
	health = temp;
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

void Player::setMedicEnemyRemaining(int remaining)
{
	medicEnemyRemaining -= remaining;
}

float Player::getAttack()
{
	float attack=0;
	if (wounded == 1)
	{
		attack = (baseAttack / 1.5);
	}
	else
	{
		attack = baseAttack;
	}
	return attack;
}
