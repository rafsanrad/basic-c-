#include<iostream>
using namespace std;
int main()
{
    int A[5]={1,2,3,4,5};
    int B[3]={101,102,103};

    int new_arr_size=5+3;
    int C[new_arr_size];

    int count=0;
    for(int i=2; i>=0; i--)
    {
        C[count]=B[i];
        cout<<C[count]<<" ";
        count++;

    }

     for(int i=4; i>=0; i--)
    {
        C[count]=A[i];
        cout<<C[count]<<" ";
        count++;
    }




}