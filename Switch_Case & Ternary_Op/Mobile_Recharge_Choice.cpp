#include <iostream>
using namespace std;

int main()
{
    int choice = 0;

    cout << "|| ----==== Mobile Recharge System ====---- ||" << endl;

    while (choice != 5)
    {
        cout << "\n\n1. Rupees 199 Recharge";
        cout << "\n2. Rupees 399 Recharge";
        cout << "\n3. Rupees 599 Recharge";
        cout << "\n4. Rupees 899 Recharge";
        cout << "\n5. Exit";

        cout << "\n\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "(Rupees:199) Recharged Successfully...";
            break;

        case 2:
            cout << "(Rupees:399) Recharged Successfully...";
            break;

        case 3:
            cout << "(Rupees:599) Recharged Successfully...";
            break;

        case 4:
            cout << "(Rupees:899) Recharged Successfully...";
            break;

        case 5:
            cout << "Successfully Exit !!";
            break;

        default:
            cout << "Invalid Choice, Try Again !!";
        }
    }

    return 0;
}