// Multiple cases --> same block

#include <iostream>
using namespace std;

int main()
{

    char ch;

    cout << "Enter any single character from a to z : ";
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "It is Vowel...";
        break;

    default:
        cout << "It is consonant";
    }
     return 0;
}
