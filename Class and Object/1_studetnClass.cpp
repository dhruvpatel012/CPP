// using static vlaues

#include <iostream>
using namespace std;

class Student
{
private:
    string studentName;
    int studentId;

public:
    //using setter function to set value
    void setData(string n, int a)
    {
        studentName = n;
        studentId = a;
    }

    // using getter function to get value
    void getData()
    {
        cout << "Name: " << studentName << endl;
        cout << "Id: " << studentId << endl;
    }
};

int main()
{

    Student s1,s2;

    s1.setData("Dhruv",178);
    s1.getData();
    
    cout<<endl;

    s2.setData("Pranpiyu",1);
    s2.getData();

    return 0;
}