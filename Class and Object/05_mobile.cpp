#include<iostream>
#include<string>
using namespace std;

class Mobile{

    private:
       string brandName;
       int  price;

       public: 
         
       void moblieInfo(){
         cout<<"Enter Mobile Brand Name: ";
         cin>>brandName;

         cout<<"Enter Mobile Brand Price: ";
         cin>>price;
       }

       void discount(){
         double discountPrice;
         discountPrice  = price * 0.02;
         cout<<"\ndiscountPrice: "<<discountPrice<<endl;

         price -= discountPrice;
         cout<<"\nAfter apply discount price: "<<price<<endl;
       }
 
       void showData(){
        cout<<"\nBrand is: "<<brandName<<endl;
        cout<<"Final Price with Disccount: "<<price<<endl;
       }

};

int main(){

    Mobile user1;

    user1.moblieInfo();
    user1.discount();
    user1.showData();

    return 0;
}