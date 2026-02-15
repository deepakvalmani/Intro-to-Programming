/*
 * Filename: function-exercise-4.cpp
 * Week: 4
 * Description: Function Exercise 4
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 * - Arrays
 */


#include <iostream>
#include <ctime>
using namespace std;


// Main program starts here
int main() {
    srand(time(0));
    int num[10];

    // Perform calculations
    for (int i = 0; i < 10; i++) {
        num[i] = rand() % 10;
    }


    // Display results
    cout << "(" << num[0] << num[1] << num[2] << ") "
         << num[3] << num[4] << num[5] << "-"
         << num[6] << num[7] << num[8] << num[9] << endl;

    return 0;
}
