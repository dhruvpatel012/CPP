#include <iostream>
using namespace std;

int main()
{

    int num = 2;

    switch (num)
    {
    case 1:
        cout << "One" << endl;

    case 2:
        cout << "Two" << endl;

    case 3:
        cout << "Three" << endl;

    case 4:
        cout << "Four" << endl;

    default:
    cout << "It is not a number..";
        
    }
    
    return 0;
}

// output:-

// Two
// Three
// Four
// It is not a number..

// logic:- Because no break --> flow continues