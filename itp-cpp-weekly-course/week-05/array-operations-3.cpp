/*
 * Filename: array-operations-3.cpp
 * Week: 5
 * Description: Array Operations 3
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - Arrays
 * - Recursion
 */


#include <iostream>
using namespace std;


// Function: ArrayEq
bool ArrayEq(int array_1[], int array_2[], int size1, int size2, int index = 0) {

    if (size1 != size2)
        return false;
    
    if (index == size1)
        return true;
        
    if (array_1[index] != array_2[index])
        return false;

    return ArrayEq(array_1, array_2, size1, size2, index + 1);
}


// Main program starts here
int main() {
    int size1 = 7, size2 = 7;
    int array_1[size1] = {1, 4, 2, 1, 4, 1, 4};
    int array_2[size2] = {1, 4, 2, 1, 4, 4, 4};

    if (ArrayEq(array_1, array_2, size1, size2))

    // Display results
        cout << "Arrays are equal" << endl;
    else
        cout << "Arrays are not equal" << endl;

    return 0;
}
