#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

class coord
{
	int x, y;
public:
	coord() { x = 0; y = 0; }
	coord(int i, int j) { x = i, y = j; }
	void get_xy(int &i, int &j) { i = x, j = y; }
	
	friend coord operator+(coord obj1, coord obj2);
	friend coord operator+(coord obj1, int t);
	coord operator-(coord obj2);
	//friend coord operator++(coord obj1);
	coord operator++()
	{
		this->x++;
		this->y++;
	}
	bool operator==(coord obj)
	{
		this->
	}
};

coord operator+(coord obj1, coord obj2)
{
	coord obj3;
	obj3.x = obj1.x + obj2.x;
	obj3.y = obj1.y + obj2.y;
	return obj3;
}

coord operator++(coord obj1)
{
	obj1.x += 1;
	obj1.y += 1;
	return obj1;
}
coord operator+(coord obj1, int t)
{
	coord obj3;
	obj3.x = obj1.x + t;
	obj3.y = obj1.y + t;
	return obj3;
}

coord coord::operator-(coord obj2)
{
	coord t;
	t.x = x - obj2.x;
	t.y = y - obj2.y;
	return t;
}

int main()
{
	
	int x, y;
	coord ob1(2, 8);
	coord ob2(7, 2);
	(ob1 + ob2).get_xy(x, y);
	cout << "x = " << x << "\ny = " << y << endl;
	(ob1 + 3).get_xy(x, y);
	cout << "x = " << x << "\ny = " << y << endl;
	(ob2).get_xy(x,y);
	cout << "x = " << x << "\ny = " << y << endl;

	_getch();
}