#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void get_text(const char file_name_char[50]);
void create_character();
bool check_number(string str);
int fight(Enemy& enemy, Character& character);
#endif /*FUNCTIONS_H*/