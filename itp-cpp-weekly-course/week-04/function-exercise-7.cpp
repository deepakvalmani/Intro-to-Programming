/*
 * Filename: function-exercise-7.cpp
 * Week: 4
 * Description: Function Exercise 7
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


// Function: SortFunction
void SortFunction(int *arr, int *size, int order) {
    for (int i = 0; i < *size - 1; i++) {
        for (int j = i + 1; j < *size; j++) {
            if ((order == 1 && *(arr + i) > *(arr + j)) ||
                (order == 2 && *(arr + i) < *(arr + j))) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}


// Main program starts here
int main() {
    int arr[] = {5, 2, 8, 1, 9};

    // Perform calculations
    int size = sizeof(arr)/sizeof(arr[0]);

    SortFunction(arr, &size, 1); // 1 for ascending

    // Display results
    cout << "Ascending: ";
    for (int i = 0; i < size; i++)
        cout << *(arr + i) << " ";
    cout << endl;

    SortFunction(arr, &size, 2); // 2 for descending
    cout << "Descending: ";
    for (int i = 0; i < size; i++)
        cout << *(arr + i) << " ";
}
