#include "pch.h"
#include <iostream>

using namespace std;

int boo()
{
	return 7;
}

int foo()
{
	return 3;
}

int main()
{
	int (*ptrFun)();	//вказівник на функцію
	ptrFun = boo;
	cout << ptrFun;
	return 0;
}
