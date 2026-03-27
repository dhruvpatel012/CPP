#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeId;
    string employeeName;
    string employeeDepartment;
    int employeeSalary;
    string employeeCity;

public:
    void getInfo()
    {
        cout <<"Enter Employee Id: ";
        cin >> employeeId;

        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, employeeName);

        cout << "Enter Employee Department: ";
        getline(cin, employeeDepartment);

        cout << "Enter Employee Salary: ";
        cin >> employeeSalary;

        cin.ignore();
        cout << "Enter Employee City: ";
        getline(cin,employeeCity);
    }

    void printInfo();

};

// used scope reosolution operator :: for writting a definition of printInfo funtion which is declare in Employee class. 
void Employee::printInfo(){
    cout<<"\n|| ---=== EMPLOYEE INFORMATION ---=== ||"<<endl;
    cout<<"\nEmployee ID: "<<employeeId<<endl;
    cout<<"Employee NAME: "<<employeeName<<endl;
    cout<<"Employee DEPARTMENT: "<<employeeDepartment<<endl;
    cout<<"Employee SALARY: "<<employeeSalary<<endl;
    cout<<"Employee City: "<<employeeCity<<endl;
}


int
main()
{

    Employee e1;

    e1.getInfo();
    e1.printInfo();

    return 0;
}