#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main()
{
	system("chcp 1251 > nul");
	const int MAX = 20;
	char str[20];

	/*cout << "\nвведіть рядок: ";
	cin >> str;
	cout << "ви ввели: " << str << endl;*/

	char str1[] = "падав сніг на поріг...";
	cout << str1;
	char str2[MAX];
	cout << "\nвведіть рядок: ";
	cin.get(str2,MAX);
	int i = 0;
	while ( str1[i + 1] != NULL)
	{
		str1[i] = str2[i];
		i++;
	}
		
	
	cout << str1;
	_getch();
    return 0;
}

