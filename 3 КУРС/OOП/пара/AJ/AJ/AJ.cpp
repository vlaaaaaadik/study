#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

class Letters
{
	char ch;
public:
	Letters() {}
	Letters(char ch) :ch(ch) {}
	char Getch()
	{
		return ch;
	}
};
int main()
{
	Letters l[7] = { 'a','b','c','d','e','f','g' };
	for (int i = 0; i < 7; i++)
	{
		cout << l[i].Getch()<<" ";
	}
	_getch();
    return 0;
}

