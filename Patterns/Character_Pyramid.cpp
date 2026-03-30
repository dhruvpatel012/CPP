#include<iostream>
using namespace std;

int main(){

    char ch='A';
    int size;

    cout<<"Enter size of row: ";
    cin>>size;

    for(int i=1; i<=size; i++){
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
            ch += 1;
        }
        cout<<endl;
    }

    return 0;
}

// output:- 

// Enter size of row: 5
// A 
// B C 
// D E F 
// G H I J 
// K L M N O 