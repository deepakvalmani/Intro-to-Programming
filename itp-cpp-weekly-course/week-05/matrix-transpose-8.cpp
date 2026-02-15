/*
 * Filename: matrix-transpose-8.cpp
 * Week: 5
 * Description: Matrix Transpose 8
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - 2D arrays / matrices
 * - Recursion
 */


#include <iostream>
using namespace std;


// Main program starts here
int main(){
    int row, col, maxx = INT_MIN;
    cout<<"Enter row and col: ";

    // Get input from user
    cin>>row>>col;

    int matrix[row][col];
    cout<<"Enter matrix element: ";

    // Perform calculations
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>matrix[i][j];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if (matrix[i][j] > maxx){
                maxx = matrix[i][j];
            }
        }
    }
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){

    // Display results
                cout<<matrix[i][j]<<"\t";
            }
            cout<<endl;
    }

    cout<<"maximum element is: "<<maxx<<endl;
    return 0;
}