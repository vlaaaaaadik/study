#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

#define SIZE 255;

class strType
{
	char *p;
	int len;
public:
	strType();
	~strType();
	void set(char *ptr);
	void show();
};

strType::strType()
{
	p = (char *) malloc (255);
	if (!p)
	{
		cout << "помилка виділення памяті\n";
	}
};

strType::~strType()
{

}

int main()
{
    return 0;
}

