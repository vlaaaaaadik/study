#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;
class pr2;
class pr1
{
	bool printing= true;
public:
	void set_print(bool status)
	{
		printing = status;
	}
	friend bool printUse(pr1 p1, pr2 p2);
};

class pr2
{
	bool printing= false;
public:
	void set_print(bool status)
	{
		printing = status;
	}
	friend bool printUse(pr1 p1, pr2 p2);
};

bool printUse(pr1 p1, pr2 p2)
{
	bool temp;
	if (p1.printing || p2.printing)
	{
		temp = true;
		p1.set_print(true);
		p2.set_print(true);
	}
	else
	{
		temp = false;
		p1.set_print(false);
		p2.set_print(false);
	}
	return temp;
}

int main()
{
	pr1 p1;
	pr2 p2;
	if (printUse(p1, p2))
	{
		cout << "printer is busy" << endl;
	}
	else
	{
		cout << "printer is not busy" << endl;
	}
	_getch();
    return 0;
}

