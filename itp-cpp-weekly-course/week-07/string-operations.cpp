/*
 * Filename: string-operations.cpp
 * Week: 7
 * Description: String Operations
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 * - String operations
 */


#include<iostream>
using namespace std;

// Main program starts here
int main(){


string weekday, vacation;
cout<<"enter weekday and vacation Y/N ";


    // Get input from user
cin>>weekday>>vacation;


    // Perform calculations
if (weekday=="N"&& vacation =="N"){

    // Display results
    cout<<"sleep in True";
}


// Function: if
else if (weekday=="Y"&& vacation =="N"){
    cout<<"sleep in False";

}

// Function: if
else if (weekday=="N"&& vacation =="T"){
    cout<<"sleep in True";
}

// Function: if
else if (weekday=="Y"&& vacation =="Y"){
    cout<<"sleep in True";
}

return 0;
}