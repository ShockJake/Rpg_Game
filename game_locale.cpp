#include "game_locale.h"

bool Locale::setLocale(int n)
{
	if (n >= 2 || n < 0)
	{
		std::cout << "Invalid input" << endl;
		return false;
	}
	else if (n == Locale::RU)
	{
		texts[menu] = "����\n 1) ������ ����\n 2) �����";
		texts[input_error] = " --- ��������� ���� --- ";
		texts[write_charaters_name] = "����� ��� ���������";

		texts[strength] = "����";
		texts[perseption] = "����������";
		texts[endurance] = "������������";
		texts[wisdom] = "��������";
		texts[luck] = "�����";

		texts[small_sword] = "����� ���";
		texts[medium_sword] = "���������� ���";
		texts[long_sword] = "������� ���";
		texts[light_armor] = "������ �����";
		texts[medium_armor] = "������� �����";
		texts[heavy_armor] = "������� �����";
		texts[little_bow] = "����� ���";
		texts[long_bow] = "������� ���";

		texts[file_error] = "!!!-������-!!! - ���������� ������� ����: ";

		return true;
	}
	else if (n == Locale::EN)
	{
		texts[menu] = "Menu\n 1) Start game\n 2) Quit";
		texts[input_error] = " --- Invalid input --- ";
		texts[write_charaters_name] = "Write character's name ";

		texts[strength] = "Strength";
		texts[perseption] = "Perseption";
		texts[endurance] = "Endurance";
		texts[wisdom] = "Wisdom";
		texts[luck] = "Luck";

		texts[small_sword] = "Small sword";
		texts[medium_sword] = "Medium sword";
		texts[long_sword] = "Long sword";
		texts[light_armor] = "Light armor";
		texts[medium_armor] = "Medium armor";
		texts[heavy_armor] = "Heavy armor";
		texts[little_bow] = "Little bow";
		texts[long_bow] = "Long bow";

		texts[file_error] = "!!!-ERROR-!!! - Unable to open file: ";


		return true;
	}
}

string Locale::getText(string key)
{
	return texts[key];
}

int Locale::RU = 0;
int Locale::EN = 1;

string Locale::menu = "menu";
string Locale::file_error = "file_error";
string Locale::input_error = "input_error";
string Locale::write_charaters_name = "write_characters_name";

string Locale::strength = "strength";
string Locale::perseption = "perseption";
string Locale::endurance = "endurance";
string Locale::wisdom = "wisdom";
string Locale::luck = "luck";

string Locale::small_sword = "small_sword";
string Locale::medium_sword = "medium_sword";
string Locale::long_sword = "long_sword";
string Locale::light_armor = "light_armor ";
string Locale::medium_armor = "medium_armor";
string Locale::heavy_armor = "heavy_armor";
string Locale::little_bow = "little_bow";
string Locale::long_bow = "long_bow";

map<string, string> Locale::texts = {};
