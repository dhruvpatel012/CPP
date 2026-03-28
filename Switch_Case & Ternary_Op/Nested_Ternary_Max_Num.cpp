#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter value of num1: ";
    cin >> num1;

    cout << "Enter value of num2: ";
    cin >> num2;

    cout << "Enter value of num3: ";
    cin >> num3;

    int max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    cout << "\nMax value is: " << max;

    return 0;
}