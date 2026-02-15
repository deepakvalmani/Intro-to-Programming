/*
 * Filename: function-exercise-17.cpp
 * Week: 4
 * Description: Function Exercise 17
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 * - String operations
 */


#include<iostream>
#include<string>
using namespace std;

string str1, str2;


// Function: combineReverse
string combineReverse() {
    string combinestr = str1 + str2;

int size = strlen(combinestr);
for(int i = size; i>=0; i--){

}
    return combinestr;
}


// Main program starts here
int main() {
    cout << "Enter first word: ";

    // Get input from user
    cin >> str1;

    cout << "Enter second word: ";
    cin >> str2;


    // Display results
    cout << "Reversed combined string: " << combineReverse();
}
