#include "Enemy.h"

using namespace std;

Enemy::Enemy()
{
	this->name		 = "NON_USED";
	this->atack_p	 = 0;
	this->health_p	 = 0;
	this->initiative = 0;
	this->level		 = 0;
}

Enemy::Enemy(string name, unsigned short int health_p, unsigned short int atack_p, int unsigned level, unsigned short int initiative)
{
	this->name		 = name;
	this->health_p	 = health_p;
	this->atack_p	 = atack_p;
	this->level		 = level;
	this->initiative = initiative;
}

int Enemy::getHealth()
{
	return health_p;
}

int Enemy::getAtack()
{
	return atack_p;
}

void Enemy::decreaseHP(int n)
{
	health_p -= n;
}

int Enemy::getInitiative()
{
	return rand() % 10 + initiative;
}

string Enemy::getName()
{
	return name;
}

int Enemy::getLevel()
{
	return level;
}