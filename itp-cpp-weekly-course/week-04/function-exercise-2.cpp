/*
 * Filename: function-exercise-2.cpp
 * Week: 4
 * Description: Function Exercise 2
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - Arrays
 * - Pointers and references
 */


#include <iostream>
using namespace std;


// Function: replaceChar
void replaceChar(char *str, char oldC, char newC) {
    while (*str != '\0') {       
        if (*str == oldC) {
            *str = newC;          
        }
        str++;
    }                  
}



// Main program starts here
int main() {
    char s1[] = "banana";          
    replaceChar(s1, 'a', 'x');


    // Display results
    cout << s1;                    
    return 0;
}
