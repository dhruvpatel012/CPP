#include<iostream>
#include<string.h>
using namespace std;

class Student{

    private:
       string name;
       int rollNumber;

       public:
         Student(string name,int rollNumber){
            this->name = name;
            this->rollNumber = rollNumber;
         }

         void displayInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll Number: "<<rollNumber<<endl<<endl;
         }
};

int main(){

    Student students[] = {
        Student("Dhruv",178),
        Student("Deep",179),
        Student("Dirgh",180)
    };

    int size = sizeof(students) / sizeof(students[0]);

    for(int i = 0; i<size; i++){
        cout<<"\nStudent Information - "<<i+1<<endl<<endl;
        students[i].displayInfo();
    }

    return 0;
}