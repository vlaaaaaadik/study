#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <Windows.h>
using namespace std;
class Hero
{
	int attak = 20;
public:
	int hp = 100;
	int getAtk()
	{
		return attak;
	}

	int getHp()
	{
		return hp;
	}

	void getDmg()
	{
		cout << "oiii" << endl;
	}

	void Die()
	{
		if (this->hp <= 0)cout << "oh no, monsters killed me. RIP" << endl;
	}
};

class Monster
{
	int hp = 100;
	int attak = 20;
public:
	int getAtk()
	{
		return attak;
	}

	int getHp()
	{
		return hp;
	}

	void toAttak(Hero &obj)
	{
		obj.hp -= this->attak;
	}
};

int main()
{
	Hero Gervant;
	Monster *goblins = new Monster[5];

	for (int i = 0; i < 5; i++)
	{
		(goblins + i)->toAttak(Gervant);
		Gervant.getDmg();
		Sleep(1000);
	}
	Gervant.Die();
	_getch();
	return 0;
}