#include<iostream>
using namespace std;

class quest2
{
private:
    int n;
    int *arr;
public:
    quest2(int n);
    friend istream & operator >>(istream &CIN,quest2 &q2){
        cout<<"Enter Data for"<<q2.n<<" Elements"<<endl;
        for (int i = 0; i < q2.n; i++)
        {
            CIN>>q2.arr[i];
        }
    }
    friend ostream & operator<<(ostream &COUT,quest2 &q2){
        cout<<"Below is the Elements present in the Array"<<endl;
        for (int i = 0; i < q2.n; i++)
        {
            COUT<<q2.arr[i]<<" ";
        }
    }
};

quest2::quest2(int n)
{
    this->n=n;
    arr=new int[n];
}

int main()
{
    quest2 q2(4);
    cin>>q2;
    cout<<q2;   
    return 0;
}