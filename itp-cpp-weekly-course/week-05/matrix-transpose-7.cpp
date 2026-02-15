/*
 * Filename: matrix-transpose-7.cpp
 * Week: 5
 * Description: Matrix Transpose 7
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
    int size;
    cout<<"Enter row and col: ";

    // Get input from user
    cin>>size;

    int matrix[size][size], t_matrix[size][size];
    

    // Perform calculations
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout<<"Enter matrix element: ";
            cin>>matrix[i][j];
        }
    }
// computing the transpose

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            t_matrix[i][j] = matrix[j][i];
        }
    }

// checking if the matrix is symmetric or asymmetric.
    int count = 0;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(t_matrix[i][j] == matrix[i][j]){
                count ++;
            }
        }
    }
    if (count == size*size){

    // Display results
        cout<<"the matrix is Symmetric."<<endl;
    }
    else {
        cout<<"the matrix is Asymmetric."<<endl;
    }




    return 0;
}