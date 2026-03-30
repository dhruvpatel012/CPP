#include <iostream>
using namespace std;

int main()
{

    int i, j, k, size;

    cout << "Enter a size of row:";
    cin >> size;

    for (i = size; i >= 1; i--)
    {
        for (k = 1; k <= i - 1; k++)
        {
            cout << " ";
        }

        for (j = size; j >= i; j--)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

// output:- 

// Enter a size of row:5
//     *
//    **
//   ***
//  ****
// *****