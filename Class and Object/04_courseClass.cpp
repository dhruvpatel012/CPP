#include<iostream>
using namespace std;

class course{
       int courseId;
       string courseName;
       int courseCredit;
       string courseDuration;
       int courseFee;

       public:

       void getCourseData(){
        cout<<"Enter Course Id: ";
        cin>>courseId;

        cout<<"Enter Course Name: ";
        cin>>courseName;

        cout<<"Enter Course Credit: ";
        cin>>courseCredit;

        cout<<"Enter Course Duration: ";
        cin>>courseDuration;

        cout<<"Enter Course Fee: ";
        cin>>courseFee;
       }

       void printCourseData(){
        cout<<"Course Id: "<<courseId<<endl;
        cout<<"Course Name: "<<courseName<<endl;
        cout<<"Course Credit: "<<courseCredit<<endl;
        cout<<"Course Duration: "<<courseDuration<<endl;
        cout<<"Course Fee: "<<courseFee<<endl;
       }
}c; //declare object at the end of class


int main(){

    course c[3];

       for(int i=0; i<3; i++){
        cout<<"\n\n---=== Get Course Data ===---"<<endl;
        c[i].getCourseData();
       }

       for(int i=0; i<3; i++){
        cout<<"\n---=== Course Details-"<<i+1<<" ===---"<<endl;
        c[i].printCourseData();
       }

    return 0;
}