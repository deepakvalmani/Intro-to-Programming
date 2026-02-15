/*
 * Filename: calculate-sum-average-loop-5.cpp
 * Week: 3
 * Description: Calculate Sum Average Loop 5
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Arrays
 * - Recursion
 */


#include <iostream>
using namespace std;


// Main program starts here
int main() {
    int num_of_stu, courses = 5;
    cout << "Enter the number of students: ";

    // Get input from user
    cin >> num_of_stu;


    // Perform calculations
    int total_marks = courses * 100;
    double student[num_of_stu][8]; 

    for (int i = 0; i < num_of_stu; i++) {

    // Display results
        cout << "\nStudent " << (i + 1) << endl;
        double sum = 0;
        for (int j = 0; j < courses; j++) {
            cout << "Enter marks for Course " << (j + 1) << ": ";
            cin >> student[i][j];
            sum += student[i][j];
        }

        student[i][5] = total_marks;
        student[i][6] = sum;
        student[i][7] = (sum / total_marks) * 100; 
    }

    cout << "\nStudent_ID\tC1\tC2\tC3\tC4\tC5\tTotal\tObt\tpercentage\n";
    for (int i = 0; i < num_of_stu; i++) {
        cout << (i + 1) << "\t\t";
        for (int j = 0; j < 8; j++) {
            cout << student[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
