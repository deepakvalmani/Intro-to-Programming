/*
 * Filename: struct-example-3.cpp
 * Week: 9
 * Description: Struct Example 3
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 * - Arrays
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



// Function: getdata
void getdata(int N, student s[]) {
    for(int i = 0; i < N; i++) {
        cout << "\nEnter Student " << i + 1 << " details:\n";
        cout << "CGPA: ";
        cin >> s[i].CGPA;

        cout << "Course Name: ";
        cin >> s[i].courses.course;

        cout << "GPA in that course: ";
        cin >> s[i].courses.GPA;

        cout << "Address (street city state zip): ";
        cin >> s[i].address.street 
            >> s[i].address.city 
            >> s[i].address.state 
            >> s[i].address.zip;
    }
}


// Function: display student
void display_student(int N, student s[]) {
    
    for(int i = 0; i < N; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "CGPA: " << s[i].CGPA << endl;
        cout << "Course Name: " << s[i].courses.course << endl;
        cout << "GPA in that course: " << s[i].courses.GPA << endl;
        cout << "Address: " 
             << s[i].address.street << ", "
             << s[i].address.city << ", "
             << s[i].address.state << " - "
             << s[i].address.zip << endl;
    }
}


// Main program starts here
int main() {
    int n;
    cout << "Enter number of students: ";

    // Get input from user
    cin >> n;

    student students[n];

    getdata(n, students);
    display_student(n, students);

    return 0;
}
