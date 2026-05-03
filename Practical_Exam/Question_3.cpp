#include <iostream>
using namespace std;

class Device
{
private:
    string brand;
    double powerConsumption;

public:
    void setBrand(string b)
    {
        brand = b;
    }

    void setPower(double p)
    {
        powerConsumption = p;
    }

    string getBrand() const
    {
        return brand;
    }
    double getPower() const
    {
        return powerConsumption;
    }

    virtual void display() const = 0; // abstraction
    
    virtual ~Device() {}
};

// ---------------- Laptop ----------------

class Laptop : public Device
{
public:
    void display() const override
    {
        cout<<"\n|| ==== Brand-Information ==== ||\n";
        cout << "\nLaptop - Brand: " << getBrand() << ", Power: " << getPower() << "W" << endl;
        cout<<"----------------------------------------";
    }
};

// ---------------- Smartphone ----------------

class Smartphone : public Device
{
public:
    void display() const override
    {
        cout << "\nSmartphone - Brand: " << getBrand() << ", Power: " << getPower() << "W" << endl;
    }
};

int main()
{
    Laptop l;
    l.setBrand("Dell");
    l.setPower(65);

    Smartphone s;
    s.setBrand("Samsung");
    s.setPower(25);

    l.display();
    s.display();

    return 0;
}