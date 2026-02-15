/*
 * Filename: loop-exercise-10.cpp
 * Week: 3
 * Description: Loop Exercise 10
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

    double numbers[6], num = 3.14;


    // Perform calculations
    for(int i = 0; i < 6; i++){
        numbers[i] = num;
        num += 0.10;
    }
    for(int j = 0; j < 6; j++){
        int max = j;
        for(int k = j+1; k < 6; k++){
            if(numbers[k]>numbers[j]){
                double temp = numbers[j];
                numbers[j] = numbers[k];
                numbers[k] = temp;
            }

        }
    }
    for(int i = 0; i < 6; i++){

    // Display results
        cout<<numbers[i]<<"\t";
    }

return 0;
}
