// 2. Write a Program in C++ to take a NXN Square matrix input from user. Now find the sum of all the diagonal elements. Make sure to consider all values only once.

#include <iostream>
using namespace std;

int main() { 
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int matrix[n][n];
    int sum = 0;

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Diagonal sum
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j || i + j == n - 1) {
                sum += matrix[i][j];
            }
        }
    }
    cout << "Sum of diagonal elements = " << sum << endl;

    return 0;
}

