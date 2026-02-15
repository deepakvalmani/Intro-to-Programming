/*
 * Filename: function-exercise-3.cpp
 * Week: 4
 * Description: Function Exercise 3
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 * - Function definitions and calls
 */


#include<iostream>

using namespace std;



// Main program starts here
int main(){

    int a, b, c;
    cout<<"Enter lengths of the traingle: ";

    // Get input from user
    cin>>a>>b>>c;


    // Perform calculations
    if(a==b && b==c){

    // Display results
        cout<<"equilateral triangle";

    }

// Function: if
    else if(a==b || a==c || b==c){
        cout<<"iosceles triangle";


    }
    else{
        cout<<"scalene  triangle";

    }


    return 0;

}