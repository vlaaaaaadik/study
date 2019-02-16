#include "header.h"
#include <cmath>
#include <iostream>

float marks[10];

using namespace std;

float max()
{
	float big=marks[0];

  
	for(int i=0;i<10;i++)
	{
		if(big<marks[i])
		{
			big=marks[i];
		}
	}
	return big;
}

float min()
{
	float smal=marks[9];
	for(int i=9; i>-1; i--)
	{
		if(marks[i]<smal)
		{
			smal=marks[i];

		}
	}
	return smal;
}

void in()
{
		
    cout<<"enter the marks"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>marks[i];
	}
}
void out()
{
	    cout<<"max mark "<<max()
        <<"\nmin mark "<<min();
}

float avrg()
{
	
	float avrg=0, minimal=min(), maximal=max();
	for(int i=0;i<10;i++)
	{
		if(marks[i]==minimal || marks[i]==maximal)
		{
			
		}
		else
		{
			avrg+=marks[i];
		}
	}
	return avrg=avrg/8;
}
