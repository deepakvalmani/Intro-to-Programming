/*
 * Filename: matrix-transpose.cpp
 * Week: 5
 * Description: Matrix Transpose
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
    int count = 0, row = 3, col = 3;
    int matrix[row][col] = {
        {1,6,0},
        {0,0,0},
        {4,0,5}
    };



    // Perform calculations
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if (matrix[i][j] == 0){
                count ++;
            }
        }
    }
    if(count >= (row*col)/2 ){

    // Display results
        cout<<"The matrix is sparse. "<<endl;

    }
    else{
        cout<<"The matrix is not sparse. "<<endl;
    }
return 0;
}