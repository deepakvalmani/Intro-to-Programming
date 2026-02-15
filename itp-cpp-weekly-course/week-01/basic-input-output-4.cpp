/*
 * Filename: basic-input-output-4.cpp
 * Week: 1
 * Description: Basic Input Output 4
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
