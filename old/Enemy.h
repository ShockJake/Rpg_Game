#ifndef ENEMY_H
#define ENEMY_H
#include <string>
using namespace std;

class Enemy
{
public:
    Enemy(string new_name, int new_atack, int new_health, string new_type);
    int atack();
    int enemy_i();
    int hurt(int a_p);
    string get_name();
    string get_type();
private:
    string type;
    string name;
    int atack_p;
    int health_p;
};



#endif // !ENEMY_H


