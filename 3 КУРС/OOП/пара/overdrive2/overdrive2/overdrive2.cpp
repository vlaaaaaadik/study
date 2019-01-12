#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;
class MyClass
{
public:
	MyClass(int a)
	{
		this->a = a;
	}
	friend 	ostream& operator<<(ostream &out, MyClass obj);
	friend istream& operator>>(istream &in, MyClass &obj);
private:
	int a;
};

ostream& operator<<(ostream &out,MyClass obj)
{
	out << obj.a;
	return out;
}
istream& operator>>(istream &in, MyClass &obj)
{
	in>> obj.a;
	return in;
}


int main()
{
	MyClass a(10);

	cout << "Hello World!\n" << endl;
	cout << a<<endl;
	cin >> a;
	cout << endl;
	cout << a;
	_getch();
	return 0;
}
