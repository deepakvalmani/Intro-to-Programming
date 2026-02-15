/*
 * Filename: function-exercise-9.cpp
 * Week: 4
 * Description: Function Exercise 9
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


// Function: SentenceCase
void SentenceCase(char *Text, int *size) {
    for(int i = 0; i < *size; i++) {
        
        if (*(Text + i) >= 'a' && *(Text + i) <= 'z') {
            *(Text + i) = *(Text + i) - 32;
        }
        break; 
    }
}


// Main program starts here
int main() {
    char text[] = "you capitalize just the first letter of the first word in sentence";

    // Perform calculations
    int size = sizeof(text) / sizeof(text[0]);

    SentenceCase(text, &size);


    // Display results
    cout << text;
}
