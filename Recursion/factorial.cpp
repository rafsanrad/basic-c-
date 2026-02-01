#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;   // base case
    }
    return n * factorial(n - 1); // recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial = " << factorial(n);
    return 0;
}


//recursion means function calling itself