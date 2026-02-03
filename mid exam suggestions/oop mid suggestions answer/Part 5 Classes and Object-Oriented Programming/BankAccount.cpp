#include<iostream>
using namespace std;
class account{
private:
    string accname;
    int accnumber , accbalance;

public :
    void createaccount(string name , int number , int balance)
    {
       accname = name;
       accnumber = number;
       accbalance = balance;

       cout << "Account is created successfully" << endl;
    }
    void deposit(int balance)
    {
        accbalance = accbalance + balance;

        cout << "Balance Added" << endl;
    }
    void withdraw(int balance)
    {
        if(accbalance > balance && balance > 0)
        {
            accbalance = accbalance - balance;
            cout << "Withdraw successfully" << endl;
        }
        else
        {
            cout << "You have not enough balance" << endl;
        }
    }
    void checkbalance()
    {
        cout << "Account holder name : " << accname << endl;
        cout << "Account holder number : " << accnumber << endl;
        cout << "Account Balance : " << accbalance << endl;
        cout << endl << endl;

    }
};
int main()
{
    account ac1;
    ac1.createaccount("Tonoy", 101 , 500);
    ac1.checkbalance();

    ac1.deposit(1000);
    ac1.checkbalance();
    ac1.withdraw(600);
    ac1.checkbalance();
    ac1.withdraw(1000);
    ac1.checkbalance();

    account ac2;
    ac2.createaccount("Salman", 102 , 500);
    ac2.checkbalance();

    ac2.deposit(10000);
    ac2.checkbalance();
    ac2.withdraw(300);
    ac2.checkbalance();
    ac2.withdraw(1000);
    ac2.checkbalance();


    return 0;
}
