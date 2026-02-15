/*
 * Filename: find-longest-run.cpp
 * Week: 6
 * Description: Find Longest Run
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Function definitions and calls
 */


#include <iostream>
using namespace std;



// Main program starts here
int main() {
    int num;
    int prev, count = 1;
    int bestNum, bestCount = 1;

    cout<<"Enter the number: (enter any char to exit) ";

    // Get input from user
    while (cin >> num) {
        cout<<"Enter the number: (enter any char to exit) ";
        if (num == prev) {
            count++;  
            }
        else {
            if (count > bestCount) {
                bestCount = count;
                bestNum = prev;
            }
            count = 1; 
        }
        prev = num;
    }

   
    if (count > bestCount) {
        bestCount = count;
        bestNum = prev;
    }


    // Display results
    cout << "Longest run: " << bestCount << " consecutive " << bestNum << "s" << endl;
    return 0;
}
