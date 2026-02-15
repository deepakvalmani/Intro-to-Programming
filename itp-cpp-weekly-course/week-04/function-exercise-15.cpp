/*
 * Filename: function-exercise-15.cpp
 * Week: 4
 * Description: Function Exercise 15
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - Recursion
 */


#include <iostream>
using namespace std;


// Function: fact
int fact(int x){
    if(x == 0 || x == 1) return 1;
    return x*fact(x-1);
}

// Main program starts here
int main() {

    // Display results
    cout<<fact(6)<<endl;
    return 0;
}