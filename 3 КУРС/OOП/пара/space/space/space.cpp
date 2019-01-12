#include "pch.h"
#include <iostream>

using namespace std;

class SomeClass
{
	int *ptr;
public:

	SomeClass()
	{
		cout << "\nзвичайний конструктор\n";
	}
	SomeClass(const SomeClass &obj)
	{
		cout << "\nКонструктор копій\n";
	}
	~SomeClass()
	{
		cout << "\nДестркуктор\n";
	}
};
void funcShow(SomeClass object)
{
	cout << "\nФункция принимає об'єкт, як параметр\n";
}

void show(SomeClass &object)
{
	cout << "\nФункция принимає адресу об'єкта, як параметр\n";
}

SomeClass funcReturnObject()
{
	SomeClass object;
	cout << "\nФункція повертає об'єкт\n";
	return object;
}

int main()
{
	const int white = system("color F0");
	setlocale(LC_ALL, "rus");

	cout << "1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	SomeClass obj1;

	cout << "2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	funcShow(obj1);
	cout << "3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	show(obj1);

	cout << "4 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	funcReturnObject();

	cout << "5 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	SomeClass obj2 = obj1; 

}