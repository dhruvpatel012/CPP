#include <iostream>
using namespace std;

int main()
{

    int i, j, k, size;

    cout << "Enter a size of row:";
    cin >> size;

    for (i = size; i >= 1; i--)
    {

         for (k = i; k <size; k++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}