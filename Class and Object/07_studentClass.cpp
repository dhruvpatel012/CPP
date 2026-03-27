#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int stuId;
    string stuName;
    int stuAge;
    string stuCourse;
    string stuCity;
    string stuEmail;
    string stuCollage;

public:
    void getData()
    {
        cout << "Id: ";
        cin >> stuId;

        cin.ignore();
        cout << "Name: ";
        getline(cin, stuName);

        cout << "Age: ";
        cin >> stuAge;

        cin.ignore();
        cout << "Course: ";
        getline(cin, stuCourse);

        cout << "City: ";
        getline(cin, stuCity);

        cout << "Email: ";
        getline(cin, stuEmail);

        cout << "Collage: ";
        getline(cin, stuCollage);
    }

    void printData()
    {

        cout << "\n\n|| ----==== Student Information ----==== ||" << endl;
        cout << "\nId: " << stuId << endl;
        cout << "Name: " << stuName << endl;
        cout << "Age: " << stuAge << endl;
        cout << "Course: " << stuCourse << endl;
        cout << "City: " << stuCity << endl;
        cout << "Email: " << stuEmail << endl;
        cout << "Collage: " << stuCollage << endl;
    }
};

int main()
{

    Student s[2];

   cout << "Enter details of 2 students:\n";

   for(int i=0; i<2; i++){
    cout<<"\nStudent "<<i+1<<":\n";
    s[i].getData();
   }

   for(int i=0; i<2; i++){
    s[i].printData();
   }



    return 0;
}