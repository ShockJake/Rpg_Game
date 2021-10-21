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
		Atribute("Сила"),
		Atribute("Восприятие"),
		Atribute("Выносливость"),
		Atribute("Мудрость"),
		Atribute("Удача")
	};

	Skill skills[8]
	{
		Skill("Малый меч"),
		Skill("Средний меч"),
		Skill("Большой меч"),
		Skill("Легкая броня"),
		Skill("Средняя броня"),
		Skill("Тяжелая броня"),
		Skill("Малый лук"),
		Skill("Длинный лук")
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
