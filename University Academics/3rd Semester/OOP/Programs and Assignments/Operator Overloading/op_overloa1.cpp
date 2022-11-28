#include<iostream>
using namespace std;

class Complex
{
private:
   float real,img;
public:
    Complex():real(0),img(0){
    }
    void input(){
        cout<<"Enter Real and Imaginary \n";
        cin>>real;
        cin>>img;
    }
    Complex operator+(const Complex &obj){
        Complex temp;
        // obj.img=67;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
    }
    void output(){
        if (img<0)
        {
            cout<<"Output Complex Number:"<<real<<img<<"i";
        }else{
            cout<<"Output Complex Number:"<<real<<"+"<<img<<"i";
        }
    }
};

int main()
{
    Complex c1,c2,result;
    c1.input();
    c2.input();
    result=c1+c2;
    result.output();
    return 0;
}