/*
 * Filename: function-exercise-10.cpp
 * Week: 4
 * Description: Function Exercise 10
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Function definitions and calls
 */


#include<iostream>

using namespace std;



// Main program starts here
int main(){

    int x, digit;
    cout<<"Enter a number: ";

    // Get input from user
    cin>>x;
    int y = x;
    



    while(y>7 || y<-7){

    // Perform calculations
        digit = y% 10;
        digit*=2;
        y=y/10;
        y=y-digit;
       
    }
    if (y==7||y==-7||y==0){

    // Display results
        cout<<"Is divisible by 7";

    }
    else {
        cout<<"Is not divisible by 7 ";
    }
    
    return 0;

}