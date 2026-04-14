#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int id;
    string address;

    student(string name, int id, string address)
    {

        this->name = name;
        this->id = id;
        this->address = address;
    }

    void showInfo()
    {
        cout << "Name: " << name << endl;
        cout << "id: " << id << endl;
        cout << "address: " << address << endl;
    }
};

int main()
{

    student s1("Nobita", 178, "Gujarat");
    // s1.showInfo();

    student s2(s1); // default copy constructor invoke(call)...
    s2.showInfo(); 

    return 0;
}