/*
 * Filename: function-exercise-13.cpp
 * Week: 4
 * Description: Function Exercise 13
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - Arrays
 * - String operations
 * - Recursion
 */


#include <iostream>
#include <string>
using namespace std;


// Main program starts here
int main() {
    int size = 5;

    string stu_names[] = {"Ali", "Zuhair", "Faisal", "Maaz", "Anis"};
    string stu_names1[] = {"Ali", "Zuhair", "Faisal", "Maaz", "Anis"};

    // a Insertion Sort

    // Perform calculations
    for (int i = 1; i < size; i++) {
        string key = stu_names1[i];
        int j = i - 1;
        while (j >= 0 && stu_names1[j] > key) {
            stu_names1[j + 1] = stu_names1[j];
            j--;
        }
        stu_names1[j + 1] = key;
    }


    // Display results
    cout << "Insertion Sort Result:\n";
    for (int i = 0; i < size; i++) {
        cout << stu_names1[i] << "\t";
    }
    cout << "\n\n";

    // b Selection Sort
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (stu_names[j] < stu_names[min_index]) {
                min_index = j;
            }
        }
        string temp = stu_names[i];
        stu_names[i] = stu_names[min_index];
        stu_names[min_index] = temp;
    }

    cout << "Selection Sort Result:\n";
    for (int i = 0; i < size; i++) {
        cout << stu_names[i] << "\t";
    }
    cout << endl;

    return 0;
}
