#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Card
{
	string Author;
	int Count;

public:

	void Store(string author, int count)
	{
		Author = author;
		Count = count;
	};

	void Show()
	{
		cout << "author = " << Author << endl
			<< "Count = " << Count << endl;
	}
};

int main()
{
	Card card;
	string author;
	int count;

	cout << "Enter the name of an Author ->";
	getline(cin,author);
	cout << "and Count ->";
	cin>>count;

	card.Store(author,count);
	card.Show();

	_getch();

    return 0;
}

