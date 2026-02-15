/*
 * Filename: basic-input-output.cpp
 * Week: 1
 * Description: Basic Input Output
 * 
 * This program demonstrates:
 * - Basic input/output
 */


#include <iostream>
using namespace std;


// Main program starts here
int main() {
    int num;

    cout << "Enter a number: ";

    // Get input from user
    cin >> num;
    

    // Display results
    cout<<"Left shift by 2 possitions: "<<(num << 2)<<endl;

    return 0;
}
