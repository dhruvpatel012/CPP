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

// output:- 

// Enter a size of row:5
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 