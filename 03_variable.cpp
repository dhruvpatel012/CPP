#include <iostream>
using namespace std;

int main()
{
    string studentId, studentName, studentMarks, studentGrade;

    cout << "Enter Student Id: ";
    getline(cin, studentId);

    cout << "Enter Student Name: ";
    getline(cin, studentName); // full name works

    cout << "Enter Student Marks: ";
    getline(cin, studentMarks);

    cout << "Enter Student Grade: ";
    getline(cin, studentGrade);

    cout << "\n===== Student Details =====\n\n";
    cout << "Student Id: " << studentId << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Student Marks: " << studentMarks << endl;
    cout << "Student Grade: " << studentGrade << endl;

    return 0;
}