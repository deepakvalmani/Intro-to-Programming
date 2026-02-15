/*
 * Filename: calculate-sum-average-loop-2.cpp
 * Week: 3
 * Description: Calculate Sum Average Loop 2
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 */


#include <iostream>
using namespace std;


// Main program starts here
int main() {
    int marks;
    double avg_by_course = 0, avg_total = 0;


    // Perform calculations
    for (int i = 1; i <= 3; i++) {
        avg_by_course = 0; 
        for (int j = 1; j <= 4; j++) {
            cout << "Enter the marks of student " << j << " for course " << i << ": ";

    // Get input from user
            cin >> marks;
            while (marks>100){

    // Display results
                cout<<"Please input valid marks. "<<endl;
                cin>>marks;
            }
            avg_by_course += marks;
        }
        avg_by_course /= 4.0; 
        cout << "Average for course " << i << " = " << avg_by_course << endl;

        avg_total += avg_by_course;
    }

    avg_total /= 3.0; 
    cout << "Overall average = " << avg_total << endl;

    return 0;
}
