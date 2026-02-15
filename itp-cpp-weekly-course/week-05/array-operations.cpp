/*
 * Filename: array-operations.cpp
 * Week: 5
 * Description: Array Operations
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 * - Arrays
 * - Pointers and references
 */


#include <iostream>
using namespace std;

int* mergeArrays(int *arr1, int size1, int *arr2, int size2) {
    int *arr = new int[size1 + size2];

    for(int i = 0; i < size1; i++){
        arr[i] = arr1[i];
    }

    for(int i = 0; i < size2; i++){
        arr[size1 + i] = arr2[i];
    }

    return arr;
}


// Main program starts here
int main() {
    int size1 = 3, size2 = 2;
    int arr1[] = {2, 5, 7};
    int arr2[] = {8, 9};


    // Perform calculations
    int *merged = mergeArrays(arr1, size1, arr2, size2);

    for (int i = 0; i < size1 + size2; i++) {

    // Display results
        cout << merged[i] << " ";
    }

    delete[] merged;  

    return 0;
}
