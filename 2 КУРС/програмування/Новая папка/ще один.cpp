#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
using namespace std;

int *p;
ofstream result("result.txt");
void max();

int main ()
{

    p=new int [7];
	for(int i=0, k=1;i<8;i++,k++)
	{
	    *(p+i)=13.4*sin(-1.26*k)*cos(fabs(k/7.5));
	}
    for (int i=0;i<8;i++)
    {
        cout<<*(p+i)<<" ";
        result<<*(p+i)<<" ";
    }
    cout<<"\n";
    result<<"\n";
    max();
	return 0;
}

void max()
{
	float big=*p;
	for(int i=0;i<8;i++)
	{
		if(*(p+i)>big)
			big=*(p+i);
	}
	for(int j=7;j>-1;j--)
	{
	    if(*(p+j)<0) 
		{
		    *(p+j)=big;
		    break;
		}
	}
	for(int t=0;t<8;t++)
	{
	    cout<<*(p+t)<<" ";
	    result<<*(p+t)<<" ";
	}
}
