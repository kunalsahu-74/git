#include<iostream>
using namespace std;

class base
{
private:
    /* data */
public:
virtual void show(){
    cout<<"Base Class"<<endl;
}

};
class Derived1:public base
{

public:
void show(){
    cout<<"Derived Class 1"<<endl;
}
};

class Derived2:public base
{

public:
    void show(){
        cout<<"Derived Class 2"<<endl;
    }
};



int main()
{
    base *b;
    Derived1 d1;
    Derived2 d2;
    b=&d1;
    b->show();
    b=&d2;
    b->show();   
    return 0;
}