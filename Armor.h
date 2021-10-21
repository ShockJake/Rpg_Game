#ifndef ARMOR_H
#define ARMOR_H

#include "Item.h"

using namespace std;

class Armor : public Item
{
private:
	unsigned short int defense;
public:
	Armor();
	Armor(string name, unsigned short int defense);
	int getDefence();

	void operator=(Armor &other_armor);
};

#endif /*ARMOR_H*/