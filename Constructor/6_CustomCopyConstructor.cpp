#include<iostream>
using namespace std;

class Student{

    public:
       string name;

    // normal constructor
    Student(string n){
        name = n;
        // cout<<"Name is: "<<name<<endl;
    }

    Student(const Student &s){
        name = s.name;
        cout<<"Custom Copy Constructor Called..."<<endl;
        cout<<"Name is: "<<name<<endl;
    }
};

int main(){

    Student s1("Dhruv Patel");
    Student s2 = s1;

    return 0;
}