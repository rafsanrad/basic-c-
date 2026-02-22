//Build a program that has two arrays where the size of each array is 6 to store integer numbers. Later, the program multiplies each index element of the first array with each index element of the second array, but in the opposite order of the second array’s indexes.

#include <iostream>
using namespace std;

int main() {
    int arr1[6], arr2[6], result[6];

    cout << "Enter 6 elements for first array: ";
    for(int i = 0; i < 6; i++) {
        cin >> arr1[i];
    }

    cout << "Enter 6 elements for second array: ";
    for(int i = 0; i < 6; i++) {
        cin >> arr2[i];
    }

    for(int i = 0; i < 6; i++) {
        result[i] = arr1[i] * arr2[5 - i];  // Reverse index
    }

    cout << "Result Array: ";
    for(int i = 0; i < 6; i++) {
        cout << result[i] << " ";
    }

    return 0;
}