//Qs 5.Write a function to calculate factorial of a given integer number if that number is a prime number.If it is not,it will give an error.

#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool isPrime=true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(n==0 || n==1) cout<<"neithe prime nor composite.\n";
    else if(isPrime==true){
        cout << "Factorial of " << n << " is " << fact(n) << endl;
    }
    else cout<<"Error ! not a prime number.\n";
    
    return 0;
}