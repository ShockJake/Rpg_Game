#include "Atribute.h"

//-------------ATRIBUTES---------------

Atribute::Atribute() //Basic constructor for character atribute
{
	name = "NON_USED";
	level = 0;
}

Atribute::Atribute(string name)	//A constructor of character's atribute that gives name to a atribute
{
	this->name = name;
	this->level = 1;
}

void Atribute::increaseAtribute() //method to increase atribute by 1
{
	level++;
}

void Atribute::increaseAtribute(unsigned short int n)  //method to increase atribute by given value
{
	level += n;
}

string Atribute::getNameOfAtribute() //Getter for atribute's name
{
	return name;
}

int Atribute::getLevelOfAtribute()	//Getter for atribute's level
{
	return level;
}