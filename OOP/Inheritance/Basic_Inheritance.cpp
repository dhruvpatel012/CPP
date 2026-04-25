#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(int age, string name)
    {
        cout << "Person constructor called\n";
        this->name = name;
        this->age = age;
    }
};

class Student : public Person
{
public:
    int rollNo;

    // Calling base class constructor
    Student(int age, string name, int rollNo) : Person(age, name)
    {
        cout << "Student constructor called\n\n";
        this->rollNo = rollNo;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s(20, "Dhruv", 101);
    s.getInfo();

    return 0;
}