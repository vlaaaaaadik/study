#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

class Matches
{
	static int Count;
public:
	
	static int getC()
	{
		return Count;
	}

	void Fire() 
	{
		cout << "pshhhhhhhhhh im on fire" << endl;
	}

	Matches()
	{
		Count++;
	}
};

int Matches::Count = 0;

int main()
{
	const int White = system("color F0");
	Matches Pavel;
	cout << "Count of matches = " << Pavel.getC() << endl;
	Matches Vasya;
	cout << "Count of matches = " << Vasya.getC() << endl;
	Vasya.Fire();
	_getch();
    return 0;
}

