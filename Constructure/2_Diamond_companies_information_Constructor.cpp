#include <iostream>
#include <string>
using namespace std;

class diamondCompany
{
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    float comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    // Parameterized constructor
    diamondCompany(int id, string name, int quantity, float revenue,int import, int export_diamond, string ceo)
    {
        comp_id = id;
        comp_name = name;
        comp_staff_quantity = quantity;
        comp_revenue = revenue;
        comp_import_raw_diamonds = import;
        comp_export_diamonds = export_diamond;
        comp_ceo = ceo;
    }

    void printData()
    {
        cout << "\n\n||----==== Diamond Company Information =====----- ||" << endl;
        cout << "\nId: " << comp_id << endl;
        cout << "Name: " << comp_name << endl;
        cout << "Staff Quantity: " << comp_staff_quantity << endl;
        cout << "Revenue (Per Year): " << comp_revenue << " Cr" << endl;
        cout << "Import Raw Diamond (Per Year): " << comp_import_raw_diamonds << endl;
        cout << "Export Diamond (Per Year): " << comp_export_diamonds << endl;
        cout << "CEO: " << comp_ceo << endl;
    }
};

int main()
{
    int id, quantity, import, export_diamond;
    float revenue;
    string name, ceo;

      cout << "\n\n|| ----==== Enter Diamond Company Information =====----- ||" << endl;

    cout << "\n\nEnter Id: ";
    cin >> id;

    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Staff Quantity: ";
    cin >> quantity;

    cout << "Enter Revenue (Per Year): ";
    cin >> revenue;

    cout << "Enter Import Raw Diamond (Per Year): ";
    cin >> import;

    cout << "Enter Export Diamond (Per Year): ";
    cin >> export_diamond;

    cin.ignore();
    cout << "Enter CEO Name: ";
    getline(cin, ceo);

    // Passing user input to constructor
    diamondCompany c1(id, name, quantity, revenue, import, export_diamond, ceo);

    c1.printData();

    return 0;
}