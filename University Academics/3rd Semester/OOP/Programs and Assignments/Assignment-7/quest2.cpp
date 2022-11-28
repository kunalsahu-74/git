#include<iostream>
using namespace std;
class AABC
{
private:    
public:
    AABC();
    ~AABC();
};

AABC::AABC()
{
    cout<<"Inside Virtual Class Constructor- [AABC]"<<endl;
}

AABC::~AABC()
{
    cout<<"Inside Virtual Class Destructor- [AABC]"<<endl;
}

class ABC
{
private:
public:
    ABC();
    ~ABC();
};

ABC::ABC()
{
    cout<<"Child Class One Constructor- [ABC]"<<endl;
}

ABC::~ABC()
{
    cout<<"Child Class One Destructor- [ABC]"<<endl;
}

class child1:public ABC,public virtual AABC
{
private:
    
public:
    child1();
    ~child1();
};

child1::child1()
{
    cout<<"Inside Child Class Constructor- [child1]"<<endl;
}

child1::~child1()
{
    cout<<"Inside Child Class Destructor- [child1]"<<endl;
}

int main()
{
    child1 c1;
    return 0;
}