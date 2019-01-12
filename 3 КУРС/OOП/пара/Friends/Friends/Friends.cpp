#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

class MyClass
{
public:
	MyClass(int a, int b)
	{
		this->a = a;
		this->b = b;
	};
	friend int sum(MyClass obj);
	friend bool isfactor(MyClass ob);
private:
	int a, b;
};

bool isfactor(MyClass ob) 
{
	if (ob.a%ob.b) return true;
	else return false;
}

int sum(MyClass obj)
{
	return obj.a + obj.b;
}

int main()
{
	MyClass my(5,4);
	cout << " sum of a and b of obj \"my\" = " << sum(my) << endl;
	cout.setf(ios::boolalpha);
	cout<< "a / b without remaining is " << isfactor(my) << endl;
	_getch();
    return 0;
}

