#include<iostream>
using namespace std;

class quest3
{
private:
    int l;
    char *c;
public:

    quest3(){
        l=100;
        c=new char[l];
    }
    quest3(int l){
        this->l=l;
        c=new char[this->l];
        cout<<"Enter String"<<endl;
        // for (int i = 0; i < l; i++)
        // {
        //     cin>>c[i];
        // }
        cin>>c;
    }
    quest3 operator+(quest3 &q3){
        quest3 q2;
        q2.l=l+q3.l;
        q2.c=new char[q2.l];
        int i;
        for (i = 0; i < l; i++)
        {
            q2.c[i]=this->c[i];
        }
        for (int j = 0; j < q3.l; j++)
        {
            q2.c[i++]=q3.c[j];
        }
        return q2;
    }

    void show(){
        cout<<"The Concatenated String is "<<endl;
        for (int i = 0; i < l; i++)
        {
            cout<<c[i];
        }        
    }
};

int main()
{
    quest3 q1,q3(5),q2(6);
    q1=q3+q2;
    q1.show();

    return 0;
}