/*
 * Filename: find-substring.cpp
 * Week: 7
 * Description: Find Substring
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


// Function: SubString
bool SubString(string s1, string s2, int i = 0, int j = 0){
    int size1 = s1.length();
    int size2 = s2.length();
    if(i == size1) return true;
    if(j == size2) return false;

    if(s1[i] == s2[j]) {
        return SubString(s1, s2, i+1, j+1);
    }
    return SubString( s1, s2, i, j+1);
}



// Main program starts here
int main() {
    string s1, s2;
    cout<<"Enter two strings: ";

    // Get input from user
    cin>>s1>>s2;
    if (SubString(s1, s2))

    // Display results
        cout << "First string is subset of second" << endl;
    else
        cout << "First string is not subset of second" << endl;
    
    return 0;
}