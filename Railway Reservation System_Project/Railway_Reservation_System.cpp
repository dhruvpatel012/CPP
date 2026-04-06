#include <iostream>
#include <string>
using namespace std;

class Railway
{
private:
    int trainNumber;
    string trainName;
    string Source;
    string Destination;
    string trainTime;

public:
    static int getTrainCount;
    void addTrain()
    {
        cout << "\nEnter Train Number: ";
        cin >> trainNumber;

        cin.ignore();
        cout << "Enter Train Name: ";
        getline(cin, trainName);

        cout << "Enter Train Soure: ";
        getline(cin, Source);

        cout << "Enter Train Destination: ";
        getline(cin, Destination);

        cout << "Enter Train Time: ";
        getline(cin, trainTime);

        getTrainCount++;
        cout << "\nTrain Record added successfully...!" << endl;
    }

    void displayAllTrains()
    {
        cout << "\nTrain Number: " << trainNumber << endl;
        cout << "Train Name: " << trainName << endl;
        cout << "Train Soure: " << Source << endl;
        cout << "Train Destination: " << Destination << endl;
        cout << "Train Time: " << trainTime << endl;
    }

    int takeRailwayNumber()
    {
        return trainNumber;
    }
};

int Railway::getTrainCount = 0;

int main()
{

    Railway rails[100];
    int choice, i, searchNo;

    do
    {

        cout << "\n\n|| - - - RAILWAY RESERVATION SYSTEM MENU - - - ||" << endl;

        cout << "\n1.Add New Train Record";
        cout << "\n2.Display All Train Record";
        cout << "\n3.Search Train By Record";
        cout << "\n4.Exit";

        cout << "\n\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            if (Railway::getTrainCount < 100)
            {
                rails[Railway::getTrainCount].addTrain();
            }
            else
            {
                cout << "Record System Housefull..." << endl;
            }
            break;

        case 2:
            if (Railway::getTrainCount == 0)
            {
                cout << "Not Founded, System is Empty..!" << endl;
            }

            else
            {
                for (i = 0; i < Railway::getTrainCount; i++)
                {
                    cout << "\n|| ==> Railway - " << i + 1 << " Details <== ||" << endl;
                    rails[i].displayAllTrains();
                }
            }
            break;

        case 3:
            if (Railway::getTrainCount == 0)
            {
                cout << "Not founded, record not exits..." << endl;
            }

            else
            {
                cout << "\nEnter Search Number ( Railway-Number): ";
                cin >> searchNo;

                for (i = 0; i < Railway::getTrainCount; i++)
                {
                    if (rails[i].takeRailwayNumber() == searchNo)
                    {
                        rails[i].displayAllTrains();
                    }
                    else{
                        cout<<"Train with number "<<searchNo<<" not found !!";
                    }
                }
            }
            break;

        case 4:
            cout << "\nThank You For Using.." << endl;
            break;

        default:
            cout << "\nInvalid choice,Try Again" << endl;
        }

    } while (choice!=4);

    return 0;
}