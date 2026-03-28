#include <iostream>
using namespace std;

int main()
{

    int amount, depoiste, withdraw, choice;

    cout << "|| ----==== BANK ACCOUNT SYSTEM ====---- ||" << endl;
    cout << "\nEnter Initial Amount: ";
    cin >> amount;

    do
    {
        cout << "\n1.Check Balance\n2.Deposite Money\n3.Withdraw Money\n4.Exit";

        cout << "\n\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nYour Current Balance: " << amount << endl;
            break;

        case 2:
            cout << "\nDepoiste Amount: ";
            cin>>depoiste;
            
            amount += depoiste;
            break;

        case 3:
            cout << "\nWithdraw Amount: ";
            cin>>withdraw;
            if (withdraw <= amount)
            {
                amount -= withdraw;
            }
            else
            {
                cout << "\nInsufficient Balance, Try Again..."<<endl;
            }
            break;

        case 4:
            cout << "\nSuccesfully Exit !!"<<endl;
            break;

        default:
            cout << "\nInvalid Choice, Try Again..."<<endl;
        }
    } while(choice != 4);

    return 0;
}