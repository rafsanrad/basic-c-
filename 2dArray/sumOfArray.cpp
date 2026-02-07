//Qs 4.Write a program to perform matrix addition between 3 matrices.

#include<iostream>
using namespace std;
int main (){
    int arr1 [3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr2 [3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr3 [3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum [3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum [i][j]= arr1 [i][j]+ arr2 [i][j] + arr3 [i][j];
        }
    }
    cout<<"Sum of 3 array : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<sum [i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}