/*
 * Filename: matrix-transpose-3.cpp
 * Week: 5
 * Description: Matrix Transpose 3
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 * - 2D arrays / matrices
 * - Recursion
 */


#include <iostream>
using namespace std;


// Function: add matrix
void add_matrix(int arr1[3][4], int arr2[3][4], int arr3[3][4]){
    for(int i = 0; i < 3;i++){
        for (int j = 0; j < 4; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

// Main program starts here
int main(){
    int arr1[3][4] = {{2,5,7,1}, {1,3,6,1}, {5,4,1,3}};
    int arr2[3][4] = {{1,9,5,0}, {7,1,5,4}, {3,4,2,8}};
    int arr3[3][4];

    add_matrix(arr1, arr2, arr3);
    

    // Perform calculations
    for(int i = 0; i < 3;i++){
        for (int j = 0; j < 4; j++){

    // Display results
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
