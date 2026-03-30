#include <iostream>
using namespace std;

int main()
{

    int i, j, size;

    cout << "Enter a size of row:";
    cin >> size;

    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}

// output:-

// Enter a size of row:5
// *
// **
// ***
// ****
// *****