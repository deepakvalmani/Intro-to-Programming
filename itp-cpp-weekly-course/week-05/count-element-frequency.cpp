/*
 * Filename: count-element-frequency.cpp
 * Week: 5
 * Description: Count Element Frequency
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 * - Arrays
 * - Recursion
 */


#include <iostream>
#include <ctime>
#include<iomanip>
using namespace std;


// Main program starts here
int main() {
    srand(time(NULL));

    int d, n;
    cout << "Enter d (number of dice): ";

    // Get input from user
    cin >> d;
    cout << "Enter n (number of rolls): ";
    cin >> n;

    int minTotal = d;

    // Perform calculations
    int maxTotal = 6 * d;
    int range = maxTotal - minTotal + 1;

    int counts[range] = {0}; // frequency of each possible total

    // Simulate dice rolls
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < d; j++) {
            sum += (rand() % 6) + 1; // roll a six-sided die
        }
        counts[sum - minTotal]++; // increment frequency
    }

    // Display histogram

    // Display results
    cout << "\nHistogram of totals:\n";
    for (int total = minTotal; total <= maxTotal; total++) {
        cout << setw(3)<<total << ": ";
        for (int k = 0; k < counts[total - minTotal]; k++) {
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}
