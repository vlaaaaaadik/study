#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

class Ivan
{
	class Hto
	{
		int a;
		Hto(int a) { this->a = a; };
	public:
	};
public:
	class Vityok;
	void fun(Ivan::Vityok obj)
	{
		cout << obj.a;
	}
	class Vityok
	{
		int a;
	public:

		Vityok(int a) { this->a = a; };
		friend void Ivan::fun(Ivan::Vityok obj);
	};
	Ivan();	
private:

};

int main()
{
	Ivan i;
	Ivan::Vityok v(13);

	i.fun(v);
	_getch();
}
