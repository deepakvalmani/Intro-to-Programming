/*
 * Filename: function-exercise-14.cpp
 * Week: 4
 * Description: Function Exercise 14
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - Arrays
 * - String operations
 */


#include <iostream>
using namespace std;


// Function: IsPalindrome
bool IsPalindrome(string s1, int i = 0, int j = -1){
    if (j == -1){ 
        j = s1.length() -1;
    }
    if ( i >= j) {
        return true;
    }
    if (s1[i] != s1[j]){ 
        return false;
    }
    return IsPalindrome(s1, i + 1, j - 1);
  
}


// Main program starts here
int main() {
    string str;
    cout<<"Enter a string: ";

    // Get input from user
    cin>> str ;
    if (IsPalindrome(str)){

    // Display results
        cout<<"Palindrome "<<endl;
    } else cout<<"Not a Palindrome "<<endl;

    
    return 0;
}