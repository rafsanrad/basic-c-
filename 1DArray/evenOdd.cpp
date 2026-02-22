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

//Create an array to store five integer numbers by asking user for the inputs. Now, develop a program that checks whether each number present in the array is an even number or an odd number and replaces the even numbers with a ‘0’ and odd numbers with a ‘1’. Later, the program prints the modified array.


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5];

//     cout << "Enter 5 integers: ";
//     for(int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }

//     for(int i = 0; i < 5; i++) {
//         if(arr[i] % 2 == 0)
//             arr[i] = 0;   // Even
//         else
//             arr[i] = 1;   // Odd
//     }

//     cout << "Modified Array: ";
//     for(int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }