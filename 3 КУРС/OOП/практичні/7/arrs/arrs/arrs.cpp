#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;
class Arr
{
public:
	Arr()
	{
		size = 4;
		box = new int[size];
		for (int i = 0; i < 4; i++)
		{
			box[i] = i+10;
		}
	}
	Arr(int size) 
	{
		this->size = size;
		box = new int[size];
		for (int i = 0; i < this->size; i++)
		{
			box[i] = i + 10;
		}
	}
	void Show()
	{
		for (int i = 0; i < this->size; i++) { cout << box[i] << " "; }
	}
	friend Arr operator*(Arr, const Arr &);
private:
	int *box;
	int size;
};

Arr operator*(Arr right, const Arr &left)
{
	if (right.size != left.size)
	{
		return -1;
	}
	else {
		for (int i = 0; i < right.size; i++)
		{
			right.box[i] *= left.box[i];
		}
	}
	return right;
}
int main()
{
	const int notUsed = system("color F0");
	Arr ar1, ar2;
	(ar1*ar2).Show();
	_getch();
	return 0;
}