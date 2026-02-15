/*
 * Filename: bitwise-xor-not-operations-2.cpp
 * Week: 2
 * Description: Bitwise Xor Not Operations 2
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
    cout << "Bitwise NOT: " << ~num << endl;

    cout << "XOR with 1: " << (num ^ 1) << endl;

    return 0;
}
