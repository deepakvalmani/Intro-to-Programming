/*
 * Filename: conditional-exercise-3.cpp
 * Week: 2
 * Description: Conditional Exercise 3
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 */


#include<iostream>
using namespace std;


// Main program starts here
int main(){

double nts_marks, fsc_marks;

cout<<"enter your nts and fsc marks: ";


    // Get input from user
cin>>nts_marks>>fsc_marks;



    // Perform calculations
if (fsc_marks > 70 && nts_marks >= 70){

    // Display results
    cout<<"Oxford University IT"<<endl;
}

// Function: if
else if (fsc_marks>70 && nts_marks>=60){
    cout<<"Oxford University Electronics"<<endl;

}

// Function: if
else if (fsc_marks>70 && nts_marks>=50){
    cout<<"Oxford University Telecommunication "<<endl;

}

if ((fsc_marks >= 60 || fsc_marks <= 70) && nts_marks>=50){
    cout<<"MIT IT"<<endl;
}
else if ((fsc_marks >= 50 || fsc_marks < 60) && nts_marks>=50){
    cout<<"MIT Chemical"<<endl;

}
else if ((fsc_marks > 40 || fsc_marks < 50) && nts_marks>=50){
    cout<<"MIT Computer"<<endl;

}


    return 0;

}