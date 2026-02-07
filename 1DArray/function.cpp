//Qs 3.write a function that take two parameters to print all the odd numbers between a given range .Input the starting value of the range and ending value of the range.Then send them as a parameter to your function.

#include<iostream>
using namespace std;
void oddNumInRange(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int startValue;
    int endValue;
    cin>>startValue;
    cin>>endValue;
    
    oddNumInRange(startValue,endValue);
    return 0; 
}