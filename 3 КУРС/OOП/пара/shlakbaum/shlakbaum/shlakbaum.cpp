#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
const char ESC = 27;

class tollBooth
{
public:
	tollBooth() :passed(0), payed(0) {}
	void AddPassed()
	{
		passed++;
	}

	void AddPayed()
	{
		payed+=0.5;
	}

	int GetPassed()
	{
		return passed;
	}
	
	double GetPayed()
	{
		return payed;
	}
private:
	unsigned int passed;
	double payed;
};

static class Controller
{
public:
	const static void PayingCar(tollBooth &Palka)
	{
		Palka.AddPassed();
		Palka.AddPayed();
	}
	
	const static void NoPayingCar(tollBooth &Palka)
	{
		Palka.AddPassed();
	}
};

static class View
{
public:
	const static void Display(tollBooth Palka)
	{
		cout << "\n passed = " << Palka.GetPassed() << endl;
		cout << "\n payed = " << Palka.GetPayed() << endl;
	}
};

int main()
{
	const int White = system("color F0");
	tollBooth toll;
	char a;
	cout << "enter 1 when payed or 0 when not payed "<<endl;
	do
	{
		a = _getche();
		if (a == '1')
		{
			Controller::PayingCar(toll);
		}
		else if (a == '0')
		{
			Controller::NoPayingCar(toll);
		}
	} while (a != ESC);
	cout << endl;
	View::Display(toll);
	_getch();
	_getch();
    return 0;
}

