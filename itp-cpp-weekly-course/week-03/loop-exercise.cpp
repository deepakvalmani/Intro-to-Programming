/*
 * Filename: loop-exercise.cpp
 * Week: 3
 * Description: Loop Exercise
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 */


#include <iostream>
using namespace std;


// Main program starts here
int main (){
    int num, count = 0, check ;

while(true){
    cout<<"Enter the number: ";

    // Get input from user
    cin>>num;


    // Perform calculations
    if (num <=-1){
        break;

    // Display results
        cout<<"count: "<<count;
    }
    check =0;
    while (check< num && num>0){
    cout<<"CL1002 exam is in week 09 "<<endl;
    check++;
    count++ ;
}
  }
    
cout<<"count: "<<count;
    return 0;
}