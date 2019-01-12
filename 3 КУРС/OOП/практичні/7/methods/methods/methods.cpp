#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class Hero;
class Armour;
Hero operator+(Hero &h, Armour &arm);

class Armour
{
	string name;
	int stats;
public:
	friend Hero operator+(Hero &h, Armour &arm);
	friend Hero operator-(Hero &h, Armour &arm);
	Armour() :name("NoN"), stats(0) {}
	Armour(string name, int stats)
	{
		this->name = name;
		this->stats = stats;
	}
};

class Hero
{
	string name;
	int hp;
	int armour;
public:
	Hero() :name("Gervant from Ribliya"),hp(100), armour(0) {}
	void info()
	{
		cout << name.data() << endl
			<<"hp = " << hp << endl
			<< "armour = " << armour << endl;;
	}
	friend Hero operator+(Hero &h, Armour &arm);
	friend Hero operator-(Hero &h, Armour &arm);
};

Hero operator+(Hero &h,Armour &arm)
{
	h.armour += arm.stats;
	h.name =h.name + " "+arm.name;
	return h;
}

Hero operator-(Hero &h, Armour &arm)
{
	h.armour -= arm.stats;
	h.name.erase(h.name.find(arm.name), arm.name.length());
	return h;
}

int main()
{
	const int notUsed = system("color F0");
	Hero Gervant;
	Armour helmet(string("Helmet of Sacrefice"),500), 
		   bracer(string("Bracer of Strength"), 250);
	Gervant.info();
	Gervant + helmet;
	Gervant.info();
	Gervant - helmet;
	Gervant.info();
	_getch();
	return 0;
}