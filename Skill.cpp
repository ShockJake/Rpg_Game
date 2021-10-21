#include "Skill.h"

//---------------SKILLS---------------

Skill::Skill()	//Basic constructor for character skill
{
	this->name = "NON_USED";
	skill_level = 0;
}

Skill::Skill(string name) //A constructor of character's skill that gives name to a skill
{
	this->name = name;
	skill_level = 1;
}

void Skill::increaseLevel() //Function to increase skill level
{
	skill_level++;
}

void Skill::increaseLevel(unsigned short int n) //Function to increase skill level by the n
{
	skill_level += n;
}

string Skill::getNameOfSkill() //Getter for name of skill
{
	return name;
}

int Skill::getLevel()	//Getter for level of skill
{
	return skill_level;
}
