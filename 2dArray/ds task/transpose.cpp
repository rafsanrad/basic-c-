// 1. Initialize a matrix of minimum 3x4 (row x column) size. Output its transpose matrix.
// For example,
// Matrix_1:
// 1 6 7 9
// 2 4 8 5
// 3 1 9 4
// Output:
// 1 2 3
// 6 4 1
// 7 8 9
// 9 5 4


#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={{1,6,7,9},{2,4,8,5},{3,1,9,4}};
    int transpose[4][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            transpose[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}