#ifndef SKILL_H
#define SKILL_H

#include <iostream>
#include <string>

using namespace std;

class Skill												//Class for character's skills
{
private:
	string name;										
	unsigned short int skill_level;						
public:
	Skill();											
	Skill(string name);									//Construtor that gives a special name to the skill
	string getNameOfSkill();							
	void increaseLevel();								//Method to increase level of skill
	void increaseLevel(unsigned short int n);			//Method to increase level of skill by special value
	int getLevel();										
};

#endif // !SKILL_H
