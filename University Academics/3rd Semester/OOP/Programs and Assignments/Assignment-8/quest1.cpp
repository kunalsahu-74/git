#include<iostream>
using namespace std;

class quest1
{   
private:
    int feet,inches;
public:
    quest1(){
    feet=0;
    inches=0;        
    }
    quest1(int feet,int inches){
        this->feet=feet;
        this->inches=inches;
    }

    quest1 operator+(quest1 const &q1){
        quest1 q2;
      q2.feet=feet+q1.feet;
      q2.inches=inches+q1.inches;  
      while(q2.inches >= 12.0) {
      q2.inches = q2.inches - 12.0;
      ++q2.feet;
    }
    return q2;
    } 
    friend quest1 operator+(int z,quest1 const&q1){
        quest1 q2;
        q2.feet=z+q1.feet;
        q2.inches=0+q1.inches;
        return q2;
    } 
    void show(){
        cout<<"Distance in feet is "<<this->feet<<endl;
        cout<<"Distance in inches is "<<this->inches<<endl;
    }  
};

class quest1b
{
private:
    int x;
public:
    quest1b(){
        cout<<"Enter Value to be Decremented"<<endl;
        cin>>x;
        cout<<"Value of X before Decrementation is "<<x<<endl;
    }
    quest1b operator--(){
        --x;
        return *this;
    }
    void show(){
        cout<<"Value of X after Decrementation is "<<x<<endl;
    }
};

int main()
{
    quest1 q1(23,8.6),q2(34,2.4);
    quest1 q3;
    q3=q1+q2;
    q3.show();
    quest1 q4;
    q4=5+q2;
    q4.show();
    cout<<"Part-b"<<endl;
    quest1b q1b;
    --q1b;
    q1b.show();
    return 0;
}