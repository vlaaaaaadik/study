#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>
const int SIZE = 3;
using namespace std;

struct student
{
	int age;
	string name;
	int weight;
};

int main()
{
	student programers[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cout << endl;
		cout << "enter age: ";
		cin >> programers[i].age;
		cout << "enter name: ";
		programers[i].name = _getch();
		cout << "enter weight: ";
		cin >> programers[i].weight;
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << "name is :" << programers[i].name;
		cout << endl;
	}
    return 0;
}

