#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

class StatControl;
class HeroStats
{
private:
	short unsigned int hp = 100;
	int attak = 5;
	float attakSpeed = 1.00;
	float moveSpeed = 1.00;
public:
	void OutputStats()
	{
		cout << "hp = " << hp << endl
			<< "attak = " << attak << endl
			<< "attak speed " << attakSpeed << endl
			<< "move speed = " << moveSpeed << endl;
		cout << endl;
	}
	friend StatControl;
};

static class StatControl
{
public:
	static void levelUp(HeroStats &hero)
	{
		hero.attak += 5;
		hero.hp += 10;
	}

	static void SlowingDown(HeroStats &hero)
	{
		hero.moveSpeed = 0.6;
	}

	static void SpeedUp(HeroStats &hero)
	{
		if (hero.moveSpeed > 1.00) hero.attakSpeed += 0.2;
		hero.moveSpeed += 0.4;
	}

	static void RefreshSpeed(HeroStats hero)
	{
		hero.attakSpeed = 1.00;
		hero.moveSpeed = 1.00;
	}
};
int main()
{
	const int WHITE = system("color F0");
	HeroStats hero;

	hero.OutputStats();

	StatControl::levelUp(hero);
	hero.OutputStats();

	StatControl::SlowingDown(hero);
	hero.OutputStats();

	StatControl::RefreshSpeed(hero);
	_getch();
	return 0;
}