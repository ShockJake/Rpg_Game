#ifndef CLASSES_H
#define CLASSES_H
#include <iostream>
#include <string>

using namespace std;

struct Atributes
{
    int strength   = 1;
    int perseption = 1;
    int agility    = 1;
    int wisdom     = 1;
    int luck       = 1;
};

struct Active_Skill
{ 
    string name      = "NON_USED";
    string type      = "NULL";
    int atack        = 0;
    int cooldown     = 0;
    bool permition   = false;
    bool avalibility = false;
};

struct Skill
{
    bool small_Sword  = false;
    bool medium_Sword = false;
    bool big_sword    = false;
    bool light_armor  = false;
    bool medium_armor = false;
    bool heavy_armor  = false;
    bool small_bow    = false;
    bool big_bow      = false;
};

struct Item
{
    string name;
    string type;
    int n_of_item = 0;
};

struct Weapon
{
    string name;
    int dmg_points = 0;
};

struct Armor
{
    string name;
    int arm_points = 0;
};

class Character
{
public:
    Character(string new_name);
    ~Character();
    void change_atributes(int atr_num, int inc_num);
    void set_Atributes();
    void show_Atributes();
    string set_class();
    void set_skill(string class_name);
    string set_race();
    void set_char_points();
    void add_items(string item_name, string item_type, int num);
    void show_weapons();
    void change_weapon();
    void show_armor();
    void change_armor();
    int character_i();
    int atack();
    int hurt(int a_p);
private:
    Active_Skill skills[5];
    Weapon weapons[5];
    Armor armors[5];
    Skill sklls;
    string Class;
    string Race;
    string name;
    Atributes atrs;
    Item items[10];
    int level    = 0;
    int exp      = 0;
    int atack_p  = 1;
    int health_p = 15;
    int armor_p  = 0;
};



#endif /*CLASSES_H*/