#include <iostream>
using namespace std;
class Account
{
public:
    long accNo;
    string cname;
    double balance;
    void getData()
    {
        cout << "Enter Account Number " << endl;
        cin >> accNo;
        cout << "Enter Customer Name " << endl;
        getline(cin>>ws,cname);
        cout << "Enter Available Balance " << endl;
        cin >> balance;
        balance = balance + 1000;
    }
    virtual void displayBalance(){
    cout << "Available Balance is " << Account::balance << endl;        
    }
};

class Savings : public Account
{
public:
    double minimum_acc = 1000;
    void deposit(int money_amt)
    {
        balance = balance + money_amt;
        cout << "Balance After Deposit is " << balance << endl;
    }
    void withdraw(int money_amt)
    {
        if (balance - money_amt > minimum_acc)
        {
            balance = balance - money_amt;
        }
        else
        {
            cout << "Insufficient Balance \n";
        }
    }
    void displayBalance()
    {
        cout << "Available Balance is " << Account::balance << endl;
    }
};

class Current : public Account
{
public:
    int overDueAmt;
    void overDueInp(int leftMoney)
    {
        // Amount of money to be paid after Intrest
        overDueAmt = leftMoney * intrest * days;
    }
    double intrest = 5.5;
    int days = 2;
    void withDraw(int money_amt)
    {
        if (balance - money_amt > overDueAmt)
        {
            balance = balance - money_amt;
        }
        else
        {
            cout << "Insufficient Balance \n";
        }
    }
    void displayBalance()
    {
        cout << "Available Balance is " << Account::balance << endl;
    }
};
int main()
{
    Savings s1;
    s1.getData();
    s1.deposit(500);
    s1.withdraw(1500);
    s1.displayBalance();
    Current c1;
    c1.getData();
    c1.overDueInp(5600);
    c1.withDraw(500);
    c1.displayBalance();
    return 0;
}