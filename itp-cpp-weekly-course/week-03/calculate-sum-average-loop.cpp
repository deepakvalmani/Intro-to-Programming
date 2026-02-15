/*
 * Filename: calculate-sum-average-loop.cpp
 * Week: 3
 * Description: Calculate Sum Average Loop
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Arrays
 */


#include <iostream>
using namespace std;


// Main program starts here
int main(){
    int size;
    double sum = 0, avg;
    
    cout<<"Enter the size of array: ";

    // Get input from user
    cin>>size;

    
    int array[size];

    // Perform calculations
    for (int i = 0; i < size; i++){
       cout<<"Enter the numbers: "; 
       cin>>array[i];
       if (array[i] > 0){
            sum += array[i];
       }
      

    }
    avg = sum/(size-1);

    // Display results
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Average is: "<<avg<<endl;


    return 0;
}