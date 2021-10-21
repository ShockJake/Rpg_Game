#ifndef BACKPACK_H
#define BACKPACK_H

#include "Item.h"
#include "Weapons.h"
#include "Armor.h"

const int ITEM_SLOTS = 20;
const int WEAPON_SLOTS = 5;
const int ARMOR_SLOTS = 5;

class Backpack
{
private:
	Item items[ITEM_SLOTS]
	{
		Item(), Item(), Item(), Item(),
		Item(), Item(), Item(), Item(),
		Item(), Item(), Item(), Item(),
		Item(), Item(), Item(), Item(),
		Item(), Item(), Item(), Item()
	};

	Weapon weapons[WEAPON_SLOTS]
	{
		Weapon(), Weapon(), Weapon(), Weapon(), Weapon()
	};

	Armor armors[ARMOR_SLOTS]
	{
		Armor(), Armor(), Armor(), Armor(), Armor()
	};
public:
	void setWeapon(Weapon &other_weapon);
	void setArmor(Armor &other_armor);

	int getWeaponDamage(int n);
	int getArmorDefence(int n);

	string getItemType(int n);
	string getNameOfUsingWeapon();
	string getNameOfUsingArmor();

	void showArmor();
	void showItems();
	void showWeapons();
};

#endif // !BACKPACK_H
