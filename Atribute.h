#ifndef ATRIBUTE_H
#define ARTIBUTE_H

#include <iostream>
#include <string>

using namespace std;

class Atribute										//Class for Character's atributes like "strength" and so on...
{
private:
	string name;									
	unsigned short int level;						
public:
	Atribute();										//Basic constructor for character atribute
	Atribute(string name);							//A constructor of character's atribute that gives name to a atribute
	string getNameOfAtribute();						//Getter for atribute's name
	void increaseAtribute();						//method to increase atribute by 1
	void increaseAtribute(unsigned short int n);	//method to increase atribute by given value
	int	getLevelOfAtribute();						//Getter for atribute's level

};

#endif // !ATRIBUTE_H

