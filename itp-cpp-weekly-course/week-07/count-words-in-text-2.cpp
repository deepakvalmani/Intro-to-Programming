/*
 * Filename: count-words-in-text-2.cpp
 * Week: 7
 * Description: Count Words In Text 2
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


// Function: WordCount
int WordCount(char *Text, int *size) {
    int count = 0;
    bool in_word = false;
    for (int i = 0; i < *size; i++) {
        if (*(Text + i) != ' ' && *(Text + i) != '\0') {
            if (!in_word) {
                count++;
                in_word = true;
            }
        } else {
            in_word = false;
        }
    }
    return count;
}


// Main program starts here
int main() {
    char text[] = "This is an ITP Lab By Deepak Raj";

    // Perform calculations
    int size = sizeof(text)/sizeof(text[0]);
    int words = WordCount(text, &size);

    // Display results
    cout << "Number of words = " << words;
}
