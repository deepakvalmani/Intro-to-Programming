/*
 * Filename: function-exercise-11.cpp
 * Week: 4
 * Description: Function Exercise 11
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - Arrays
 * - Recursion
 */


#include <iostream>
using namespace std;


// Function: search
int search(int arr[], int n, int key, int index = 0) {
    if (index == n) return -1;
    if (arr[index] == key) return index;
    return search(arr, n, key, index + 1);
}


// Main program starts here
int main() {
    int A[10] = {5, 4, 3, 2, 1, 6, 10, 9, 7, 8};
    int key;
    cout << "Enter element to search: ";

    // Get input from user
    cin >> key;

    int idx = search(A, 10, key);


    // Display results
    if (idx != -1) cout << "Element found at index " << idx << endl;
    else cout << "Element not found" << endl;

    return 0;
}
