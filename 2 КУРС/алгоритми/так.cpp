#include <string> 
#include <iostream> 
#include <sstream> 
#include <cassert>

enum Type{PLUS,MUL,VAL};
struct Node;
struct Node
{
    Type type;
    Node* left, *right; 
	int data;
};
void recurs( std::string str, Node* node )
{
	int i, c;
	std::cout<<	str << std::endl;
	for(unsigned t = PLUS; t<VAL; ++t)
	    for(int i = 0; i <str.size(); ++i)
	    {
	    	if('('==str[i]) ++c;
	    	else if (')'==str[i])--c;
	    	else if((t == PLUS ?"+":"*") == str[i] && !c)
	    	{
	    		node->left = new node;
	    		node->right = new node;
	    		node->type = static_cast<Type>(t);
	    		std::cout<< (node->type == PLUS ? "+" : "*")<<std::endl;
	    		recurs(str.substr(0,i),node->left);
	    		recurs(str.substr(i+1,str.size()-i),node->right);
	    		return;
			}
		}
		if(str[0]=='(' && str[str.size()-1]==')')
		{
			recurs(str.substr(1,str.size()-2),node);
			return;
		}
		node->type = VAL;
		std::stringstream istr(std::stringstream::in | std::stringstream::out);
		istr<<str;
		istr>>node->data;
}

int recurs(node* node)
{
	std::cout<<"<<"std::endl;
	int val = 0;
	swich(node->type)
	{
		case PLUS:
			val = recurs(node->left ) + recurs(node->right);
		    break;
		case MUL:
			val = recurs(node->left) * recurs(node->right);
			break;
		case VAL:
			val = node->data;
			std::cout<<"("<<val<<")"<<std::endl;
			break;
		default:
			assert(0);
			return -1;
	}
	delete node;
	return val;
}

int main()
{
	std::string str = "(((10+1)*(5+6*(3+1))+4*(3+1)))";
	node* node = new node;
	recurs(str,node );
	std::cout<<"result = "<<recurs(node);
}
