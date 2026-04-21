#include <iostream>
using namespace std;

class User
{
private:
    string userName;
    string userPhoneNumber;
    string userAddress;

public:
    void getUserInfo()
    {
        cout << "\n|| ---- ONLIINE FOOD-SYSTEM ---- ||\n";
        cout << "\nEnter User Name: ";
        getline(cin, userName);

        cout << "Enter Phone No: ";
        cin >> userPhoneNumber;

        cin.ignore();
        cout << "Enter Address: ";
        getline(cin, userAddress);
    }

    void displayUserInfo()
    {
        cout << "User Name: " << userName << endl;
        cout << "User Phone Number: " << userPhoneNumber << endl;
        cout << "User Address: " << userAddress << endl;
    }
};

class Food : public User
{
private:
    string foodName;
    int totalValue;

protected:
    int pizzaQunty = 0;
    int pizzaPrice = 0;
    int pizzaTotal = 0;

    int burgerQunty = 0;
    int burgerPrice = 0;
    int burgerTotal = 0;

    int pastaQunty = 0;
    int pastaPrice = 0;
    int pastaTotal = 0;

    int dosaQunty = 0;
    int dosaPrice = 0;
    int dosaTotal = 0;

    int totalBill = 0;

public:
    void Pizaa()
    {
        foodName = "Pizza";
        pizzaPrice = 300;

        cout << "\nFood Name: " << foodName << endl;

        cout << "Food Price: " << pizzaPrice << endl;

        cout << "\nEnter Quantity: ";
        cin >> pizzaQunty;

        pizzaTotal = pizzaPrice * pizzaQunty;
        totalBill = totalBill + pizzaTotal;

        cout << "Total Pizza Price: " << pizzaTotal << endl;
        // cout << "Total Bill: " << totalBill << endl;
    }

    void Burger()
    {
        foodName = "Burger";
        burgerPrice = 120;

        cout << "\nFood Name: " << foodName << endl;
        cout << "Food Price: " << burgerPrice << endl;

        cout << "\nEnter Quantity: ";
        cin >> burgerQunty;

        burgerTotal = burgerPrice * burgerQunty;
        totalBill = totalBill + burgerTotal;

        cout << "\nTotal Burger Price: " << burgerTotal << endl;
        // cout << "Total Bill: " << totalBill << endl;
    }

    void pasta()
    {
        foodName = "Pasta";
        pastaPrice = 220;

        cout << "Food Name: " << foodName << endl;
        cout << "Food Price: " << pastaPrice << endl;

        cout << "\nEnter Quantity: ";
        cin >> pastaQunty;

        pastaTotal = pastaPrice * pastaQunty;
        totalBill = totalBill + pastaTotal;

        cout << "\nTotal Price: " << pastaTotal << endl;
        // cout << "Total Bill: " << totalBill << endl;
    }

    void Dosa()
    {
        foodName = "Dosa";
        dosaPrice = 280;

        cout << "\nFood Name: " << foodName << endl;
        cout << "Food Price: " << dosaPrice << endl;

        cout << "\nEnter Quantity: ";
        cin >> dosaQunty;

        dosaTotal = dosaPrice * dosaQunty;
        totalBill = totalBill + dosaTotal;

        cout << "\nTotal Price: " << dosaTotal << endl;
        // cout << "Total Bill: " << totalBill << endl;
    }
};

class DeliveryPerson : public Food
{
private:
    int personId;
    string personName;
    int personPhoneNo;

public:
    void getPersonInfo()
    {
        cout << "\n\nEnter Delivery Person Id: ";
        cin >> personId;

        cin.ignore();
        cout << "Enter Delivery Person Name: ";
        getline(cin, personName);

        cout << "Enter Delivery Person Phone No: ";
        cin >> personPhoneNo;
    }

    void displayPersonInfo()
    {
        cout << "\nDelivery Person Id: " << personId << endl;
        cout << "Delivery Person Name: " << personName << endl;
        cout << "Delivery Person Phone No: " << personPhoneNo << endl;
    }
};

class Server : public DeliveryPerson
{
private:
    string systemName;

public:
    void showEntireInfo()
    {
        systemName = "Goti Lo";
        cout << "\n\nSystem Name: " << systemName << endl
             << endl;

        displayUserInfo();
        displayPersonInfo();
    }
};

class Admin : public Server
{
public:
    void FinalInfo()
    {
        cout << "\nFood\t"<<"Price\t"<<"Qunty\t"<<"TotalPrice"<<endl;

        if (pizzaQunty > 0)
        {
            cout << "\nPizaa\t" << pizzaPrice << "\t" << pizzaQunty << "\t" << pizzaTotal << endl;
        }
        if (burgerQunty > 0)
        {
            cout << "\nBurger\t" << burgerPrice << "\t" << burgerQunty << "\t" << burgerTotal << endl;
        }
        if (pastaQunty > 0)
        {
            cout << "\nPasta\t" << pastaPrice << "\t" << pastaQunty << "\t" << pastaTotal << endl;
        }
        if (dosaQunty > 0)
        {
            cout << "\nDosa\t" << dosaPrice << "\t" << dosaQunty << "\t" << dosaTotal << endl;
        }

        cout << "\nYour Total Bill: " << totalBill << endl;
    }
};

int main()
{
    Admin d1;
    d1.getUserInfo();

    int choice;

    do
    {
        cout << "\n1.Pizza\n2.Burger\n3.Pasta\n4.Dosa\n5.Exit" << endl;

        cout << "\nEnter Youre Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            d1.Pizaa();
            break;

        case 2:
            d1.Burger();
            break;

        case 3:
            d1.pasta();
            break;

        case 4:
            d1.Dosa();
            break;

        case 5:
            cout << "\nThank You For Using Food System...";
            break;

        default:
            cout << "\n\nInvalid Choice,Try Again...";
            break;
        }

    } while (choice != 5);

    d1.getPersonInfo();

    if (choice == 1)
    {
        d1.Pizaa();
    }
    else if (choice == 2)
    {
        d1.Burger();
    }
    else if (choice == 3)
    {
        d1.pasta();
    }
    else if (choice == 4)
    {
        d1.Dosa();
    }

    d1.showEntireInfo();

    d1.FinalInfo();

    return 0;
}