/*
 * Filename: check-perfect-number.cpp
 * Week: 3
 * Description: Check Perfect Number
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 */


#include<iostream>
using namespace std ;


// Main program starts here
int main(){
    int num, sum = 0;
    
    cout  <<  "Enter a positive integer: ";

    // Get input from user
    cin >> num ;

    // Perform calculations
    for(int i = 1; i <= num / 2; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if (num == sum){

    // Display results
        cout << num << " is a perfect number." << endl;
    }
    else{
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}