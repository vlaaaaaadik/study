#include "pch.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

class List
{
public:
	int Value;
	List *next;
	List *NewChain(int val)
	{
		List *l = new List;
		l->next = NULL;
		l->Value = val;
		return l;
	}
};

static class Controller
{
public:
	static List* makeList(List *ch,int v)
	{
		cout << "enter values of list. enter -1 to stop" << endl;
		cin >> v;
		ch->Value = v;
		List *ph = ch;
		cin >> v;
		do
		{
			ch->next = ch->NewChain(v);
			ch = ch->next;
			cin >> v;
		} while (v != -1);
		ch->next = ph;
		return ch;
	}
};

static class View
{
public:
	static void show(List*ph, int v)
	{
		cout << "output.next:1 stop:0" << endl;
		cin >> v;
		do
		{
			if (v == 1)cout << "next thing = " << ph->next->Value << endl;
			ph = ph->next;
			cin >> v;
		} while (v != 0);
	}
};

int main()
{
	int v = 0;
	List *ch = new List;
	ch = Controller::makeList(ch, v);
	View::show(ch, v);
	_getch();
	return 0;
}