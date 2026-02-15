/*
 * Filename: conditional-exercise.cpp
 * Week: 2
 * Description: Conditional Exercise
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 */


#include<iostream>
using namespace std;

// Main program starts here
int main(){

    double scale_num;
    cout<<"Enter the Richter Scale Number ";

    // Get input from user
    cin>>scale_num;

    if (scale_num<1){
        return 1;
    }

// Function: if
    else if (scale_num<5.0){

    // Display results
        cout<<"Little or no Damage."<<endl;

    }


// Function: if

    // Perform calculations
    else if (scale_num<5.5 && scale_num>=5.0){
        cout<<"Some Damage."<<endl;
        
    }

// Function: if
    else if (scale_num<6.5 && scale_num>=5.5){
        cout<<"Serious damage: walls may crack or fall."<<endl;
        
    }

// Function: if
    else if (scale_num<7.5 && scale_num>=6.5){
        cout<<"Disaster: House and Buildings may collapse."<<endl;
        
    }

// Function: if
    else if (scale_num>7.5){
        cout<<"Catastrophe: most buildings destroyed."<<endl;
        
    }
    
    return 0;
}