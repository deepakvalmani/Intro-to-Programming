/*
 * Filename: calculate-sum-average-loop-3.cpp
 * Week: 3
 * Description: Calculate Sum Average Loop 3
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 */


#include <iostream>
using namespace std;


// Main program starts here
int main() {
    int num;
    int num_of_digits = 0;
    cout << "Enter a number (at least 4 digits): ";

    // Get input from user
    cin >> num;


    // Perform calculations
    for (int temp = num; temp > 0; temp /= 10)
        num_of_digits++;

    while (num >= 10) {
        int sum = 0;
        for (int temp = num; temp > 0; temp /= 10) {
            sum += temp % 10;
        }

    // Display results
        //cout << "Sum of digits of " << num << " = " << sum << endl;
        num = sum;
    }

    cout << "Number of digits = " << num_of_digits << endl;
    cout << "Digital root of number = " << num << endl;
    return 0;
}
