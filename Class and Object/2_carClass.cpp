// using static vlaues

#include <iostream>
using namespace std;

class Car
{
private:
   string carName;
   string carColor;
   string carBrand;
   float carValue;

public:
   // using setter function to set value
   void getData(string n, string c, string b, float v)
   {
      carName = n;
      carColor = c;
      carBrand = b;
      carValue = v;
   }

   // using getter function to get value
   void setData()
   {
      cout << "Car Name: " << carName << endl;
      cout << "Car Color: " << carColor << endl;
      cout << "Car Brand: " << carBrand << endl;
      cout << "Car Value: " << carValue << endl;
   }
};

int main()
{

   Car c1, c2;

   c1.getData("AMG-Addition", "Black", "Mercedes", 1.55);
   c1.setData();

   cout << endl;

   c2.getData("M5-Addition", "White", "BMW", 2.52);
   c2.setData();

   return 0;
}