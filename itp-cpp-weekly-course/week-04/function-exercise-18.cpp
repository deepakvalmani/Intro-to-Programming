/*
 * Filename: function-exercise-18.cpp
 * Week: 4
 * Description: Function Exercise 18
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - Arrays
 * - Pointers and references
 */


#include <iostream>
using namespace std;

float* findMax(float *arr, int size) {
    float *max = arr;
    float *second_highest = nullptr;
    for (int i = 0; i < size; i++) {
        if (*(arr + i) > *max) {
            second_highest = max;
            max = arr + i;
        } else if ((second_highest == nullptr || *(arr + i) > *second_highest) && *(arr + i) != *max) {
            second_highest = arr + i;
        }
    }
    return second_highest;
}


// Main program starts here
int main() {
    float arr[] = {4.5, 3.3, 0.5, 4.57};

    // Perform calculations
    float *result = findMax(arr, 4);

    // Display results
    cout << "second_highest highest = " << *result;
}
