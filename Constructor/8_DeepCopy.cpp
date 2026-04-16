#include <iostream>
using namespace std;

class Demo {
public:
    int *data;

    Demo(int val) {
        data = new int(val);
    }

    // Deep Copy Constructor
    Demo(const Demo &obj) {
        data = new int(*obj.data);  // NEW memory
    }
};

int main() {
    Demo obj1(10);
    Demo obj2 = obj1;  // Deep copy

    *obj2.data = 20;

    cout << *obj1.data << endl; // Output: 10
}