/*
 * Filename: matrix-transpose-6.cpp
 * Week: 5
 * Description: Matrix Transpose 6
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 * - 2D arrays / matrices
 */


#include <iostream>
using namespace std;


// Function: add col matrix
int add_col_matrix(int matrix[3][3], int col_num){
    int sum = 0;

    for (int j = 0; j < 3; j++){
        sum += matrix[col_num][j];
    }
    return sum;
}

// Main program starts here
int main(){
    int col_num;
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,7,9}};
    cout<<"Enter the colum number: ";

    // Get input from user
    cin>>col_num;


    // Display results
    cout<<"Sum = "<<add_col_matrix(matrix, col_num);

    
    

    return 0;
}