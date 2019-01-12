#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

class Cat
{
	int Lives = 9;
public:
	static void const Roar()
	{
		cout << "nyaaa ^w^" << endl;
	}

	void const GetDied()
	{
		cout << "R.I.P" << endl;
	}

	void GetDamage()
	{
		Lives--;
	}

	int Get()
	{
		return Lives;
	}
};

static class Shaurma
{
	static int Count;
	
public:
	static int Get()
	{
		return Count;
	}

	static void Roar()
	{
		cout << "(miauuuuuu) vkusnaaa" << endl;
	}
	static void inc()
	{
		Count++;
	}
};

int Shaurma::Count = 0;

static class Controller
{
public:
	static void MakeShaurma(Cat &Barsik)
	{
		Barsik.GetDamage();
		Shaurma::inc();
	}
};

static class View
{
public:
	static void Display(Cat &Barsik)
	{
		cout << "lives of cat is equals " << Barsik.Get();
		cout << endl;
		if(Barsik.Get() > 0) Barsik.Roar();
		else Barsik.GetDied();
		cout << endl;
		cout << "count of shaurma is equals " << Shaurma::Get();
		cout << endl;
		Shaurma::Roar();

	}
};

int main()
{
	const int White = system("color F0");
	Cat Barsik;
	bool Temp;

	do
	{
		Controller::MakeShaurma(Barsik);
		View::Display(Barsik);
		cout << "countinue? 1 - yeah, 0 - no" << endl;
		cin >> Temp;
		if (Barsik.Get() == 0)Temp = 0;
	} while (Temp);

	_getch();
    return 0;
}

