#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int posCount=0,negCount=0,zeroCount=0;
    int sumPos=0,sumNeg=0;

    cout<<"Enter 10 elements : "<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    cout<<"Arr : ";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<10;i++){
        if(arr[i] > 0){
            posCount++;
            sumPos += arr[i];
        }
        else if(arr[i] < 0){
            negCount++;
            sumNeg += arr[i];
        }
        else{
            zeroCount++;
        }
    }
    cout<<"Positive : "<<posCount<<endl;
    cout<<"Negative : "<<negCount<<endl;
    cout<<"Zero : "<<zeroCount<<endl;
    cout<<"Sum of Positive Numbers : "<<sumPos<<endl;
    cout<<"Sum of Negative Numbers : "<<sumNeg<<endl;

    if(sumPos > sumNeg){
        cout<<"Positive sum is greater"<<endl;
    }
    else{
        cout<<"Negative sum is greater"<<endl;
    }

    return 0;
}
