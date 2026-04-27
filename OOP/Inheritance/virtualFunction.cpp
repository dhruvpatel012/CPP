#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void pay() // virtual function
    {
        cout << "Processing Payment..." << endl;
    }
};

class UPI : public Payment
{
public:
    void pay()
    {
        cout << "Payment done using UPI..."<<endl;
    }
};

class creditCard : public Payment
{
public:
    void pay()
    {
        cout << "Payment done using Credit Card..."<<endl;
    }
};

int main()
{

    Payment *p;
    UPI u;
    creditCard c;

    p = &u;
    p->pay(); // UPI

    p = &c;
    p->pay(); // Credit Card

    return 0;
}