#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

class niceClass
{
	int a;
public:
	void set_a(int num) { a = num; }
	int get_a() { return a; }
};

class BetterClass
{
	int b;
public:
	void set_a(int num) { b = num; }
	int get_a() { return b; }

};

int main()
{
	niceClass objectWithA;
	BetterClass objectWithB ;

	objectWithA.set_a(10);
	objectWithB.set_a(5);
	cout <<" a = "<< objectWithA.get_a() << endl;
	cout <<" b = " << objectWithB.get_a() << endl;
	objectWithA.set_a(objectWithB.get_a());
	cout << " a = " << objectWithA.get_a() << endl;
	cout << " b = " << objectWithB.get_a() << endl;
	_getch();
    return 0;
}