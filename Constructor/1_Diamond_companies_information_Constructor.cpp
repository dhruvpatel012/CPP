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
    diamondCompany(int id, string name, int quantity, float revenue, int import, int export_diamond, string ceo)
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

        cout<<"\n\n||----==== Diamond Company Information =====----- ||"<<endl;
        cout<<"\nId: "<<comp_id<<endl;
        cout<<"Name: "<<comp_name<<endl;
        cout<<"Staff Quantity: "<<comp_staff_quantity<<endl;
        cout<<"Revenue (Per Year): "<<comp_revenue<<"Cr"<<endl;
        cout<<"Import Raw Diamond (Per Year): "<<comp_import_raw_diamonds<<endl;
        cout<<"Export Raw Diamond (Per Year): "<<comp_export_diamonds<<endl;
        cout<<"CEO: "<<comp_ceo<<endl;
    }
};

int main()
{

    diamondCompany c1(1,"EZ-TECH",200,15.5,50000,400000,"Dhruv Patel"); // static value

    c1.printData();

    return 0;
}