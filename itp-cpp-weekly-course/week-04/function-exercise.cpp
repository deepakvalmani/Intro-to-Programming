/*
 * Filename: function-exercise.cpp
 * Week: 4
 * Description: Function Exercise
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - Arrays
 * - String operations
 * - Recursion
 */


#include <iostream>
using namespace std;


// Function: is palindrome
bool is_palindrome(string s, int start = 0, int end = -1) {
    if (end == -1) end = s.length() - 1;
    if (start >= end) return true;
    if (s[start] != s[end]) return false;
    return is_palindrome(s, start + 1, end - 1);
}


// Main program starts here
int main() {
    string string;

    // Get input from user
    cin >> string;


    // Display results
    if (is_palindrome(string)) cout << "true" << endl;
    else cout << "false" << endl;

    return 0;
}
