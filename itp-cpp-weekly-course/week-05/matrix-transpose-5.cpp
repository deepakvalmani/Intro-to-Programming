/*
 * Filename: matrix-transpose-5.cpp
 * Week: 5
 * Description: Matrix Transpose 5
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - 2D arrays / matrices
 */


#include <iostream>
using namespace std;


// Function: sum col matrix
int sum_col_matrix(int matrix[3][3], int col_num) {
    int sum = 0;
    for (int j = 0; j < 3; j++) {
        sum += matrix[j][col_num];  
    }
    return sum;
}


// Function: sum row matrix
int sum_row_matrix(int matrix[3][3], int row_num) {
    int sum = 0;
    for (int j = 0; j < 3; j++) {
        sum += matrix[row_num][j];
    }
    return sum;
}


// Function: sum diagonal matrix
int sum_diagonal_matrix(int matrix[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += matrix[i][i];
    }
    return sum;
}


// Main program starts here
int main() {
    bool check[3] = {false};
    int matrix[3][3] = {{2,7,6}, {9,3,1}, {4,3,8}};


    // Perform calculations
    for (int i = 0; i < 3; i++) {
        if (sum_col_matrix(matrix, i) == sum_row_matrix(matrix, i) &&
            sum_row_matrix(matrix, i) == sum_diagonal_matrix(matrix)){
            check[i] = true;
        }
    }
    bool allTrue = true;
    for (int i = 0; i < 3; i++) {
        if (!check[i]) {
            allTrue = false;
            break;
        }
    }


    // Display results
    cout << boolalpha << allTrue << endl;

    return 0;


    
    return 0;
}
