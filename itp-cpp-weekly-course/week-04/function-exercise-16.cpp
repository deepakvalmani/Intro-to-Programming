/*
 * Filename: function-exercise-16.cpp
 * Week: 4
 * Description: Function Exercise 16
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 * - Arrays
 * - Pointers and references
 */


#include <iostream>
using namespace std;


// Function: sumAll
float sumAll(float *arr, int size){
    float sum = 0;
    for(int i = 0; i < size ; i++){
        sum += *(arr+i);
    }
return sum;
}


// Main program starts here
int main(){
float arr[] = {4.5,3.3,0.5,4.57};

    // Perform calculations
float *ptr = arr;

    // Display results
    cout<< sumAll(ptr, 4);
    return 0;
}