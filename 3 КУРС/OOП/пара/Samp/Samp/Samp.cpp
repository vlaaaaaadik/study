#include "stdafx.h"
#include <conio.h>
#include <iostream>

using namespace std;

class samp
{
	int i;
	int j;
public:
	samp() {}
	samp(int n,int k)
	{
		 i = n;
		 j = k;
	}
	int getj() {
		return j;
	}
	int get()
	{
		return i;
	}
	void set(int n)
	{
		i = n;
	}
};

void sqr2(samp *obj)
{
	obj->set(obj->get()*obj->get());
	cout << "oaoaoaoao" << obj->get() << endl;
}

/*void sqr2(samp obj)
{
	obj.set(obj.get()*obj.get());
	cout << "oaoaoaoao" << obj.get() << endl;
}*/

int sqr(samp ob)
{
	return ob.get() * ob.get();
}

int main()
{
	samp obj[4] = { samp(4,1),samp(2,2),samp(5,7),samp(9,8) };
	samp obj1[4] = { {1,2}, {2,3}, {3,4}, {4,5} };

	for (int i = 0; i < 4; i++)
	{
		cout << obj1[i].get() 
			<< obj1[i].getj() << endl;
	}
	cout << endl;
	cout << obj1[2].get()
		<< obj1[2].getj() << endl;
	_getch();
    return 0;
}