/*
 * Filename: basic-input-output-6.cpp
 * Week: 1
 * Description: Basic Input Output 6
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 */


#include <iostream>
using namespace std;


// Main program starts here
int main() {
    int num;

    cout << "Enter a number: ";

    // Get input from user
    cin >> num;


    // Perform calculations
    if ((num & 1) == 0) {

    // Display results
        cout<<"EVEN"<<endl;

    }
    else{
        cout<<"ODD"<<endl;
        
    }

    return 0;
}


