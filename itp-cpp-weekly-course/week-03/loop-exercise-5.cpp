/*
 * Filename: loop-exercise-5.cpp
 * Week: 3
 * Description: Loop Exercise 5
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Arrays
 */


#include<iostream>
using namespace std;



// Main program starts here
int main(){
    int numbers[10];
    int num_f,count = 0;
    cout<<"Enter 10 numbers: ";

    // Perform calculations
    for(int i = 0; i < 10;i++){

    // Get input from user
        cin>>numbers[i];
    }
    cout<<"enter the number to be found: ";
    cin>>num_f;
    for(int j = 0; j < 10; j++){
        if(numbers[j] == num_f){
        count++;
        }
    }
    if (count == 0){

    // Display results
        cout<<"Number not found: ";
        }

// Function: if
    else if (count != 0){
        cout<<"number "<< num_f<<" occurred "<<count<<" times";
    }
return 0;
}