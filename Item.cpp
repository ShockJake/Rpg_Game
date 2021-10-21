#include "Item.h"

Item::Item()
{
	this->name	 = "NON_USED";
	this->type	 = "NON_USED";
	this->number = 0;
}

Item::Item(string name, string type)
{
	this->name = name;
	this->type = type;
}

void Item::changeNumber(unsigned short int number)
{
	this->number += number;
}

string Item::getName()
{
	return name;
}

string Item::getType()
{
	return type;
}

void Item::setName(string name)
{
	this->name = name;
}

void Item::setType(string type)
{
	this->type = name;
}

void Item::operator=(const Item& other_item)
{
	this->name	 = other_item.name;
	this->type	 = other_item.type;
	this->number = other_item.number;
}