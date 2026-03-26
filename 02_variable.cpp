#include <iostream>
#include<string>
using namespace std;

int main()
{
    int studentId, studentMarks;
    string studentName, studentGrade;

    cout << "Enter Student Id: ";
    cin >> studentId;

    cout << "Enter student Name: ";
    cin >> studentName;

    cout << "Enter student Marks: ";
    cin >> studentMarks;

    cout << "Enter student Grade: ";
    cin >> studentGrade;

    cout << "\n\n===== Student Details =====\n\n"
         << endl;

    cout << "Student Id: " << studentId << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Student Marks: " << studentMarks << endl;
    cout << "Student Grade: " << studentGrade << endl;

    return 0;
}
