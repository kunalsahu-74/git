#include<iostream>
using namespace std;
class superr
{

public:
    superr();
    ~superr();
};

superr::superr()
{
    cout<<"Class superr Constructor"<<endl;
}

superr::~superr()
{
    cout<<"Class superr Destructor"<<endl;
}


class B:public superr
{

public:
    B();
    ~B();
};

B::B()
{
    cout<<"Class B Constructor"<<endl;
}

B::~B()
{
    cout<<"Class B Destructor"<<endl;
}

class A:public B
{
public:
    A();
    ~A();
};

A::A()
{
    cout<<"Class A Constructor"<<endl;
}

A::~A()
{
    cout<<"Class A Destructor"<<endl;
}

int main()
{
    A a;   
    return 0;
}