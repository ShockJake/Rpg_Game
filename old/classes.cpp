#include <iostream>
#include <string>
#include "functions.h"
#include "classes.h"
#include <time.h>
#include <cstdlib>

using namespace std;

void Character::change_atributes(int atr_num, int inc_num)
{
    switch (atr_num)
    {
    case 1:
        atrs.strength = atrs.strength + inc_num;
        break;
    case 2:
        atrs.perseption = atrs.perseption + inc_num;
        break;
    case 3:
        atrs.agility = atrs.agility + inc_num; 
        break;
    case 4:
        atrs.wisdom = atrs.wisdom + inc_num;
        break;
    case 5:
        atrs.luck = atrs.luck + inc_num;
        break;
    default:
        break;
    }
}

void Character::set_skill(string class_name)
{
    if(class_name == "Warior")
    {    
        skills[0].name      = "Heavy Atack";
        skills[0].atack     = 3;
        skills[0].cooldown  = 1;
        skills[0].permition = false;

        skills[1].name      = "Blade Tornado";
        skills[1].atack     = 4;
        skills[1].cooldown  = 2;
        skills[1].permition = false;

        skills[2].name      = "Rage";
        skills[2].atack     = 0;
        skills[2].cooldown  = 4;
        skills[2].permition = false;

        skills[3].name = "NON-USED";
        skills[4].name = "NON-USED";
    }
    else if(class_name == "Rogue")
    {
        skills[0].name      = "Scope Shot";
        skills[0].atack     = 3;
        skills[0].cooldown  = 1;
        skills[0].permition = false;

        skills[1].name      = "FireBombs";
        skills[1].atack     = 4;
        skills[1].cooldown  = 1;
        skills[1].permition = false;

        skills[2].name      = "Smoke";
        skills[2].atack     = 0;
        skills[2].cooldown  = 3;
        skills[2].permition = false;

        skills[3].name = "NON-USED";
        skills[4].name = "NON-USED";
    }
    else if(class_name == "Mage")
    {
        skills[0].name      = "Fireball";
        skills[0].atack     = 3;
        skills[0].cooldown  = 1;
        skills[0].permition = false;

        skills[1].name      = "Heal";
        skills[1].atack     = 3;
        skills[1].cooldown  = 2;
        skills[1].permition = false;

        skills[2].name      = "Freeze peaks";
        skills[2].atack     = 4;
        skills[2].cooldown  = 2;
        skills[2].permition = false;

        skills[3].name      = "Magick Armor";
        skills[3].atack     = 6;
        skills[3].cooldown  = 4;
        skills[3].permition = false;

        skills[4].name = "NON-USED";
    }
}

string Character::set_class()
{

    string option_str;
    int option;
    cout << "Choose your class: " << endl;
    cout << " 1 - Warrior\n 2 - Rogue\n 3 - Mage" << endl;
    cin  >> option_str;
    
    if(check_number(option_str)==true)
    {
        option = stoi(option_str);

        switch (option)
        {
        case 1:
            cout << "You have chosed a class \"Warior\"" << endl;
            cout << "You got a:" << "\n" 
                 << "    - Strength +1\n" << "   - Agility +1\n" << endl; 
            change_atributes(1, 1);
            change_atributes(3, 1);
            return "Warior";
        case 2:
            cout << "You have choosed a class \"Rogue\"" << endl;
            cout << "You got a:" << "\n"
                 << "    - Perseption +1\n" << "    - Agility +1\n"<< endl;
            change_atributes(2, 1);
            change_atributes(3, 1);
            return "Rogue";
        case 3:
            cout << "You have choosed a class \"Rogue\"" << endl;
            cout << "You got a:" << "\n"
                 << "    - Agility +1\n" << "    - Wisdom +1\n"<< endl;
            change_atributes(3, 1);
            change_atributes(4, 1);
            return "Mage";
        default:
            cout << "No class with this number, try again!" << endl;
            set_class();
        }
    }
}

void Character::set_char_points()
{
    health_p = health_p + (atrs.strength*5);
    atack_p = atack_p + atrs.strength;
}

void Character::add_items(string item_name, string item_type, int num)
{
    for(int i=0; i < 9; i++){
        if(items[i].name=="NON-USED"){
            items[i].name = item_name;
            items[i].type = item_type;
            items[i].n_of_item = num;
            break;
        }
        else if(items[i].name == item_name){
            items[i].n_of_item += num;
            break;
        }
    }
}

void Character::change_weapon()
{
    show_weapons();
    cout << "Which weapon do you want to equip?" << endl;
    int option;
    Weapon tmp;
    string option_str;
    cin >> option_str;
    
    if(check_number(option_str) == true){
        option = stoi(option_str);
        switch (option)
        {
        case 1:
            cout << "This weapon is already equiped!" << endl;
            break;
        case 2:
            if(weapons[1].name != "NON-USED"){
                tmp.name = weapons[0].name;
                tmp.dmg_points = weapons[0].dmg_points;

                weapons[0].name = weapons[1].name;
                weapons[0].dmg_points = weapons[1].dmg_points;

                weapons[1].name = tmp.name;
                weapons[1].dmg_points = tmp.dmg_points;
                        
                show_weapons();

                break;
            }
            else if(weapons[1].name == "NON-USED")
            {
                cout << "There is no weapon to equip" << endl;
                break;
            }
        case 3:
            if(weapons[2].name != "NON-USED")
            {
                tmp.name = weapons[0].name;
                tmp.dmg_points = weapons[0].dmg_points;

                weapons[0].name = weapons[2].name;
                weapons[0].dmg_points = weapons[2].dmg_points;

                weapons[2].name = tmp.name;
                weapons[2].dmg_points = tmp.dmg_points;

                show_weapons();
                        
                        break;
            }
            else if(weapons[2].name == "NON-USED"){
                cout << "There is no weapon to equip" << endl;
                break;
            }
        case 4:
            if(weapons[3].name != "NON-USED"){
                tmp.name = weapons[0].name;
                tmp.dmg_points = weapons[0].dmg_points;

                weapons[0].name = weapons[3].name;
                weapons[0].dmg_points = weapons[3].dmg_points;

                weapons[3].name = tmp.name;
                weapons[3].dmg_points = tmp.dmg_points;

                show_weapons();
                        
                break;
            }
            else if(weapons[3].name == "NON-USED"){
                cout << "There is no weapon to equip" << endl;
                break;
            }
        case 5:
            if(weapons[4].name != "NON-USED"){
                tmp.name = weapons[0].name;
                tmp.dmg_points = weapons[0].dmg_points;

                weapons[0].name = weapons[4].name;
                weapons[0].dmg_points = weapons[4].dmg_points;

                weapons[4].name = tmp.name;
                weapons[4].dmg_points = tmp.dmg_points;

                show_weapons();
                        
                break;
            }
            else if(weapons[4].name == "NON-USED"){
                cout << "There is no weapon to equip" << endl;
                break;
            }
        default:
            cout << "There is no such weapon in this number, try again!" << endl;
            break;
        }    
    }
    else if(check_number(option_str) == false)
    {
        cout << "You didn\'t write a number, try again!" << endl;
    }
}

void Character::show_weapons()
{
    cout << "Your weapons: " << endl;
    cout << '|' << '0' << '| ' << weapons[0].name << '| ' << weapons[0].dmg_points << '| ' << "DMG" << "   *Equiped*" << endl;
    
    for(int i=1; i<5; i++)
    {
        if(weapons[i].name != "NON-USED")
        {
            cout << '|' << i << '| ' << weapons[i].name << '|' << weapons[i].dmg_points << '| ' << "DMG" << endl;
        }
        else if(weapons[i].name == "NON-USED")
        {
            cout << '|' << i << '| ' << "--none--" << endl;
        }
    }
}

void Character::change_armor()
{
    show_armor();
    cout << "Which armor do you want to equip?" << endl;
    int option;
    Armor tmp;
    string option_str;
    cin >> option_str;
    if(check_number(option_str) == true)
    {
        option = stoi(option_str);
        switch (option)
        {
        case 1:
            cout << "This weapon is already equiped!" << endl;
            break;
        case 2:
            if(armors[1].name != "NON-USED")
            {
                tmp.name = armors[0].name;
                tmp.arm_points = armors[0].arm_points;

                armors[0].name = armors[1].name;
                armors[0].arm_points = armors[1].arm_points;

                armors[1].name = tmp.name;
                armors[1].arm_points = tmp.arm_points;
                        
                show_armor();

                break;
            }
            else if(armors[1].name == "NON-USED")
            {
                cout << "There is no weapon to equip" << endl;
                break;
            }
        case 3:
            if(armors[2].name != "NON-USED")
            {
                tmp.name = armors[0].name;
                tmp.arm_points = armors[0].arm_points;

                armors[0].name = armors[2].name;
                armors[0].arm_points = armors[2].arm_points;

                armors[2].name = tmp.name;
                armors[2].arm_points = tmp.arm_points;

                show_armor();
                        
                break;
            }
            else if(armors[2].name == "NON-USED")
            {
                cout << "There is no weapon to equip" << endl;
                break;
            }
        case 4:
            if(armors[3].name != "NON-USED")
            {
                tmp.name = armors[0].name;
                tmp.arm_points = armors[0].arm_points;

                armors[0].name = armors[3].name;
                armors[0].arm_points = armors[3].arm_points;

                armors[3].name = tmp.name;
                armors[3].arm_points = tmp.arm_points;

                show_armor();
                        
                break;
            }
            else if(armors[3].name == "NON-USED")
            {
                cout << "There is no weapon to equip" << endl;
                break;
            }
        case 5:
            if(armors[4].name != "NON-USED")
            {
                tmp.name = armors[0].name;
                tmp.arm_points = armors[0].arm_points;

                armors[0].name = armors[4].name;
                armors[0].arm_points = armors[4].arm_points;

                armors[4].name = tmp.name;
                armors[4].arm_points = tmp.arm_points;

                show_armor();
                        
                break;
            }
            else if(armors[4].name == "NON-USED")
            {
                cout << "There is no weapon to equip" << endl;
                break;
            }
        default:
            cout << "There is no such weapon in this number, try again!" << endl;
            break;
        }    
    }
    else if(check_number(option_str) == false)
    {
        cout << "You didn\'t write a number, try again!" << endl;
    }
}

void Character::show_armor()
{
    cout << "Your armors: " << endl;
    cout << '|' << '0' << '| ' << armors[0].name << '| ' << armors[0].arm_points << '| ' << "ARM" << "     *Eqiped*" << endl;
    
    for(int i=1; i<5; i++)
    {
        if(armors[i].name != "NON-USED")
        {
            cout << '|' << i << '| ' << armors[i].name << '|' << armors[i].arm_points << '|' << "ARM" << endl;
        }
        else if(armors[i].name == "NON-USED")
        {
            cout << '|' << i << '| ' << "--none--" << endl;
        }
    }
}

Character::Character(string name)
{
    this->name = name;
    Race = set_race();
    set_Atributes();
    Class = set_class();
    set_skill(Class);
    set_char_points();
}

Character::~Character(){}

string Character::set_race()
{
    string option_str;
    int option;

    cout << "Choose your race:\n" << "  - Human (1)\n" << "    - Elf (2)\n" << "    - Dwarf (3)" << endl;
    cin >> option_str;
    if(check_number(option_str) == true)
    {
        option = stoi(option_str);
        switch (option)
        {
        case 1:
            cout << "You have choosen a Human race." << endl;
            cout << "You got:\n" << "   - Agility +1\n" << "    - Luck +1" << endl;
            cout << "Human skills: \n" << "    - Small sword\n" << "    - Medium sword\n" << "    - Light armor\n"
            << "    - Medium armor\n" << "    - Small bow\n" << "   - Big bow" << endl;
                    
            change_atributes(3, 1);
            change_atributes(5, 1);

            sklls.small_Sword = true;
            sklls.medium_Sword = true;
            sklls.light_armor = true;
            sklls.medium_armor = true;
            sklls.small_bow = true;
            sklls.big_bow = true;
                    
            break;
                
        case 2:
            cout << "You have choosen a Elf race." << endl;
            cout << "You got:\n" << "   - Perseption +1\n" << "    - Wisdom +1" << endl;
            cout << "Elf skills: \n" << "   - Small sword\n" << "   - Light armor" << "    - Small bow" << endl;

            change_atributes(2, 1);
            change_atributes(4, 1);

            sklls.small_Sword = true;
            sklls.light_armor = true;
            sklls.small_bow = true;

            break;

        case 3:
            cout << "You have choosen a Dwarf race." << endl;
            cout << "You got:\n" << "   - Strength +1\n" << "   - Agility +1" << endl;
            cout << "Dwarf skills: \n" << "    - Small/Medium/Big sword\n" << "    - Light/Medium/Heavy Armor\n"
                 << "Small/Big Bow" << endl;

            change_atributes(1, 1);
            change_atributes(3, 1);

            sklls.small_Sword = true;
            sklls.medium_Sword = true;
            sklls.big_sword = true;
            sklls.light_armor = true;
            sklls.medium_armor = true;
            sklls.heavy_armor = true;
            sklls.small_bow = true;
            sklls.big_bow = true;

            break;
            
            default:

                cout << "No race with this number, try again!" << endl;
                set_race();
                    
                break;
        }
    } 
}

void Character::show_Atributes()
{
    cout << "\n\nThere are your atributes: " << endl;
    cout << " 1 - Strength: " << atrs.strength << '\n' << " 2 - Perseption: " << atrs.perseption
         << '\n' << " 3 - Agility: " << atrs.agility << '\n' << " 4 - Wisdom: " << atrs.wisdom << '\n'
         << " 5 - Luck: " << atrs.luck << endl; 
}

void Character::set_Atributes()
{

    int n = 3, option;
    string option_str;
    cout << "You have -" << n << "- points of atributes" << endl;
    show_Atributes();
            
    while(n>0)
    {
        cout << "\n\nChoose the atribute, you want to incrase:" << endl;
        cin  >> option_str;
        if(check_number(option_str)==true)
        {

            option = stoi(option_str);

            switch (option)
            {
            case 1:
                atrs.strength++;
                n--;
                break;
            case 2:
                atrs.perseption++;
                n--;
                break;
            case 3:
                atrs.agility++;
                n--;
                break;
            case 4:
                atrs.wisdom++;
                n--;
                break;
            case 5:
                atrs.luck++;
                n--;
                break;
            default:
                cout << "-!!!- There is no such number of atribute, try again! -!!!-" << endl;
                break;
            }
        } else if(check_number(option_str)==false)
        {
            cout << "\n\nYou didn't write a number, try again!"<< endl;
        }
        if(n == 0)
        {
            cout << "/\\ You have spent all points of atributes. /\\" << endl;
            cout << "Now your atributes are: " << endl;
            show_Atributes();
        }
    }
}

int Character::atack()
{
    int atack_cl = rand() % + atrs.luck;
    if(atack_cl >= 5)
    {
        cout << "You atack with " << atack_p << " points" << endl;
        return atack_p;
    }
    else if(atack_cl < 5)
    {
        cout << "You missed..." << endl;
        return 0;
    }
}

int Character::hurt(int a_p)
{
    cout << "You got a: " << a_p << " points of damage" << endl;
    health_p -= a_p;
    if(health_p > 0)
    {
        return 1;
    }
    else if(health_p <= 0)
    {
        cout << "You died!" << endl;
        return 0;
    }
}

int Character::character_i()
{
    int k;
    k = rand() % 10 + (2*atrs.agility);
    return k;
}



