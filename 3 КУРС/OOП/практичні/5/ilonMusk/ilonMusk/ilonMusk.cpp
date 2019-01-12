#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Auto
{
	friend void drive(Auto &);
	friend void setPrice(Auto &, int price);
public:
	Auto(string autoName, int autoPrice)
	{
		name = autoName;
		price = autoPrice;
	}
	string getName() { return name; }
	int getPrice() { return price; }

private:
	string name;
	int price;
};

void drive(Auto &a)
{
	cout << a.name << " is driven" << endl;
}
void setPrice(Auto &a, int price)
{
	if (price > 0)
		a.price = price;
}

int main()
{
	const int White = system("color F0");
	Auto tesla("Tesla", 5000);
	drive(tesla);
	cout << tesla.getName() << " : " << tesla.getPrice() << endl;
	setPrice(tesla, 8000);
	cout << tesla.getName() << " : " << tesla.getPrice() << endl;
	_getch();
	return 0;
}