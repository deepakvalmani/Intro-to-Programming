/*
 * Filename: matrix-transpose-4.cpp
 * Week: 5
 * Description: Matrix Transpose 4
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - 2D arrays / matrices
 * - Recursion
 */


#include <iostream>
using namespace std;



// Function: matmult
int matmult(int matA[4][4], int matB[4][4],int matC[4][4], int i = 0, int j = 0, int k = 0){
    
    if (i >= 4){
        return 0;
    }
    if (j >= 4){
        return matmult(matA, matB, matC, i+1, 0, 0);
    }
    if (k >= 4){
        return matmult(matA,matB, matC, i, j+1, 0);
    }
    matC[i][j] += matA[i][k] * matB[k][j];
    return matmult(matA, matB, matC, i, j, k +1 );

}


// Main program starts here
int main() {
    int matrixA[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int matrixB[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int matrixC[4][4] = {0};
    matmult(matrixA, matrixB, matrixC);

    // Perform calculations
    for(int i = 0; i <4; i++){
        for(int j = 0; j <4; j++){

    // Display results
            cout<<matrixC[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}