#include <iostream>
using namespace std;

int main()
{

    int i, j, size,num=1;

    cout << "Enter a size of row:";
    cin >> size;

    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout <<num<<" ";
            num++;
        }
        cout<<endl;
    }

    return 0;
}