/*
 * Filename: loop-exercise-11.cpp
 * Week: 3
 * Description: Loop Exercise 11
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 */


#include <iostream>
using namespace std;


// Main program starts here
int main() {

    // Display results
    cout<<"Integer roots for the given problem are: "<<endl;

    // Perform calculations
    for (int a = -10; a <= 10; a++) {
        for (int b = -10; b <= 10; b++) {
            for (int c = -10; c <= 10; c++) {
                if (3 * a + 7 * b - 5 * c == 10) {
                   cout << "Solution found: a = " << a 
                         << ", b = " << b 
                         << ", c = " << c << endl;
                }
            }
        }
    }
    return 0;
}
