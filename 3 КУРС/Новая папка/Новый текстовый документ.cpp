#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class Distance{
private:
	int feet;
	float inches;

public:
	void getdist()
	{
		cout<<"\nÂâåä³òü ôóòè ";cin>>feet;
		cout<<"\nÂâåä³òü äþéìè ";cin>>inches;
	}
	
	void showdist(){
		cout<<feet<<"\'="<<inches<<'\"';
	}

};

int main()
{
	setlocale(LC_CTYPE, "ukr");
	Distance dist;
	dist.getdist();
	dist.showdist();
	Distance* distptr = new Distance;
	distptr->getdist();
	distptr->showdist();
	cout<<endl;
	_getch();

	return 0;
}
