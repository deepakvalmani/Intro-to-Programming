/*
 * Filename: basic-input-output-2.cpp
 * Week: 1
 * Description: Basic Input Output 2
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
    cout<<"Right shift by 3 possitions: "<<(num >> 3)<<endl;

    return 0;
}
