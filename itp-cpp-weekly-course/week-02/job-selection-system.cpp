/*
 * Filename: job-selection-system.cpp
 * Week: 2
 * Description: Job Selection System
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 * - Function definitions and calls
 */


#include<iostream>
using namespace std;

// Function: jobselection
void jobselection(){
    int marks,ex;
    cout<<"Enter marks";
    cin>>marks;
    cout<<"Enter experience";
cin>>ex;



 if(marks>=70 && ex>=2){
    cout<<"associate developer";
}

// Function: if
else if(marks>=60 && ex>=1){
    cout<<"assistant developer";
}

// Function: if
else if(marks>=50){
    cout<<"trainee developer";
}
else
cout<<"not eligible";
}

// Main program starts here
int main(){
    jobselection();
    return 0;
}