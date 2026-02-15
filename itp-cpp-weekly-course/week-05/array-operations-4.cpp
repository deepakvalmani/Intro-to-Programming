/*
 * Filename: array-operations-4.cpp
 * Week: 5
 * Description: Array Operations 4
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


// Function: CountEven
int CountEven(int *arr, int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if (*(arr + i)%2 == 0){
            count ++;
        }
    }
    return count;
}

// Main program starts here
int main() {
    int size = 5, count = 0;
    int array[size] = {2, 6, 50, 6, 7};

    // Perform calculations
    for (int i = 0; i < size; i++) {

    // Display results
        cout << *(array + i) << " ";
    }
    cout << endl;
    count = CountEven(array, size);
    cout << "Number of even values = " << count << endl;

    return 0;
}