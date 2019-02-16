#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct node
{
	int x;
	node *l, *r;
};

void show(node *&tree)
{
	if(tree!=NULL)
	{
		show(tree->l);
		cout<<tree->x;
		show(tree->r);
	}
}

void add_node(int x, node *&mytree)
{
	if(NULL==mytree)
	{
		mytree = new node;
		mytree->x=x;
		mytree->l=mytree->r=NULL;
	}
	if(x<mytree->x)
	{
		if (mytree->l!=NULL) add_node(x,mytree->l);
		else
		{
			mytree->l= new node;
			mytree->l->l=mytree->l->r=NULL;
			mytree->l->x=x;
		}
	}
	if (x>mytree->x)
	{
		if (mytree->r!=NULL) add_node(x,mytree->r);
		else
		{
			mytree->r=new node;
			mytree->r->l=mytree->r->r=NULL;
			mytree->r->x=x;
		}
	}
}

int main ()
{
	int k[5];
	node *tree=NULL;
	cout<<"enter node ";
	for(int i=0;i<5;i++) cin>>k[i];
	for(int i=0;i<5;i++) add_node(k[i],tree);
	show(tree);
	cin.get();
	return 0;
}
