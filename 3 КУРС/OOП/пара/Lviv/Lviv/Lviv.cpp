#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

class Distance
{
	int dis;
public:
	void set(int n) 
	{
		dis = n;
	}

	int get()
	{
		return dis;
	}

	void sum(Distance obj1, Distance obj2)
	{
		dis = obj1.get() + obj2.get();
	}

	Distance add(Distance obj2)
	{
		Distance temp;
		temp.dis = this->get() + obj2.get();
		return temp;
	}
	Distance addDist(const Distance & d2)const
	{
		d2.set(200); //так не можна - константний аргумент всьо
	}
};

int main()
{
	Distance obj1, obj2,obj3;

	obj1.set(10);
	obj2.set(5);
	obj3 = obj1.add(obj2);
	//obj1.sum(obj1, obj2);
	cout << obj3.get();
	_getch();
    return 0;
}

