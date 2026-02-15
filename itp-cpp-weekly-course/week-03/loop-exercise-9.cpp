/*
 * Filename: loop-exercise-9.cpp
 * Week: 3
 * Description: Loop Exercise 9
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Arrays
 * - Recursion
 */


#include<iostream>
using namespace std;



// Main program starts here
int main(){
    int size = 5;
    double arr1[size], arr2[size], marks;


    // Display results
    cout<<"Array 1"<<endl;

    // Perform calculations
    for (int i = 0; i < size; i++){
        cout<<"Enter makrs of the student "<<i+1<<" ";

    // Get input from user
        cin>>marks;
        arr1[i] = marks;
    }

    cout<<"Array 2"<<endl;
    for (int i = 0; i < size; i++){
    cout<<"Enter makrs of the student "<<i+1<<" ";
    cin>>marks;
    arr2[i] = marks;
    }
    cout<<"Common values are: "<<endl;
    for(int i = 0; i<size; i++){
        for(int j = 0; j < size; j++){
            if (arr1[i] == arr2[j]){
                cout<<arr1[i]<<endl;
            }
        }
    }
    return 0;
}