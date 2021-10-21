#include "Weapons.h"

Weapon::Weapon()
{
	setName("NON_USED");
	setType("Weapon");
	this->damage = 0;
}

Weapon::Weapon(string name, unsigned short int damage)
{
	setName(name);
	setType("Weapon");
	this->damage = damage;
}

int Weapon::getDamage()
{
	return damage;
}

void Weapon::operator= (Weapon& other_weapon)
{
	setName(other_weapon.getName());
	this->damage = other_weapon.damage;
}