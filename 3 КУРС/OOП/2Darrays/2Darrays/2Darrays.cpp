#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>
const int DISTRICTS = 3, MONTHS = 3;

using namespace std;

void output(float arr[DISTRICTS][MONTHS])
{
	for (int i = 0; i < DISTRICTS; i++)
	{
		cout << endl;
		for (int j = 0; j < MONTHS; j++)
		{
			cout << arr[i][j] << " ";
		}
	}
}
int main()
{
	float Sales[DISTRICTS][MONTHS] = { {1,2,3}, {4,5,6}, {7,8,9} };
	/*for (int i = 0; i < DISTRICTS; i++)
	{
		for (int j = 0; j < MONTHS; j++)
		{
			cin >> Sales[i][j];
		}
	}*/

	output(Sales);
	_getch();
    return 0;
}

