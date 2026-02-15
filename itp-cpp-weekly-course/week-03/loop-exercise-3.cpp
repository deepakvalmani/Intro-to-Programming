/*
 * Filename: loop-exercise-3.cpp
 * Week: 3
 * Description: Loop Exercise 3
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 */


#include <iostream>
using namespace std;


// Main program starts here
int main (){
    int num1, num2;
    cout<<"Enter 1st number please: ";

    // Get input from user
    cin >> num1;

    cout<<"Enter the 2nd number please: ";
    cin >> num2;

    // Perform calculations
    num1 = num1>>2;
    num2 = num2*num2;

    

    // Display results
    cout<<"1stNumber = "<<(num1)<<endl;
    cout<<"2ndNumber = "<<(num2)<<endl;
    cout<<endl;

    while (num1 != num2 ){
        num1 = num1>>2;
        num2 *= num2;
    }
    if ((num1 == 0) || (num2 == 0)){
        return 1;
     
    }
    else {
        cout<<"1stNumber = "<<num1<<endl;
        cout<<"2ndNumber = "<<num2<<endl; 
    }

    return 0;
}