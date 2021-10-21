#ifndef ACTIVE_SKILL_H
#define ACTIVE_SKILL_H

#include <iostream>
#include <string>

using namespace std;

class Active_Skill
{
private:
	string name;
	unsigned short int atack_points;
	unsigned short int cooldown;
	bool permition;
	string type;
public:
	Active_Skill();
	void setParameters(string name, unsigned short int atack_points, unsigned short int cooldown, bool permition, string type);
	void changePermition();
	string getNameOfActiveSkill();
	string getType();
	int getCooldown();
	int getAtackPoints();
	bool getPermition();
};

#endif // !ACTIVE_SKILL_H
