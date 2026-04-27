#include <iostream>
#include <string>
using namespace std;

// ========== BASE CLASS ==========
class Vehicle
{
protected:
    int id;
    string manufacturer, model;
    int year;

public:
    static int count; // total number of vehicles

    // Parameterized Constructor
    Vehicle(int i, string manu, string mod, int y)
    {
        id = i;
        manufacturer = manu;
        model = mod;
        year = y;
        count++;
    }

    // Getter function
    int getID()
    {
        return id;
    }

    // Virtual display (for polymorphism)
    virtual void display()
    {

        // cout << "\n//---- Vehicle Details ----//"<<endl;
        cout << "\nID: " << id;
        cout << "\nManufacturer: " << manufacturer;
        cout << "\nModel: " << model;
        cout << "\nYear: " << year << endl;
    }

    virtual ~Vehicle() {}
};

int Vehicle::count = 0;

//  CAR (Single Inheritance)
class Car : public Vehicle
{
protected:
    string fuel;

public:
    Car(int i, string manu, string mod, int y, string f)
        : Vehicle(i, manu, mod, y)
    {
        fuel = f;
    }

    void display()
    {
        Vehicle::display();
        cout << "Fuel Type: " << fuel << endl;
    }
};

// ELECTRIC CAR (Multilevel Inheritance)
class ElectricCar : public Car
{
    int battery;

public:
    ElectricCar(int i, string manu, string mod, int y, string f, int b)
        : Car(i, manu, mod, y, f)
    {
        battery = b;
    }

    void display()
    {
        Car::display();
        cout << "Battery Capacity: " << battery << " kWh" << endl;
    }
};

// SPORTS CAR (Multilevel Inheritance)
class SportsCar : public ElectricCar
{
    int speed;

public:
    SportsCar(int i, string manu, string mod, int y, string f, int b, int s)
        : ElectricCar(i, manu, mod, y, f, b)
    {
        speed = s;
    }

    void display()
    {
        ElectricCar::display();
        cout << "Top Speed: " << speed << " km/h" << endl;
    }
};

// SEDAN (Hierarchical Inheritance)
class Sedan : public Car
{
public:
    Sedan(int i,string manu, string mod, int y, string f)
        : Car(i, manu, mod, y, f) {}

    void display()
    {
        cout << "\n====== Sedan Vehicle ======";
        Car::display();
    }
};

// SUV (Hierarchical Inheritance)
class SUV : public Car
{
public:
    SUV(int i, string manu, string mod, int y, string f)
        : Car(i, manu, mod, y, f) {}

    void display()
    {
        cout << "\n====== SUV Vehicle ======";
        Car::display();
    }
};

// AIRCRAFT
class Aircraft
{
protected:
    int range;

public:
    Aircraft(int r)
    {
        range = r;
    }

    void displayFlight()
    {
        cout << "Flight Range: " << range << " km" << endl;
    }
};

// FLYING CAR (Multiple Inheritance)
class FlyingCar : public Car, public Aircraft
{
public:
    FlyingCar(int i, string manu, string mod, int y, string f, int r)
        : Car(i, manu, mod, y, f), Aircraft(r) {}

    void display()
    {
        cout << "\n====== Flying Car ======";
        Car::display();
        displayFlight();
    }
};

// ========== MAIN FUNCTION ==========
int main()
{
    Vehicle *arr[100]; // Array of base class pointers
    int count = 0;

    int choice, type, id, year;
    string manu, model, fuel;

    do
    {
        cout << "\n//.... VEHICLE REGISTRY SYSTEM ....//" << endl;
        cout << "\n1. Add Vehicle";
        cout << "\n2. Display All Vehicles";
        cout << "\n3. Search Vehicle by ID";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nAll Vehicle Type";
            cout << "\n1. Car";
            cout << "\n2. Electric Car";
            cout << "\n3. Sports Car";
            cout << "\n4. Sedan";
            cout << "\n5. SUV";
            cout << "\n6. Flying Car";
            cout << "\nSelect Vehicle Type: ";
            cin >> type;

            // Validation
            if (type < 1 || type > 6)
            {
                cout << "\nInvalid Vehicle Type! Try Again.\n";
                break; // go back to main menu
            }

            cout << "\nEnter Vehicle Details:";
            cout << "\nID: ";
            cin >> id;

            cin.ignore();
            cout << "Manufacturer: ";
            getline(cin, manu);

            cout << "Model: ";
            getline(cin, model);

            cout << "Year: ";
            cin >> year;

            cout << "Fuel Type: ";
            cin >> fuel;

            // Creating objects dynamically
            if (type == 1)
                arr[count++] = new Car(id, manu, model, year, fuel);

            else if (type == 2)
            {
                int b;
                cout << "Battery (kWh): ";
                cin >> b;
                arr[count++] = new ElectricCar(id, manu, model, year, fuel, b);
            }

            else if (type == 3)
            {
                int b, s;
                cout << "Battery: " << endl;
                cin >> b;
                cout << "Speed: " << endl;
                cin >> s;
                arr[count++] = new SportsCar(id, manu, model, year, fuel, b, s);
            }

            else if (type == 4)
                arr[count++] = new Sedan(id, manu, model, year, fuel);

            else if (type == 5)
                arr[count++] = new SUV(id, manu, model, year, fuel);

            else if (type == 6)
            {
                int r;
                cout << "Flight Range: ";
                cin >> r;
                arr[count++] = new FlyingCar(id, manu, model, year, fuel, r);
            }

            cout << "\nVehicle Added Successfully!\n";
            break;

        case 2:
            if (Vehicle::count == 0)
            {
                cout << "Vehicle Not Founded, System is Empty..!" << endl;
            }

            else
            {
                for (int i = 0; i < Vehicle::count; i++)
                {
                    cout << "\n|| ==> Vehicles - " << i + 1 << " Details <== ||" << endl;
                    arr[i]->display();
                }
            }
            break;

        case 3:
        {
            int searchID;
            cout << "\nEnter Vehicle ID to search: ";
            cin >> searchID;

            int found = 0;
            for (int i = 0; i < count; i++)
            {
                if (arr[i]->getID() == searchID)
                {
                    cout << "\n//=== Vehicle Found === //" << endl;
                    arr[i]->display();
                    found = 1;
                }
            }

            if (!found)
                cout << "\nInvalid Id,Vehicle Not Found\n";

            break;
        }

        case 4:
            cout << "\n---------------------------------------\n";
            cout << "\nTotal Vehicles Registered: " << Vehicle::count;
            cout << "\n\nThank You for using the system!";
            break;

        default:
            cout << "\nInvalid Choice! Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}