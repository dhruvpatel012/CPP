#include <iostream>
using namespace std;

class TimeConverter
{
private:
    int hour, min, second, remaining, choice, sec;

public:
    void getData()
    {
      while(1){
        cout << "\n|| -> -> -> TIME CONVERTER <- <- <- ||\n\n";
        cout << "1. Second to HH:MM:SS\n";
        cout << "2. HH:MM:SS to Second\n";

        cout << "\nEnter Your Choice (1 or 2): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Seconds: ";
            cin >> sec;

            hour = sec / 3600;
            remaining = sec - (hour * 3600);

            min = remaining / 60;
            second = remaining - (min * 60);

            cout << "\nTime = " << hour << ":" << min << ":" << second << endl;
            break;

        case 2:
            cout << "\nEnter Hours: ";
            cin >> hour;

            cout << "\nEnter Minutes: ";
            cin >> min;

            cout << "\nEnter Seconds: ";
            cin >> second;

            sec = (hour * 3600) + (min * 60) + second;

            cout << "\nTotal Seconds = " << sec << endl;
            break;

        default:
            cout << "\nInvalid Choice,Try again..!" << endl;
        }
    }
      }
};

int main()
{
    TimeConverter t1;
    t1.getData();

    return 0;
}