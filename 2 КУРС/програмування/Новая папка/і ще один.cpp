#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
	ofstream kout("data.txt");
	float y[15],g[20], d, days, y1[15], g1[20],avrg;
	cout <<"enter payment"<<endl;
	cin>>d;
	cout<<"first department"<<endl;
	cout<<"  days \t\t payment"<<endl;
	kout<<"first department"<<endl;
	kout<<"  days \t\t payment"<<endl;
	for(int i=0;i<15;i++)
	{
		days=rand()%32;
		y[i]=days*d;
		y1[i]=y[i]*0.2;
		y[i]-=y1[i];
		cout<<i+1<<". "<<days<<"\t\t"<<y[i]<<endl;
		kout<<i+1<<". "<<days<<"\t\t"<<y[i]<<endl;
	}
	for(int i=0;i<15;i++)
	    avrg+=y1[i];
	cout<<"avrg tax = "<<avrg/15<<endl;
	kout<<"avrg tax = "<<avrg/15<<endl;
	
	cout<<"second department"<<endl;
	cout<<"  days \t\t payment"<<endl;
	kout<<"second department"<<endl;
	kout<<"  days \t\t payment"<<endl;
		for(int i=0;i<20;i++)
	{
		days=rand()%32;
		g[i]=days*d;
		g1[i]=g[i]*0.2;
		g[i]-=g1[i];
		cout<<i+1<<". "<<days<<"\t\t"<<g[i]<<endl;
		kout<<i+1<<". "<<days<<"\t\t"<<g[i]<<endl;
	}
	for(int i=0;i<20;i++)
		avrg+=g1[i];
	cout<<"avrg tax = "<<avrg/20<<endl;
	kout<<"avrg tax = "<<avrg/20<<endl;
	return 0;
}
