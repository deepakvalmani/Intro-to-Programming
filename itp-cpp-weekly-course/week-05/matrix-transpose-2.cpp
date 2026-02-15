/*
 * Filename: matrix-transpose-2.cpp
 * Week: 5
 * Description: Matrix Transpose 2
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 * - 2D arrays / matrices
 * - Recursion
 */


#include <iostream>
using namespace std;


// Function: transpose m
void transpose_m(int matrix[4][3], int matrix_t[3][4]){
    for(int i = 0; i < 3;i++){
        for (int j = 0; j < 4; j++){
            matrix_t[i][j] = matrix[j][i];
        }
    }
}
    

    

// Main program starts here
int main(){
    int matrix[4][3];
    int matrix_t[3][4];
    cout<<"Enter matrix (4x3): ";

    // Perform calculations
    for(int i = 0; i < 4;i++){
        for (int j = 0; j < 3; j++){

    // Get input from user
            cin>>matrix[i][j];
        }
    }
    

    transpose_m(matrix, matrix_t);

    for(int i = 0; i < 3;i++){
        for (int j = 0; j < 4; j++){

    // Display results
            cout<<matrix_t[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}