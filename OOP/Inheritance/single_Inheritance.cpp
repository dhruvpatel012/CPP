#include <iostream>
#include <string>
using namespace std;

// base class
class Student
{
private:
    int studentId;
    std::string studentName;
    std::string courseName;

public:
    void getInfo()
    {
        cout << "Enter studentId: ";
        cin >> studentId;

        cin.ignore();
        cout << "Enter studentName: ";
        getline(cin, studentName);

        cout << "Enter courseName: ";
        getline(cin, courseName);
    }

    void displayInfo()
    {
        cout << "\n\n|| ---=== STUDENT INFORMATION ===---- ||" << endl;
        cout << "studentId: " << studentId << endl;
        cout << "studentName: " << studentName << endl;
        cout << "courseName: " << courseName << endl;
    }
};

// derived class
class Faculty : public Student
{

private:
    int facultyId;
    string facultyName;

public:
    void getFaculty()
    {
        cout << "Enter facultyId: ";
        cin >> facultyId;

        cin.ignore();
        cout << "Enter facultyName: ";
        getline(cin, facultyName);
    }

    void displayFaculty()
    {
        cout << "\n\n|| ---=== Faculty INFORMATION ===---- ||" << endl;
        cout << "facultyId: " << facultyId << endl;
        cout << "facultyName: " << facultyName << endl;
    }
};

int main()
{
    Faculty f1;

    f1.getFaculty();
    f1.getInfo();
    f1.displayFaculty();
    f1.displayInfo();

    return 0;
}