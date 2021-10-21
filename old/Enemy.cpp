#include "Enemy.h"
#include <string>
#include <iostream>

using namespace std;

Enemy::Enemy(string new_name, int new_atack, int new_health, string new_type)
{
    name = new_name;
    atack_p = new_atack;
    health_p = new_health;
    type = new_type;
}

int Enemy::atack()
{
    int atack_cl = rand() % 10 + 1;
    if (atack_cl >= 5)
    {
        cout << "The " << name << " atacks you with " << atack_p << " points" << endl;
        return atack_p;
    }
    else if (atack_cl < 5)
    {
        cout << "The " << name << " misses..." << endl;
        return 0;
    }
}

int Enemy::hurt(int a_p)
{
    cout << "The " << name << "got: " << a_p << " points of damage" << endl;
    health_p = health_p - a_p;
    if (health_p <= 0)
    {
        cout << "The " << name << " is dead!" << endl;
        return 0;
    }
    else if (health_p > 0)
    {
        return 1;
    }
}

int Enemy::enemy_i()
{
    int k;
    k = rand() % 10 + 2;
    return k;
}

string Enemy::get_name()
{
    return name;
}

string Enemy::get_type()
{
    return type;
}