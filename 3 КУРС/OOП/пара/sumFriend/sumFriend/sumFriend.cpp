#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

class sumat
{
	int num;
	long sum = 0;
public:
	void setSum(int num)
	{
		this->num = num;
		for (int i = 0; i <= this->num; i++)
		{
			this->sum += i;
		}
	}
	void showSum()
	{
		cout << "sum of number " << num << " = " << sum;
	}
};

sumat makeSum()
{
	sumat obj;
	int n;
	cout << "enter num "; cin >> n;
	obj.setSum(n);
	return obj;
}
int main()
{
	sumat s;
	s = makeSum();
	s.showSum();
	_getch();
    return 0;
}

