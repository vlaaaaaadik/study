#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class foo
{
	static int count;
public:
	foo()
	{
		count++;
	}
	int getcount()
	{
		return count;
	}
};

int foo::count = 0;

int main()
{
	foo f1, f2, f3;

	cout << f1.getcount() << endl;
	cout << f2.getcount() << endl;
	cout << f3.getcount() << endl;

	_getch();
    return 0;
}

