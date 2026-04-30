#include<iostream>
using namespace std;

class Vehicle{

    protected:
    int id;
    string manufacture,model;
    int year;

    public:
    static int count;

    Vehicle(int i,string manu,string mod,int y){
        id = i;
        manufacture = manu;
        model = mod;
        year = y;
        count++;
    }

    int getId(){
        return id;
    }

    virtual void display(){
        cout<<"Id: "<<id<<endl;
        cout<<"Manufacture: "<<manufacture<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
    }

    virtual ~Vehicle(){}
};

int Vehicle::count = 0;

class Car : public Vehicle{
    protected:
      string fuel;
    Car(int i,string manu,string mod,int y,string f) : Vehicle(i,manu,mod,y){
        fuel = f;
    }

    void display(){
        Vehicle::display();
        cout<<"Fuel Type: "<<fuel<<endl;
    }
};

int main(){
    
    return 0;
}