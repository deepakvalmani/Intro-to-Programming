/*
 * Filename: loop-exercise-7.cpp
 * Week: 3
 * Description: Loop Exercise 7
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Recursion
 */


#include <iostream>
using namespace std;


// Main program starts here
int main() {
    int num_1, denom_1, num_2, denom_2;
    int num, denom, gcd = 1, temp_1;
    char opt;

   
    cout << "Enter numerator and denominator of first fraction: ";

    // Get input from user
    cin >> num_1 >> denom_1;

    cout << "Enter numerator and denominator of second fraction: ";
    cin >> num_2 >> denom_2;


    // Display results
    cout << "Choose operation (+, -, *, /): ";
    cin >> opt;


    // Perform calculations
    if (opt == '+') {
        denom = denom_1 * denom_2;
        num = num_1 * denom_2 + num_2 * denom_1;
    } 

// Function: if
    else if (opt == '-') {
        denom = denom_1 * denom_2;
        num = num_1 * denom_2 - num_2 * denom_1;
    } 

// Function: if
    else if (opt == '*') {
        denom = denom_1 * denom_2;
        num = num_1 * num_2;
    } 

// Function: if
    else if (opt == '/') {
        if (num_2 == 0) {
            cout << "Error: Division by zero!" << endl;
            return 1;
        }
        denom = denom_1 * num_2;
        num = num_1 * denom_2;
    } 
    else {
        cout << "Invalid operator!" << endl;
        return 1;
    }

    if (denom < 0) {
        denom = -denom;
        num = -num;
    }

    
    int a = (num <= -1) ? -num : num;   
    int b = (denom < 0) ? -denom : denom; 
    
    temp_1 = (a < b) ? a : b;         
    while (temp_1 > 1) {
        if (a % temp_1 == 0 && b % temp_1 == 0) {
            gcd = temp_1;
            break;
        }
        temp_1--;
    }

 
    num /= gcd;
    denom /= gcd;

    cout << "Result: " << num << "/" << denom << endl;

    return 0;
}
