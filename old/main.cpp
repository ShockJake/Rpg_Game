#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "classes.h"
#include "functions.h"
#include "Enemy.h"

using namespace std;

int main() {
    srand(time(NULL));
    get_text("Greetings.txt");
    create_character();

    system("pause");
    return 0;
}