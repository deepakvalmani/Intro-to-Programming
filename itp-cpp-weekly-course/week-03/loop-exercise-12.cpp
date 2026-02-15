/*
 * Filename: loop-exercise-12.cpp
 * Week: 3
 * Description: Loop Exercise 12
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
    int size = 6;
    bool num = true ;
    int numbers[size];

    // Perform calculations
    for(int i = 0; i < size; i++){
        cout<<"Enter number "<<i+1<<" ";

    // Get input from user
        cin>>numbers[i]; 
    }
    for(int i = 0; i < size-1; i++){
        if (numbers[i] == numbers[size-1]){
            num = true;
        }

// Function: if
        else if(numbers[i] != numbers[size-1]){
            num = false;
        }
        size--;
    }
    if (num == true){

    // Display results
        cout<<"array is symmetric. "<<endl;

    }

// Function: if
    else if(num == false) {
        cout<<"array is not symmetric. "<<endl;
        
    }
    return 0;
}
