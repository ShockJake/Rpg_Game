#include "Active_Skill.h"

Active_Skill::Active_Skill() //Basic constructor for Active skill
{
	name = "NON-USED";
	atack_points = 0;
	cooldown = 0;
	permition = false;
}

void Active_Skill::setParameters(string name, unsigned short int atack_points, unsigned short int cooldown, bool permition, string type) //Constuctor with parameters for active skills
{
	this->name = name;
	this->atack_points = atack_points;
	this->cooldown = cooldown;
	this->permition = permition;
	this->type = type;
}

void Active_Skill::changePermition()
{
	permition = true;
}

string Active_Skill::getNameOfActiveSkill()
{
	return name;
}

string Active_Skill::getType()
{
	return type;
}

int Active_Skill::getAtackPoints()
{
	return atack_points;
}

int Active_Skill::getCooldown()
{
	return cooldown;
}

bool Active_Skill::getPermition()
{
	return permition;
}