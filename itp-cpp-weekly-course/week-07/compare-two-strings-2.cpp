/*
 * Filename: compare-two-strings-2.cpp
 * Week: 7
 * Description: Compare Two Strings 2
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - String operations
 * - Structures
 */


#include <iostream>
using namespace std;

struct Courses {
    string course;
    double GPA;
};

struct Add {
    string street;
    string city;
    string state;
    int zip;
};

struct student {
    double CGPA;
    Courses courses;
    Add address;
};


// Function: compare
void compare(student s1, student s2) {
    
    cout << "Highest CGPA: ";
    if (s1.CGPA > s2.CGPA)
        cout << "Student 1 (" << s1.CGPA << ")\n";
    else if (s2.CGPA > s1.CGPA)
        cout << "Student 2 (" << s2.CGPA << ")\n";
    else
        cout << "Both have equal CGPA (" << s1.CGPA << ")\n";

    
    cout << "\nCourse: " << s1.courses.course << endl;
    cout << "Highest GPA in course: ";
    if (s1.courses.GPA > s2.courses.GPA)
        cout << "Student 1 (" << s1.courses.GPA << ")\n";
    else if (s2.courses.GPA > s1.courses.GPA)
        cout << "Student 2 (" << s2.courses.GPA << ")\n";
    else
        cout << "Both have equal GPA (" << s1.courses.GPA << ")\n";
}


// Main program starts here
int main() {
    student s1, s2;

    cout << "Enter Student 1 details:\n";

    // Display results
    cout << "CGPA: ";

    // Get input from user
    cin >> s1.CGPA;
    cout << "Course Name: ";
    cin >> s1.courses.course;
    cout << "GPA in that course: ";
    cin >> s1.courses.GPA;
    cout << "Address (street city state zip): ";
    cin >> s1.address.street >> s1.address.city >> s1.address.state >> s1.address.zip;

    cout << "\nEnter Student 2 details:\n";
    cout << "CGPA: ";
    cin >> s2.CGPA;
    cout << "Course Name: ";
    cin >> s2.courses.course;
    cout << "GPA in that course: ";
    cin >> s2.courses.GPA;
    cout << "Address (street city state zip): ";
    cin >> s2.address.street >> s2.address.city >> s2.address.state >> s2.address.zip;

    compare(s1, s2);

    return 0;
}
