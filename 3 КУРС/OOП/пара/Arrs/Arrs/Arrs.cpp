#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
	int Arr[12]{ 31,28,31,30,31,30,31,31,30,31,30,31 },
		Data = 0, Month = 0;
	cin >> Data
		>> Month;
	int res=0;
	for (int i = 0; i < 12; i++)
	{
		
		if ( i+1==Month )
		{
			res += Data;
			break; break;
		}
		res += Arr[i];
		cout << res << endl;
	}
	cout << res;
	_getch();
    return 0;
}

