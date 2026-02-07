//Qs 2.Initialize an array of 10 elements and print how many numbers are odd and how many numbers are even.

#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout << "Enter 10 elements of an array :\n";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int oddCount=0;
    int evenCount=0;
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    cout<<"even numbers : "<<evenCount<<endl;
    cout<<"odd numbers : "<<oddCount<<endl;  
    return 0;
}