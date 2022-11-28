#include <iostream>
using namespace std;
class Base {
public:
void printCOnst(int b=10)const{
int a=5;
b=20;

}
	virtual void print(int,int) const = 0;
};
class DerivedOne : virtual public Base {
public:
    void printCOnst(){
        int k=10;
    }
	void print(int a,int b) const
	{
        a=6;
        cout<<a<<endl;
		cout << "1";
	}
};
class DerivedTwo : virtual public Base {
public:
	void print(int a,int b) const
	{
		cout << "2";
	}
};
class Multiple : public DerivedOne, DerivedTwo {
public:
	void print(int a,int b) const
	{
		DerivedTwo::print(5,6);
	}
};
int main()
{
	Multiple both;
	DerivedOne one;
	DerivedTwo two;
	Base* array[3];
	array[0] = &both;
	array[1] = &one;
	array[2] = &two;
	for (int i = 0; i < 3; i++)
		array[i]->print(6,9);
	return 0;
}
