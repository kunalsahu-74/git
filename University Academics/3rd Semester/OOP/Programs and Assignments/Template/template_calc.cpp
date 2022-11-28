#include<iostream>
using namespace std;
template<class T>
class Calculator
{
private:
    /* data */
    T num1,num2;

public:
    void add(){
        int s=num1+num2;
        cout<<num1<<"+"<<num2<<endl;
    }
    Calculator(T num1,T num2){
        this->num1=num1;
        this->num2=num2;
    }
    ~Calculator();
};


int main()
{
    Calculator<int> c(5,25.5);
    c.add();
    return 0;
}