#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

class student
{
	
};

int main()
{
	human *vasya = new human[3];
	vasya->age=18;
	(1+vasya)->age = 19;
	(2+vasya)->age = 20;
	for (int i = 0; i <= 2; i++)
	{
		cout << (vasya + i)->age;
	}

	delete[] vasya;
	//cout << vasya->age;
	/*
	human petya[4] =
	{
		human(4),
		human(5),
		human(6),
		human(7)
	};

	human *p ;
	p = &petya[3];
	for (int i = 0; i <4; i++)
	{
		cout << p->age << endl;
		p--;
	}*/
	_getch();
	return 0;
}

