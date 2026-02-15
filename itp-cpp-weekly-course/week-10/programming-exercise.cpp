/*
 * Filename: programming-exercise.cpp
 * Week: 11
 * Description: Programming Exercise
 * 
 * This program demonstrates:
 * - Pointers and references
 */


#include <iostream>
using namespace std;


// Main program starts here
int main() {

    // Perform calculations
    float *number = new float();
    cout << "Enter a flaot number: ";

    // Get input from user
    cin >> *number;

    // Display results
    cout<<endl<<"Value = " << *number<<endl;
    cout<<"Address = " << number << endl;
    cout<<endl<<"Updated Value = " << *number + 10.0<<endl;
    delete number;
    return 0;
}