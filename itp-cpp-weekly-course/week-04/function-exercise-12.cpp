/*
 * Filename: function-exercise-12.cpp
 * Week: 4
 * Description: Function Exercise 12
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


// Function: is sub sequence
bool is_sub_sequence(string s1, string s2, int i = 0, int j = 0) {
    if (i == s1.length()) return true;
    if (j == s2.length()) return false;
    if (s1[i] == s2[j]) return is_sub_sequence(s1, s2, i + 1, j + 1);
    return is_sub_sequence(s1, s2, i, j + 1);
}


// Main program starts here
int main() {
    string s1, s2;

    // Get input from user
    cin >> s1 >> s2;


    // Display results
    if (is_sub_sequence(s1, s2)) cout << "true" << endl;
    else cout << "false" << endl;

    return 0;
}
