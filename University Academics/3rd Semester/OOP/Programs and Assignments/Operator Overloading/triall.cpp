#include<iostream>
using namespace std;

class triall
{
private:
    string st;   
    string *st1;
public:
    triall();
    ~triall();
};

triall::triall()
{
    getline(cin>>ws,this->st);
    cout << sizeof(this->st);
    this->st1=new string();
    cout << sizeof(this->st1);
    this->st1=&st;
    
    
}


int main()
{
    triall t;   
    return 0;
}