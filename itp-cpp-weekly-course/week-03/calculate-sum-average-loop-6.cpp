/*
 * Filename: calculate-sum-average-loop-6.cpp
 * Week: 3
 * Description: Calculate Sum Average Loop 6
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Arrays
 */


#include <iostream>
using namespace std;


// Main program starts here
int main() {

    double arry1[10], arry2[10], marks;
    double sum_pass = 0, sum_fail = 0;
  int count_p = 0, count_f = 0;


    // Perform calculations
    for (int i = 0; i < 10; i++) {
        cout << "Enter marks : ";

    // Get input from user
     cin >> marks;

      if (marks == -1) {
            break;
       }

// Function: if
        else if (marks >= 0 && marks < 5.0) {
            arry2[count_f] = marks;
            sum_fail += marks;
           count_f++;
        }

// Function: if
        else if (marks >= 5.0 && marks <= 10.0) {
            arry1[count_p] = marks;
            sum_pass += marks;
            count_p++;
        }
        else {
            cout << "Invalid marks! Enter between 0 and 10.\n";
            i--;
    }
    }


    // Display results
    cout << "\nArray 1 (Pass Students): ";
for (int i = 0; i < count_p; i++) {
        cout << arry1[i] << " || ";
    }
    cout << endl;
    cout << "Array 2 (Fail Students): ";
    for (int i = 0; i < count_f; i++) {
    cout << arry2[i] << " || ";
    }
    cout << endl;

if (count_p > 0)
    cout << "Average of Pass Students = " << sum_pass / count_p << endl;
    
    if (count_f > 0)
        cout << "Average of Fail Students = " << sum_fail / count_f << endl;
    cout << "Pass Count = " << count_p << endl;
    cout << "Fail Count = " << count_f << endl;

    return 0;
}
