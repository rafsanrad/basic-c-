//Qs 1(1/2):Initialize an array of 10 elementts and print the array elements in reverse order.

#include<iostream>
using namespace std;
int main (){
    int arr[10];
    cout << "Enter 10 elements of an array :\n";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout << "Output of entered element :\n";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}