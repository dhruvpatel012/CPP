#include<iostream>
using namespace std;

int getData(int a, int b){
    return (a>b)? a : b;
}

int main(){

    int num1,num2;

    cout<<"Enter Num1 & Num2: ";
    cin>>num1>>num2;

    cout<<"Max is: "<<getData(num1,num2);

    return 0;
}