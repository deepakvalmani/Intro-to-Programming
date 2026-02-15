/*
 * Filename: array-operations-5.cpp
 * Week: 5
 * Description: Array Operations 5
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 * - Arrays
 * - Pointers and references
 */


#include <iostream>
using namespace std;


// Function: reverseArray
void reverseArray(int *arr, int size){
    int* start = arr;
    int* end = arr + size - 1;
    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;

    }
}

// Main program starts here
int main() {
    int size = 5;
    int array[size] = {2, 6, 5, 6, 7};

    // Perform calculations
    for (int i = 0; i < size; i++) {

    // Display results
        cout << *(array + i) << " ";
    }
    cout << endl;
    reverseArray(array, size);
    for (int i = 0; i < size; i++) {
        cout << *(array + i) << " ";
    }   
    cout << endl;
    return 0;
}