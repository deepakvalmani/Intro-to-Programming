/*
 * Filename: student-grade-calculator.cpp
 * Week: 2
 * Description: Student Grade Calculator
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - String operations
 */


#include<iostream>
#include<string>

using namespace std;


// Main program starts here
int main() {
    double exam;
    double assignments;
    double participation;
    string attendance;

    cout<<"Enter Exam marks(50%): ";

    // Get input from user
    cin>>exam;
    cout<<"Enter assignments marks(30%): ";
    cin>>assignments;
    cout<<"Enter participation marks(20%): ";
    cin>> participation;
    cout<<"Enter attendance(perfect/not): ";
    cin>>attendance;


    // Perform calculations
    exam *=0.5;
    assignments *=0.3;
    participation *=0.2;
    double total_marks = exam+assignments+participation;
    if (attendance=="perfect" || attendance=="Perfect"){
        total_marks*=1.05;

    }


    if (total_marks>=90){

    // Display results
        cout<<"Grade A "<<total_marks;
    
    }

// Function: if
    else if(total_marks>=80){
        cout<<"Grade B "<<total_marks;

    }

// Function: if
    else if(total_marks>=70){
        cout<<"Grade C "<<total_marks;

    }

// Function: if
    else if(total_marks>=60){
        cout<<"Grade D "<<total_marks;
        
    }
    
    else{
        cout<<"Fail";
    }

    return 0;

}