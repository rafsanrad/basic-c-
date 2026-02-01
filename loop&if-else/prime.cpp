#include<iostream>
using namespace std;
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
    else if(isPrime==true) cout<<"Prime no\n";
    else cout<<"Non prime no\n";
    
    return 0;
}