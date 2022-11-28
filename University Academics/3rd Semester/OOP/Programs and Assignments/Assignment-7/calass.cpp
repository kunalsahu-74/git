#include<iostream>
using namespace std;

class calass
{
private:
    /* data */
    int a;
    double b;
public:
    calass(/* args */);
    ~calass();
};

calass::calass(/* args */)
{
}

calass::~calass()
{
}

int main()
{
    calass c;
    cout<<sizeof(c)<<endl;    
    return 0;
}
