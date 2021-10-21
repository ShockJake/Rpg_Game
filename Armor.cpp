#include "Armor.h"

Armor::Armor()
{
	setName("NON_USED");
	setType("Armor");
	this->defense = 0;
}

Armor::Armor(string name, unsigned short int defence)
{
	setName(name);
	setType("Armor");
	this->defense = defence;
}

int Armor::getDefence()
{
	return defense;
}

void Armor::operator= (Armor& other_armor)
{	
	setName(other_armor.getName());
	this->defense = other_armor.defense;
}