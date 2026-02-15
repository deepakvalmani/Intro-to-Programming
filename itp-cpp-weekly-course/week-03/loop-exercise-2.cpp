/*
 * Filename: loop-exercise-2.cpp
 * Week: 3
 * Description: Loop Exercise 2
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 */


#include <iostream>
using namespace std;


// Main program starts here
int main() {
    int n;
    cout << "Enter number of rows: ";

    // Get input from user
    cin >> n;


    // Perform calculations
    for (int i = 1; i <= n; i++) {
    
        for (int s = 1; s <= n - i; s++) {

    // Display results
            cout << "  ";  
        }

       
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

       
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
