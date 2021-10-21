#include "Backpack.h"

void Backpack::showWeapons()
{
	for (int i = 0; i < WEAPON_SLOTS; i++)
	{
		if (weapons[i].getName() != "NON_USED")
		{
			cout << i + 1 << ") " << weapons[i].getName() << " - " << weapons[i].getDamage() << " очков урона" << endl;
		}
	}
}

void Backpack::showArmor()
{
	for (int i = 0; i < ARMOR_SLOTS; i++)
	{
		if (armors[i].getName() != "NON_USED")
		{
			cout << i + 1 << ") " << armors[i].getName() << " - " << armors[i].getDefence() << " очков защиты" << endl;
		}
	}
}

void Backpack::showItems()
{
	for (int i = 0; i < ITEM_SLOTS; i++)
	{
		if (items[i].getName() != "NON_USED")
		{
			cout << i + 1 << ") " << items[i].getName() << endl;
		}
	}
}

void Backpack::setWeapon(Weapon &other_weapon)
{
	weapons[0] = other_weapon;
}

int Backpack::getWeaponDamage(int n)
{
	return weapons[n - 1].getDamage();
}

void Backpack::setArmor(Armor& other_armor)
{
	armors[0] = other_armor;
}

int Backpack::getArmorDefence(int n)
{
	return armors[n - 1].getDefence();
}

string Backpack::getItemType(int n)
{
	return items[n - 1].getType();
}

string Backpack::getNameOfUsingWeapon()
{
	return weapons[0].getName();
}

string Backpack::getNameOfUsingArmor()
{
	return armors[0].getName();
}