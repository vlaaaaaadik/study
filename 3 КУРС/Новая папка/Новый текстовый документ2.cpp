#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class person
{
private:
	char name[40];
	
public:
	void SetName(){
		cout<<"������ ���:";cin>>name;
	}

	void PrintName(){
		cout<<"\n ���:"<<name;
	}

};

int main()
{
	setlocale(LC_CTYPE, "ukr");
	person* persPtr[100];
	int n=0;
	char choice;
	do
	{
		persPtr[n]=new person;
		persPtr[n]->SetName();
		n++;
		cout<<"Continue (y/n)?";
		cin>>choice;
	}
	while(choice=='y');

	for(int j=0;j<n;j++){
		cout<<"\n���������� ��� N"<<j+1;
		persPtr[j]->PrintName();
	}
	cout<<endl;
	_getch();
	return 0;

}
