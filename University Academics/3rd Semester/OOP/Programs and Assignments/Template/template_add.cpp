#include<iostream>
using namespace std;
template <class T>
class tem{
    public:
    T add(T n1,T n2){
        return n1+n2;
    }
};
int main()
{
    tem<int> temp1;
    cout<<"Addition of two Numbers "<<temp1.add(5,7);
    return 0;
}