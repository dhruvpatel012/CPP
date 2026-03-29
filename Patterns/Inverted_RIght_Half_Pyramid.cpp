#include <iostream>
using namespace std;

int main()
{
    int i, j,size;

    cout << "Enter a size of row: ";
    cin >> size;

    for (i = 1; i <= size; i++)
    {
        for (j = size; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}