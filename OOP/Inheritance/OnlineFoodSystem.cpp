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
    int foodQnty;
    int foodPrice;
    int totalValue;

public:
    void Pizaa()
    {
        foodName = "Pizza";
        foodPrice = 300;

        cout << "\nFood Name: " << foodName << endl;

        cout << "Food Price: " << foodPrice << endl;

        cout << "\nEnter Quantity: ";
        cin >> foodQnty;

        totalValue = foodPrice * foodQnty;

        cout << "Total Price: " << totalValue << endl;
    }

    void Burger()
    {
        foodName = "Burger";
        foodPrice = 120;

        cout << "\nFood Name: " << foodName << endl;
        cout << "Food Price: " << foodPrice << endl;

        cout << "\nEnter Quantity: ";
        cin >> foodQnty;

        totalValue = foodPrice * foodQnty;

        cout << "\nTotal Price: " << totalValue << endl;
    }

    void pasta()
    {
        foodName = "Pasta";
        foodPrice = 220;

        cout << "Food Name: " << foodName << endl;
        cout << "Food Price: " << foodPrice << endl;

        cout << "\nEnter Quantity: ";
        cin >> foodQnty;

        totalValue = foodPrice * foodQnty;

        cout << "\nTotal Price: " << totalValue << endl;
    }

    void Dosa()
    {
        foodName = "Dosa";
        foodPrice = 280;

        cout << "\nFood Name: " << foodName << endl;
        cout << "Food Price: " << foodPrice << endl;

        cout << "\nEnter Quantity: ";
        cin >> foodQnty;

        totalValue = foodPrice * foodQnty;

        cout << "\nTotal Price: " << totalValue << endl;
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
        ;

        displayUserInfo();
        displayPersonInfo();
    }
};

int main()
{
    Server d1;
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

    return 0;
}