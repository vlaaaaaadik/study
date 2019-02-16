#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        cout<<"A"<<endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout<<"B"<<endl;
    }
};

class C : public B
{
public:
    C()
    {
        cout<<"C"<<endl;
    }
};
class D : public C
{
public:
    D()
    {
        cout<<"D"<<endl;
    }
};
int main()
{
    A a;
    B b;
    C c;
    D d;
    return 0;
}

