#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empId;
    string empName;
    int empSalary;

public:
    void GetEmpInfo()
    {
        cout << "Enter Employee Id: ";
        cin >> empId;

        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, empName);

        cout << "Enter Employee Salary: ";
        cin >> empSalary;
    }

    void DisplayEmpInfo()
    {
        cout << "\n|| ---=== Employee Information ===--- ||" << endl;
        cout << "\nempId: " << empId << endl;
        cout << "empName: " << empName << endl;
        cout << "empSalary: " << empSalary << endl;
    }
};

class Developer : public Employee
{
private:
    string codingLanguage;

public:
    void GetDevInfo()
    {
        cin.ignore();
        cout << "Enter Programming Language: ";
        getline(cin, codingLanguage);
    }

    void DisplayDevInfo()
    {
        cout << "\n|| ---=== Developer Information ===--- ||" << endl;
        cout << "\nProgramming Language: " << codingLanguage << endl;
    }
};

int main()
{

    Developer d1;

    d1.GetEmpInfo();
    d1.GetDevInfo();
    d1.DisplayEmpInfo();
    d1.DisplayDevInfo();

        return 0;
}