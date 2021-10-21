#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include <string>
#include <algorithm>
#include <random>
using namespace std;

class Enemy
{
private: 
	string name;
	int level;
	unsigned short int health_p;
	unsigned short int atack_p;
	unsigned short int initiative;

public:
	Enemy();
	Enemy(string name, unsigned short int health_p, unsigned short int atack_p, int unsigned level, unsigned short int initiative);
	int getAtack();
	int getHealth();
	int getLevel();
	int	getInitiative();
	void decreaseHP(int atack_p);
	string getName();
};


#endif // !ENEMY_H


