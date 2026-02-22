#include<iostream>
using namespace std;

int main(){
    int A[5] = {1,2,3,4,5};
    int B[3] = {1,2,7};
    int C[3] = {0};
    bool is_that_value_present_in_the_new_array = false;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            if(A[i] == B[j]){

                is_that_value_present_in_the_new_array = false;   // reset flag

                for(int k = 0; k < 3; k++){
                    if(A[i] == C[k]){
                        is_that_value_present_in_the_new_array = true;
                    }
                }

                if(is_that_value_present_in_the_new_array == false){
                    C[i] = A[i];
                }
            }
        }
    }

    // Print C array
    cout << "Array C: ";
    for(int i = 0; i < 3; i++){
        cout << C[i] << " ";
    }

    return 0;
}
