/*
 * Filename: income-tax-calculator.cpp
 * Week: 2
 * Description: Income Tax Calculator
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 */


#include <iostream>
using namespace std;


// Main program starts here
int main() {
    double income, tax;

    cout << "Enter your income: ";

    // Get input from user
    cin >> income;

    if (income <= 10000) {
        tax = 0;
    } else {
        if (income <= 50000) {

    // Perform calculations
            tax = (income - 10000) * 0.10;
        } else {
            if (income <= 100000) {
                tax = 4000 + (income - 50000) * 0.20;
            } else {
                tax = 14000 + (income - 100000) * 0.30;
            }
        }
    }


    // Display results
    cout << "Income tax = $" << tax << endl;

    return 0;
}
