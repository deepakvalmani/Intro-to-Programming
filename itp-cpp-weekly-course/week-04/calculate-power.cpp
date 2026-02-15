/*
 * Filename: calculate-power.cpp
 * Week: 4
 * Description: Calculate Power
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 */


#include <iostream>
using namespace std;


// Function: power function
double power_function() {

    double a;
    int b;

    cout << "Enter number: ";
    cin >> a;
    cout << "Enter power: ";
    cin >> b;

    double result = 1; 

    for (int i = 1; i <= b; i++) {
        result = result * a; 
    }

    return result; 
}


// Main program starts here
int main() {
    double result = power_function(); 

    // Display results
    cout << result; 
    return 0;
}
