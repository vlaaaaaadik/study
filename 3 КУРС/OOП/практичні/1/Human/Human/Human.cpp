#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

class Human
{
	int Age = 17,
		Height = 167;

public:
	int getA()
	{
		return Age;
	}

	int getH()
	{
		return Height;
	}

	void SayHello()
	{
		cout << "hello my friend" << endl;
	}
	
};

int main()
{
	const int White = system("color F0");
	Human Vityok;

	cout << "age of this Human is = " << Vityok.getA() << endl;
	cout << "Height of this Human is = " << Vityok.getH() << endl;
	cout << "He says ";
	Vityok.SayHello();

	_getch();
    return 0;
}

