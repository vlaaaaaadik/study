#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;
class Truck;
class Car
{
public:
	Car(int a,int b);
	int speedSub(Truck t);
private:
	int passangers;
	int speed;
};

class Truck
{
public:
	Truck(int a, int b);
	friend int Car::speedSub(Truck t);
private:
	int weight;
	int speed;
};

Truck::Truck(int a, int b)
{
	this->weight = a;
	this->speed = b;
}

Car::Car(int a, int b)
{
	this->passangers = a;
	this->speed = b;
}

int Car::speedSub(Truck t)
{
	return this->speed - t.speed;
}

int main()
{
	Car c(5, 80);
	Truck t(5000, 40);
	cout << "sub of speeds car and truck = " << c.speedSub(t);
	_getch();
    return 0;
}

