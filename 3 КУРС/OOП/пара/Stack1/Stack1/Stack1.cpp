#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

class Stack
{
	char stck[5];
	int tos;
public:
	Stack() : tos(0) {};
	//void init();
	void push(char ch);
	char pop();
	~Stack() {};
};

/*void Stack::init()
{
	tos = 0;
}*/

void Stack::push(char ch)
{
	if (tos == 5)
	{
		cout << "stack is full";
		return;
	}
	stck[tos] = ch;
	tos++;
}

char Stack::pop()
{
	if (tos == 0)
	{
		cout << "stack is empty";
		return -1;
	}
	tos--;
	return stck[tos];
}

int main()
{
	char a;
	Stack obj1;
	//obj1.init();
	cout << "enter elements of stack" << endl;
	for (int i = 0; i < 5; i++) 
	{
		cin >> a;
		obj1.push(a);
	}
	cout << "pop out" << endl;
	for (int i = 0; i<5; i++) cout << obj1.pop() << endl;
	_getch();
    return 0;
}