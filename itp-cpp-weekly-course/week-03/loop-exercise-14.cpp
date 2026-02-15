/*
 * Filename: loop-exercise-14.cpp
 * Week: 3
 * Description: Loop Exercise 14
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - String operations
 */


#include<iostream>
using namespace std;

// Main program starts here
int main(){
    string choice;
    int food_num;
    int quantity;
    double total_charges=0;


    // Display results
    cout<<"Burger = Rs 200\nFrench Fries = Rs 50\nPizza = Rs 500\nSandwiches = Rs 150\n";
    cout<<"Enter number of food types: ";

    // Get input from user
    cin>>food_num;


    // Perform calculations
    for(int i = 1; i<=food_num;i++){
        cout<<"Enter choice (B/F/P/S): ";
        cin>>choice;
        cout<<"Enter quantity: ";
        cin>>quantity;
        if (choice=="B"){
            total_charges += quantity*200;

        }

// Function: if
        else if (choice=="F"){
            total_charges += quantity*50;
            
        }

// Function: if
        else if (choice=="P"){
            total_charges += quantity*500;
            
        }

// Function: if
        else if (choice=="S"){
            total_charges += quantity*150;
            
        }
       ;
    }
    
    cout<<"Total charges: "<<total_charges<<endl;

    
return 0;
}