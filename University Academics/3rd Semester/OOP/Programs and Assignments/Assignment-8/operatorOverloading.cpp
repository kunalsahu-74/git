#include<iostream>
using namespace std;

struct Cse41
{
    string boys;
    string girls;
    Cse41(string boys,string girls){
        this->boys=boys;
        this->girls=girls;
    }
};
struct Data
{
    int no;
    int no1;
    double dno;
};


ostream& operator<<(ostream& COUT,Cse41& c41){
    COUT<<"Name of the Boy is "<<c41.boys<<endl;
    COUT<<"Name of the Girl is "<<c41.girls<<endl;
    return COUT;
}

istream& operator>>(istream& CIN,Data& data){
    CIN>>data.no;
    CIN>>data.no1;
    CIN>>data.dno;
    return CIN;
}

int main()
{
    Cse41 c1=Cse41("Rohit","Avneeta");
    Cse41 c2=Cse41("Auro","Junita");
    Cse41 c3=Cse41("Auro","Junita");
    Data d1;
    cin>>d1;
    cout<<d1.no<<"\t"<<d1.no1<<"\t"<<d1.dno;
    cout<<c1<<c2<<c3;
    return 0;
}