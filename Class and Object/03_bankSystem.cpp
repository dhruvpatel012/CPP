#include <iostream>
#include <string>
using namespace std;

class bankAccount
{
private:
    string name;
    int balance;

public:
    void createAccount()
    {
        cout << "Enter your name:  ";
        cin >> name;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void depositAmount()
    {

        int amount;

        cout << "\nEnter Deposit Amount: ";
        cin >> amount;

        balance += amount;
    }

    void withdrawAmount()
    {

        int amount;

        cout << "\nEnter Withdraw Amount: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "\nNot Enough Balance for Withdraw Amount..!!"<<endl;
        }
    }

    void showBalance(){
        cout<<"\nYour Name: "<<name<<endl;
        cout<<"Balance: "<<balance << endl;
    }
};

int
main()
{
    bankAccount user1;

    user1.createAccount();
    user1.depositAmount();
    user1.withdrawAmount();
    user1.showBalance();


    return 0;
}