#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

using namespace std;

class Item
{
private:
	string name;
	string type;
	unsigned short int number;
public:
	Item();
	Item(string name, string type);

	void changeNumber(unsigned short int n);
	void operator=(const Item &other_item);

	void setName(string name);
	void setType(string type);

	string getName();
	string getType();
};

#endif // !ITEM_H

