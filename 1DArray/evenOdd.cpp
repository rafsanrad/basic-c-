#include<iostream>
using namespace std;
int main(){
    int arr[10]={12,32,43,1,54,53,15,64,3,13};
    int oddCount=0;
    int evenCount=0;
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            evenCount++;
            cout<<"even numbers :"<<evenCount;   
        }
        else if (arr[i]%2!=0){
            oddCount++;
            cout<<"odd numbers :"<<oddCount;  
        }
    }
    return 0;
}