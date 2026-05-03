#include <iostream>
#include<string.h>
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

    virtual void display() const = 0;

    virtual double calculateDiscount() const = 0;

    virtual ~Device() {}
};

// ---------------- Laptop ----------------
class Laptop : public Device
{
public:
    void display() const override
    {
        cout << "\nLaptop - Brand: " << getBrand()
             << ", Power: " << getPower() << "W";
    }

    double calculateDiscount() const override
    {
        double power = getPower();

        //Discount Based on Power Consumption
        if (power <= 50)
            return 12.0;  
        else if (power <= 80)
            return 8.0;
        else
            return 5.0;
    }
};

// ---------------- Smartphone ----------------
class Smartphone : public Device
{
public:
    void display() const override
    {
        cout << "\nSmartphone - Brand: " << getBrand()
             << ", Power: " << getPower() << "W";
    }

    double calculateDiscount() const override
    {
        double power = getPower();

        //Discount Based on Power Consumption
        if (power <= 20)
            return 10.0;
        else if (power <= 35)
            return 6.0;
        else
            return 3.0;
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

    // Polymorphism
    Device* devices[2];
    devices[0] = &l;
    devices[1] = &s;

    for (int i = 0; i < 2; i++)
    {
        devices[i]->display();

        double discount = devices[i]->calculateDiscount();
        cout << "\nDiscount: " << discount << "%";

        cout << "\n---------------------------";
    }

    return 0;
}