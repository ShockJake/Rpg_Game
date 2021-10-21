#ifndef WEAPONS_H
#define WEAPONS_H

#include "Item.h"

using namespace std;

class Weapon : public Item
{
private:
	unsigned short int damage;
public:
	Weapon();
	Weapon(string name, unsigned short int damage);
	int getDamage();

	void operator= (Weapon& other_weapon);
};

#endif // !WEAPONS_H