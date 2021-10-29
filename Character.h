#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
#include <string>
#include "Atribute.h"
#include "Skill.h"
#include "Active_Skill.h"
#include "functions.h"
#include "Item.h"
#include "Weapons.h"
#include "Backpack.h"
#include "game_locale.h"

using namespace std;

unsigned const int levels[5] = {200, 500, 1000, 1500, 2000};

class Character
{
private:

	string name;
	int	health_p;
	unsigned int armor_p;
	unsigned int atack_p;
	unsigned short int level;
	unsigned short int initiative;

	unsigned int expiriance = 0;

	string Race;
	string Class;

	Backpack backpack;

	Atribute atrs[5]
	{
		Atribute(Locale::getText(Locale::strength)),
		Atribute(Locale::getText(Locale::perseption)),
		Atribute(Locale::getText(Locale::endurance)),
		Atribute(Locale::getText(Locale::wisdom)),
		Atribute(Locale::getText(Locale::luck))
	};

	Skill skills[8]
	{
		Skill(Locale::getText(Locale::small_sword)),
		Skill(Locale::getText(Locale::medium_sword)),
		Skill(Locale::getText(Locale::long_sword)),
		Skill(Locale::getText(Locale::light_armor)),
		Skill(Locale::getText(Locale::medium_armor)),
		Skill(Locale::getText(Locale::heavy_armor)),
		Skill(Locale::getText(Locale::little_bow)),
		Skill(Locale::getText(Locale::long_bow))
	};

	Active_Skill a_skills[3]
	{
		Active_Skill(),
		Active_Skill(),
		Active_Skill(),
	};
	
public:

	Character(string name);
	void showSkills();
	void showCharacterSet();
	void gainExp(unsigned int exp);
	void showItems();
	void decreaseHP(int atack_p);
	int getInitiative();
	int getHealthPoints();
	int atack();
	string getNameOfUsingWeapon();

private:

	void setRace();
	void setClass();
	void setAtributes();
	void setHealthPoints();
	void setInitiative();
	void levelUp();

	void showIncreasedArrtibutes();
	void showIncreasedSkills();
	void showIncreasedActiveSkills();
	void showAtributes();

	bool chooseRace(unsigned short int n);
	bool chooseClass(unsigned short int n);
};

#endif /*CLASSES_H*/
