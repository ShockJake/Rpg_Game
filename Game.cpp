#include "Game.h"



void GameMenu()
{
	int option_int;
	string option_str;

	while (true)
	{
		system("cls");
		getText("Greetings.txt");

		cout << string(15, '=')  << endl;
		cout << " ����: "		 << endl;
		cout << "1) ������ ����" << endl;
		cout << "2) ����� "		 << endl;
		cout << string(15, '=')	 << endl;
		cin  >> option_str;

		if (!checkNumber(option_str))
		{
			cerr << " --- Invalid input --- " << endl;
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
	cout << "������� ��� ������ ���������: ";
	cin >> name;
	Character newCharacter(name);
    characterMenu(newCharacter);
    Fight(newCharacter, enemy1);
}

void characterMenu(Character& char1)
{
    string option_str;
    int    option_int;

    while (true)
    {
        system("cls");

        cout << "�������� ��������: " << endl;
        cout << "1) ���������� ���������" << endl;
        cout << "2) ���������� ���� ���������" << endl;
        cout << "3) �����" << endl;
        cin >> option_str;

        if (!checkNumber(option_str))
        {
            cerr << " --- Invalid input ---" << endl;
        }
        else
        {
            option_int = stoi(option_str);

            if (option_int == 1)
            {
                system("cls");
                char1.showItems();
                system("pause");
            }
            else if (option_int == 2)
            {
                system("cls");
                char1.showCharacterSet();
                system("pause");
            }
            else if (option_int == 3)
            {
                break;
            }
        }
    }
}

void Fight(Character& char1, Enemy& enemy)
{
    int character_initiative_points = char1.getInitiative();
    int enemy_initiative_points = enemy.getInitiative();

    cout << "��� ������� ����������: " << character_initiative_points << "\t������� ���������� �����: " << enemy_initiative_points << endl;

    while (true)
    {
        int character_atack_points = char1.atack();
        int enemy_atack_points = enemy.getAtack();
        
        if (character_initiative_points >= enemy_initiative_points)
        {
            cout << "�� �������� ������..." << endl;
            
            cout << string(20, '=') << endl;
            
            enemy.decreaseHP(character_atack_points);
            cout << "��������� " << char1.getNameOfUsingWeapon() << " �� �������: " << character_atack_points << " �����" << endl;
            
            cout << string(20, '=') << endl;
            
            if (enemy.getHealth() <= 0)
            {
                cout << enemy.getName() << " �������... " << endl;
                char1.gainExp(enemy.getLevel());
                break;
            }

            cout << string(20, '=') << endl;
            
            char1.decreaseHP(enemy_atack_points);
            cout << enemy.getName() << " ������� ����: " << enemy_atack_points << endl;
            
            cout << string(20, '=') << endl;

            if (char1.getHealthPoints() <= 0)
            {
                cout << "!*!*!*!*!*!*!" << endl;
                
                cout << "�� �������..." << endl;

                cout << "!*!*!*!*!*!*!" << endl;
                break;
            }
        }
        if (enemy_initiative_points > character_atack_points)
        {
            cout << "���� \"" << enemy.getName() << "\" ������� ������..." << endl;
            
            cout << string(20, '=') << endl;

            char1.decreaseHP(enemy_atack_points);
            cout << enemy.getName() << " ������� ����: " << enemy_atack_points << endl;

            cout << string(20, '=') << endl;

            if (char1.getHealthPoints() <= 0)
            {
                cout << "!*!*!*!*!*!*!" << endl;

                cout << "�� �������..." << endl;

                cout << "!*!*!*!*!*!*!" << endl;
                break;
            }

            cout << string(20, '=') << endl;

            enemy.decreaseHP(character_atack_points);
            cout << "��������� " << char1.getNameOfUsingWeapon() << " �� �������: " << character_atack_points << " �����" << endl;

            cout << string(20, '=') << endl;

            if (enemy.getHealth() <= 0)
            {
                cout << enemy.getName() << " �������... " << endl;
                char1.gainExp(enemy.getLevel());
                break;
            }

            system("pause");
        }
    }
}