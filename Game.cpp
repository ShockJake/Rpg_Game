#include "Game.h"

void GameMenu()
{
    int option_int;
    string option_str;
    
    cout << "Choose language: RU(1)/EN(2)" << endl;
    while (true)
    {
        cin >> option_str;
        if (checkNumber(option_str))
        {
            option_int = stoi(option_str);
            if (option_int == 1)
            {
                setlocale(LC_ALL, "ru");
            }
            if (Locale::setLocale(option_int - 1))
            {
                break;
            }
        }
        
    }
    
    while (true)
    {
        system("cls");
        getText("Greetings.txt");

        cout << string(15, '=') << endl;
        cout << Locale::getText(Locale::menu) << endl;
        cout << string(15, '=') << endl;
        cin >> option_str;

        if (!checkNumber(option_str))
        {
           cerr << Locale::getText(Locale::input_error) << endl;
        }
        else
        {
            option_int = stoi(option_str);
            if (option_int == 1)
            {
                startGame();
            }
            else if (option_int == 2)
            {
                break;
            }
        }
    }
}

void startGame()
{
    system("cls");
    string name;
    cout << Locale::getText(Locale::write_charaters_name) << endl;
    cin >> name;
    Character newCharacter(name);
}