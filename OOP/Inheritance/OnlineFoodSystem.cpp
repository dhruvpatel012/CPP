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

        cout << "Food Name: " << foodName << endl;

        cout << "Food Price: " << foodPrice << endl;

        cout << "Enter Quantity: ";
        cin >> foodQnty;

        totalValue = foodPrice * foodQnty;

        cout << "Total Price: " << totalValue << endl;
    }

    void Burger()
    {
        foodName = "Burger";
        foodPrice = 120;

        cout << "Food Name: " << foodName << endl;
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

        cout << "Food Name: " << foodName << endl;
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
        cout << "\nEnter Delivery Person Id: ";
        cin >> personId;

        cin.ignore();
        cout << "Enter Delivery Person Name: ";
        getline(cin, personName);

        cout << "Enter Delivery Person Phone No: ";
        cin >> personPhoneNo;
    }

    void dispolayPersonInfo()
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

    void showEntireInfo(){
         systemName = "Goti Lo";
         cout<<"\nSystem Name: "<<systemName<<endl;

          displayUserInfo();
          dispolayPersonInfo();

         
    }
};

int main()
{
    DeliveryPerson d1;
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

    return 0;
}