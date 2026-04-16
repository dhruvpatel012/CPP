#include <iostream>
using namespace std;

class Demo
{
public:
    int *data;

    Demo(int val)
    {
        data = new int(val);
    }
};

int main()
{

    Demo obj1(10); //Memory looks like:- obj1:data ---> [10] (heap memory)
    cout << *(obj1.data) << endl; // here * is used for data not for object and its give output: 10

    Demo obj2 = obj1;
    *(obj2.data) = 20;
    cout << *(obj2.data) << endl; // output: 20
    cout << *(obj1.data) << endl; // output : 20

    return 0;
}