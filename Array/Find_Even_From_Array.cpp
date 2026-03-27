#include <iostream>
using namespace std;

int main()
{

    int size,count=0;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "\nEven Elements Are: " << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        { 
            count++;
            cout << "\narr[" << i << "] = " << arr[i];

        }
    }

     cout<<"\n\nTotal even elements are: "<<count;

    return 0;
}