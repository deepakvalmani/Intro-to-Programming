/*
 * Filename: max-subarray-sum-kadane.cpp
 * Week: 6
 * Description: Max Subarray Sum Kadane
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - Arrays
 * - Recursion
 */


#include <iostream>
#include <climits>
using namespace std;

// helper for maxx Sub array Sum

// Function: maxSubArrHelper
int maxSubArrHelper(int arr[], int i, int size, int currentSum, int maxSum) {
    if (i == size) 
        return maxSum;

    currentSum += arr[i];
    if (currentSum > maxSum)
        maxSum = currentSum;
    if (currentSum < 0)
        currentSum = 0;

    return maxSubArrHelper(arr, i + 1, size, currentSum, maxSum);
}


// Function: maxSubArr
int maxSubArr(int arr[], int size) {
    return maxSubArrHelper(arr, 0, size, 0, INT_MIN);
}


// Main program starts here
int main() {

    // Perform calculations
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr)/sizeof(arr[0]);

    // Display results
    cout << "Maximum Subarray Sum: " << maxSubArr(arr, size) << endl;
    return 0;
}
