#include<iostream>
using namespace std;
class Student{
public:
string name;
long roll;
int age;
public:
Student(string name,long roll,int age){
this->name=name;
this->roll=roll;
this->age=age;
}
};

class test : public Student
{
public:
int *arr=new int[5];
int sum=0;
test(string name,long roll,int age):Student(name,roll,age){
cout<<"Enter Marks \n";
sum=0;
for (int i = 0; i < 5; i++)
{
cin>>arr[i];
sum=sum+arr[i];
}
}
void totalMarks(){
cout<<"Total Marks obtained in Academics is "<<sum<<endl;
}
};
class Sports
{
public:
int SportScore;
Sports(int SportScore){
    this->SportScore=SportScore;
}
};
class Result:public Sports,public test
{
public:
Result(string name,long roll,int age,int score):Sports(score),test(name,roll,age){}
void DisplayDetails(){
int total=Sports::SportScore+test::sum;
float percent=(total/600.0)*100.0;
cout<<"Details of the Student\n";
cout<<"\nName:"<<Student::name<<"\nStudent Roll"<<Student::roll<<"\nStudent Age"<<Student::age<<"\nSports Score "<<Sports::SportScore<<endl;
cout<<"Total Marks "<<total<<"\nPercentage Secured is "<<percent<<endl;
}
};
int main() 
{ 
Result r1("AURO",22057020,40,58); 
r1.DisplayDetails();
return 0; 
}
