/*
 * Filename: update-student-marks-2.cpp
 * Week: 5
 * Description: Update Student Marks 2
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 * - Pointers and references
 */


#include <iostream>
using namespace std;

// Function: updated marks
void updated_marks(int &marks,int &updated){
// for(int i=0;i<marks;i++){
    updated=marks+=10;

}

// Main program starts here
int main() {
   int marks,updated;
   cout<<"enter old marks";

    // Get input from user
   cin>>marks;
updated_marks(marks,updated);

    // Display results
    cout<<"updated marks"<<updated;
    return 0;
}