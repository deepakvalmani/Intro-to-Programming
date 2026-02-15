/*
 * Filename: loop-exercise-4.cpp
 * Week: 3
 * Description: Loop Exercise 4
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Arrays
 * - Pointers and references
 */


#include <iostream>
using namespace std;


// Main program starts here
int main() {
    int n = 5;

    // Perform calculations
    int *numbers = new int[n];
    for(int i = 0; i < n; i++){

    // Get input from user
        cin >> numbers[i];
    }

    int* maxPtr = numbers;

    for (int i = 0; i < n; i++) {
        if (*(numbers + i) > *maxPtr) {
            maxPtr = (numbers + i);
        }
    }

    // Display results
    cout << "Maximum = " << *maxPtr << endl; 
    
    delete[] numbers;
    return 0;
}