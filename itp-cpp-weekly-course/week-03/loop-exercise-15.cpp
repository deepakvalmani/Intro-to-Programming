/*
 * Filename: loop-exercise-15.cpp
 * Week: 3
 * Description: Loop Exercise 15
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 */


#include <iostream>
using namespace std;


// Main program starts here
int main() {
    long credit_score;
    long income;
    double debt_ratio;
    int exp_years;

    cout << "Enter your credit score: ";

    // Get input from user
    cin >> credit_score;
    cout << "Enter your income: ";
    cin >> income;
    cout << "Enter your debt-to-income ratio (in %): ";
    cin >> debt_ratio;
    cout << "Enter years of full-time employment: ";
    cin >> exp_years;

    if (credit_score >= 650) {
        if (income >= 40000) {
            if (debt_ratio <= 40) {
                if (exp_years >= 2) {

    // Display results
                    cout << "Loan Approved" << endl;
                } else {
                    cout << "Rejected: Must be employed full-time for at least 2 years." << endl;
                }
            } else {
                cout << "Rejected: Debt-to-income ratio must not exceed 40%." << endl;
            }
        } else {
            cout << "Rejected: Minimum income must be $40,000." << endl;
        }
    } else {
        cout << "Rejected: Credit score must be at least 650." << endl;
    }

    return 0;
}
