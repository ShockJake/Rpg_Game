#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

#include "Enemy.h"
#include "functions.h"
#include "Character.h"

void GameMenu();
void startGame();
void characterMenu(Character &char1);
void Fight(Character &char1, Enemy &enemy);

Enemy enemy1
{
    "Rat", 15, 2, 1, 4
};
#endif // !GAME_H
