#include "pch.h"
#include <iostream>
#include <cstdlib>

using namespace std;

class Idk
{
	char str[20];
public:
	Idk() 
	{
		for (int i = 0; i < 20; i++)
		{
			str[i] = '\0';
		}
	}
	Idk(char *str)
	{
		*this->str = *str;
	}
	void operator+=(Idk left , Idk right)
	{

	}
};

int main()
{

}