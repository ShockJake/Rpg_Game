#include "Character.h"
#include <time.h>
#include <cstdlib>

using namespace std;

Character::Character(string name)
{
	this->name = name;
	level = 1;
	atack_p = 1;
	armor_p = 0;
	system("cls");
	setRace();
	system("cls");
	setClass();
	setAtributes();
	setHealthPoints();
	setInitiative();

}

bool Character::chooseRace(unsigned short int option_int)
{
	if (option_int > 4 || option_int < 1)
	{
		cerr << "--- ������, ��� ����� �����! ---" << endl;
		return false;
	}
	else if (option_int == 1)
	{
		Race = "�������";

		skills[0].increaseLevel();
		skills[1].increaseLevel();
		skills[3].increaseLevel();
		skills[4].increaseLevel();
		skills[6].increaseLevel();

		atrs[2].increaseAtribute();
		atrs[4].increaseAtribute();
		return true;
	}
	else if (option_int == 2)
	{
		Race = "����";

		skills[0].increaseLevel();
		skills[3].increaseLevel();
		skills[6].increaseLevel();
		skills[7].increaseLevel();

		atrs[1].increaseAtribute();
		atrs[3].increaseAtribute();
		return true;
	}
	else if (option_int == 3)
	{
		Race = "����";

		skills[0].increaseLevel();
		skills[1].increaseLevel();
		skills[2].increaseLevel();
		skills[3].increaseLevel();
		skills[4].increaseLevel();
		skills[5].increaseLevel();
		skills[6].increaseLevel();
		skills[7].increaseLevel();

		atrs[0].increaseAtribute();
		atrs[2].increaseAtribute();
		return true;
	}
	else if (option_int == 4)
	{
		getText("Races.txt");
		return false;
	}
	else return false;
}

void Character::showSkills()
{
	cout << "#   ��� ������:  |  �������:" << endl;

	for (int i = 0; i < 8; i++)
	{
		cout << i + 1 << ") " << skills[i].getNameOfSkill() << " -\t" << skills[i].getLevel() << endl;
	}
}

void Character::showIncreasedArrtibutes()
{
	cout << "�� ��������� �������� � ���������: " << endl;
	for (int i = 0; i < 5; i++)
	{
		if (atrs[i].getLevelOfAtribute() > 1)
		{
			cout << i + 1 << ") " << atrs[i].getNameOfAtribute() << " +" << atrs[i].getLevelOfAtribute() - 1 << endl;
		}
	}
}

void Character::showIncreasedSkills()
{
	cout << "�� ��������� �������� � �������: " << endl;
	for (int i = 0; i < 8; i++)
	{
		if (skills[i].getLevel() > 1)
		{
			cout << i + 1 << ") " << skills[i].getNameOfSkill() << " +" << skills[i].getLevel() - 1 << endl;
		}
	}
}

void Character::showIncreasedActiveSkills()
{
	cout << "�� ��������� ������: " << endl;
	for (int i = 0; i < 3; i++)
	{
		if (a_skills[i].getNameOfActiveSkill() != "NON-USED")
		{
			cout << i + 1 << ") " << a_skills[i].getNameOfActiveSkill() << endl;
		}

	}
}

bool Character::chooseClass(unsigned short int option_int)
{

	if (option_int > 4 || option_int < 1)
	{
		cerr << "--- ������, ��� ����� �����! ---" << endl;
		return false;
	}
	else if (option_int == 1)
	{
		Class = "����";
		a_skills[0].setParameters("����������� ����", 3, 1, false, "atack");
		a_skills[1].setParameters("����� �������", 4, 2, false, "atack");
		a_skills[2].setParameters("������", 0, 4, false, "spell");
		return true;
	}
	else if (option_int == 2)
	{
		Class = "���";
		a_skills[0].setParameters("�������� ���", 2, 0, false, "atack");
		a_skills[1].setParameters("������� ���", 4, 2, false, "atack");
		a_skills[2].setParameters("���������� �����", 0, 4, false, "spell");
		return true;
	}
	else if (option_int == 3)
	{
		Class = "������";
		a_skills[0].setParameters("���������� �������", 3, 1, false, "atack");
		a_skills[1].setParameters("����������� �����", 4, 2, false, "atack");
		a_skills[2].setParameters("������� ������", 0, 4, false, "spell");
		return true;
	}
	else if (option_int == 4)
	{
		getText("Classes.txt");
		return false;
	}
	else
	{
		return false;
	}
}

void Character::setRace()
{
	string option_str;
	int option_int;
	bool is_end = false;
	while (!is_end)
	{
		cout << "�������� ����� ���������: " << endl;
		cout << " 1) �������" << endl;
		cout << " 2) ����" << endl;
		cout << " 3) ����" << endl;
		cout << " 4) - �������� ������� � ������ -" << endl;
		cin >> option_str;
		if (!checkNumber(option_str))
		{
			cerr << "--- Invalid input!!! ---" << endl;
		}
		else
		{
			option_int = stoi(option_str);
			is_end = chooseRace(option_int);
		}
	}
	cout << "�� ������� �����: " << Race << endl;
	showIncreasedArrtibutes();
	cout << "\n";
	showIncreasedSkills();
	cout << "\n";
}

void Character::setClass()
{
	string option_str;
	int option_int;
	bool is_end = false;
	while (!is_end)
	{
		cout << "�������� ����� ���������: " << endl;
		cout << " 1) ����" << endl;
		cout << " 2) ���" << endl;
		cout << " 3) ������" << endl;
		cout << " 4) - �������� ������� �� ������� - " << endl;
		cin >> option_str;
		if (!checkNumber(option_str))
		{
			cerr << "--- Invalid input!!! ---" << endl;
		}
		else
		{
			option_int = stoi(option_str);
			is_end = chooseClass(option_int);
		}
	}
	cout << "�� ������� �����: " << Class << endl;
	showIncreasedActiveSkills();
}

void Character::levelUp()
{
	for (int i = 0; i < 5; i++)
	{
		if (expiriance >= levels[i])
		{
			level++;
			cout << string(5, '*') << endl;
			cout << "������� �������!!!" << endl;
			cout << "��� �������: " << level << endl;
			if (level < 4)
			{
				cout << "\n������ �� ������ ������: " << endl;
				a_skills[level - 2].changePermition();
				cout << " - " << a_skills[level - 2].getNameOfActiveSkill() << endl;
			}
			cout << string(5, '*') << endl;
		}
	}
}

void Character::gainExp(unsigned int exp)
{
	if (exp > 5)
	{
		expiriance += (int)(levels[level - 1]/0.25);
	}
	else
	{
		expiriance += exp;
	}
	levelUp();
}

void Character::showAtributes()
{
	cout << "--- �������� ---" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << ") " << atrs[i].getNameOfAtribute() << "\t - " << atrs[i].getLevelOfAtribute() << endl;
	}
	cout << string(20, '-') << endl;
}

void Character::setAtributes()
{
	unsigned short int n = 5;
	int operation_int;
	string operation_str;
	while(n != 0)
	{
		system("cls");
		cout << string(20, '=') << endl;
		showAtributes();
		cout << string(20, '=') << endl;
		cout << "� ��� " << n << " ����� ���������" << endl;
		cout << "����� ������� �� ������ ��������?" << endl;
		cin >> operation_str;
		if (!checkNumber(operation_str))
		{
			cerr << "--- Invalid input!!! ---" << endl;
		}
		else
		{
			operation_int = stoi(operation_str);
			atrs[operation_int - 1].increaseAtribute(1);
			n--;
		}
	}
}

void Character::setHealthPoints()
{
	health_p = 10 + (5 * atrs[2].getLevelOfAtribute());
}

void Character::showCharacterSet()
{
	cout << string(6, '=') << " ��������: " << name << " " << string(6, '=') << " ��������: " << health_p << string(3, '=') << endl;
	showAtributes();
	cout << string(25, '=') << endl;
	showSkills();
	cout << string(25, '=') << endl;
}

void Character::showItems()
{
	backpack.showWeapons();
	backpack.showArmor();
	backpack.showItems();
}

void Character::setInitiative()
{
	initiative = 8 + atrs[1].getLevelOfAtribute();
}

int Character::getInitiative()
{
	return rand() % (2 + atrs[4].getLevelOfAtribute()) + initiative;
}

int Character::atack()
{
	return atack_p + rand() % (int)(atrs[0].getLevelOfAtribute() * 1.5);
}

void Character::decreaseHP(int atack_p)
{
	health_p -= atack_p;
}

int Character::getHealthPoints()
{
	return health_p;
}

string Character::getNameOfUsingWeapon()
{
	return backpack.getNameOfUsingWeapon();
}