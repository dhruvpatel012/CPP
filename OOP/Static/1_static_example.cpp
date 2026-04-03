#include<iostream>
using namespace std;

class bankInfo{

    string account_id;
    string account_name;
    int account_balance;
    
        static int totalAccount;
        static int totalBalance;
    
    public:
        void takeData(string id, string name,int balance){
            account_id = id;
            account_name = name;
            account_balance = balance;
    
            totalAccount++;
            totalBalance += balance;
        }

    void showData(){
        cout<<"\nAccout id: "<<account_id<<endl;
        cout<<"Account Name: "<<account_name<<endl;
        cout<<"Account Balance: "<<account_balance<<endl;
    }

    void bankReport(){
        cout<<"\n\n|| ----==== Bank Details ====----||\n\n";
        cout<<"Total Account: "<<totalAccount<<endl;
        cout<<"Total Balance: "<<totalBalance<<endl;
    }
};

int bankInfo::totalAccount = 0;
int bankInfo::totalBalance = 0;

int main(){

    bankInfo b1,b2;
    
    b1.takeData("6677889955","Dhruv",100000);
    b2.takeData("6677889944","Ram",200000);

    b1.showData();
    b2.showData();

    b1.bankReport();

    return 0;
}