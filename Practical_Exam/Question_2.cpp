#include<iostream>
#include<string.h>
using namespace std;

class Car{

    private:
       string model;
       int year;
       double speed;

       public:

       void getInfo(){

        cout<<"\nEnter Car Model: ";
        getline(cin,model);

        cout<<"Enter Year: ";
        cin>>year;

        cout<<"Enter Car speed (Km/h): ";
        cin>>speed;
       }

       void disPlayInfo(){

        cout<<"\n||---- Car Information ---- ||\n";
        cout<<"\nCar Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
        cout<<"Speed: "<<speed<<" Km/h"<<endl;
        
       }

};

int main(){

    Car c1;

    c1.getInfo();
    c1.disPlayInfo();
    
    return 0;
}