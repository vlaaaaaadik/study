#include "pch.h"
#include <iostream>

using namespace std;
class A
{
	int i;

public:
	int geti()
	{
		return i;
	}

	void seti(int i)
	{
		this->i = i;
	}
};

class B : protected A
{
	int x;
public:
	void setx(int x) { this->x = x;}
	int getx()
	{
		return x;
	}
};

int main()
{
	B b;
	return 0;
}