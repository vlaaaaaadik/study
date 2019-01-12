#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class number
{
private:
	int someNumber;
	
public:
	void SetNumber(){
		cout<<"¬вед≥ть число:";
		cin>>someNumber;
	}

	void PrintNumber(){
		cout<<"\n число:"<<someNumber;
	}

};

int main()
{
	setlocale(LC_CTYPE, "ukr");
	number *num = new number;
	for(int i=0;i<5;i++)
	{
		(num+i)->SetNumber();
	}

	for(int i=0;i<5;i++){
		(num+i)->PrintNumber();
	}
	cout<<endl;
	_getch();
	return 0;

}
