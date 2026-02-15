/*
 * Filename: sum-of-cubes.cpp
 * Week: 3
 * Description: Sum Of Cubes
 * 
 * This program demonstrates:
 * - Function definitions and calls
 * - Recursion
 */


#include<iostream>
using namespace std;
int n;


// Function: sq
int sq(){
// int n,square,cube;
cout<<"Enter an integer";
cin>>n;
int square=n*n;

return square;

}

// Function: cube
int cube(){

cout<<"Enter an integer<<endl";
cin>>n;


int cube=n*n*n;

return cube;
}


// Main program starts here
int main(){


    // Perform calculations
   int result = sq() + cube();

    // Display results
cout<<"Square = "<<sq()<<", Cube = "<<cube()<<", Sum = "<<result;
return 0;
}
// return 0;