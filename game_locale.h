#ifndef GAME_LOCALE_H
#include <iostream>
#include <string>
#include <map>
using namespace std;

class Locale
{
public:
	static int RU;
	static int EN;

	static bool setLocale(int n);
	static string getText(string key);


	static string menu;
	static string file_error;
	static string input_error;
	static string write_charaters_name;

	static string strength;
	static string perseption;
	static string endurance;
	static string wisdom;
	static string luck;
	
	static string small_sword;
	static string medium_sword;
	static string long_sword;
	static string light_armor;
	static string medium_armor;
	static string heavy_armor;
	static string little_bow;
	static string long_bow;
private:
	static map<string, string> texts;

};

#define GAME_LOCALE_H
#endif // !GAME_LOCALE_H

