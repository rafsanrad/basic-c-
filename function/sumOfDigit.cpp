#include<iostream>
using namespace std;
int sumOfDigit(int n){
    int digitSum=0;
    while (n>0)
    {
        int lastDigit=n%10;
        n/=10;
        digitSum+=lastDigit;
    }
    return digitSum;
    
}
int main(){
    cout<<sumOfDigit(505)<<endl;
    return 0;
}