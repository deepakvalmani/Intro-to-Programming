/*
 * Filename: count-words-in-text.cpp
 * Week: 7
 * Description: Count Words In Text
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 * - String operations
 */


#include <iostream>
#include <sstream>
using namespace std;


// Function: word count
int word_count(string line) {
    int x = 0;
    string word;
    stringstream ss(line);  

    while (ss >> word) {
        x++;
    }

    return x;
}


// Main program starts here
int main() {
    string line;
    cout << "Enter line: ";

    // Get input from user
    getline(cin, line);


    // Display results
    cout << "Word count: " << word_count(line) << endl;

    return 0;
}
