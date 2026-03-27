#include <iostream>
using namespace std;

int main()
{

    int year1, year2;

    cout << "Enter the first year: ";
    cin >> year1;

    cout << "Enter the second year: ";
    cin >> year2;

    int arr[100];
    int index = 0;

    for (int i = year1; i <= year2; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            arr[index] = i;
            index++;
        }
    }

    cout << "\nThe array is: ";

    for (int i = 0; i < index; i++)
    {

        if (i > 0)
        {
            cout << ",";
        }

        cout << arr[i];

        // if (i != index - 1)
        // {
        //     cout << ", ";
        // 
        //} second trick to print comma
    }

    return 0;
}