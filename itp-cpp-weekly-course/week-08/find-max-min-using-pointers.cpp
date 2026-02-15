/*
 * Filename: find-max-min-using-pointers.cpp
 * Week: 8
 * Description: Find Max Min Using Pointers
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - Arrays
 * - Pointers and references
 * - Recursion
 */


#include<iostream>
#include <climits>
using namespace std;


// Function: max
int max(int nums[], int *maxx, int *size){
    for (int i = 0; i < *size; i++){

        for (int j = 0; j < *size; j++){
            if (nums[j] > *maxx){
                *maxx = nums[j];
            }
        }
    }
    return *maxx;
}


// Function: min
int min(int nums[], int *minn, int *size){
    for (int i = 0; i < *size; i++){

        for (int j = 0; j < *size; j++){
            if (nums[j] < *minn){
                *minn = nums[j];
            }
        }
    }
    return *minn;
}


// Main program starts here
int main(){
    int maxx = INT_MIN, minn = INT_MAX;
    int size;


    cout<<"Enter the  number of numbers you wan to enter: ";

    // Get input from user
    cin>> size;

    int nums[size];
    cout<<endl<<"Enter "<<size<<" Numbers: ";

    // Perform calculations
    for(int i = 0; i < size; i++){
        cin>>nums[i];

    }

    // Display results
    cout<<"Maxx = "<<max(nums, &maxx, &size)<<endl;
    cout<<"Minn = "<<min(nums, &minn, &size)<<endl;

    return 0;
}