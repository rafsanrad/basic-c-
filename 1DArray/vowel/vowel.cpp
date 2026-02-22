// Write a C++ program to take N characters in an array but only output the vowels from those characters

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of characters: ";
    cin >> n;

    char arr[n];

    cout << "Enter characters: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Vowels are: ";
    for(int i = 0; i < n; i++) {
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || 
           arr[i]=='o' || arr[i]=='u' ||
           arr[i]=='A' || arr[i]=='E' || 
           arr[i]=='I' || arr[i]=='O' || arr[i]=='U') {
            cout << arr[i] << " ";
        }
    }

    return 0;
}