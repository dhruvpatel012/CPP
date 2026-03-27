#include<iostream>
#include<climits>
using namespace std;

int main(){

    int size, max = INT_MIN,i;

    cout<<"Enter Array Size: ";
    cin>>size;

    int arr[size];

    for(i=0; i<size; i++){
       cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    for(i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
            arr[size] = i;
        }
    }

    cout<<"\nMaximum Element Is: "<<max<<" & index is: "<<arr[size];


    return 0;
}