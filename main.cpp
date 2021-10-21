#include <iostream>
#include <cstdlib>
#include <string>

#include "Game.h"

using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    GameMenu();
    system("pause");
    return 0;
}

