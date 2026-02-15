/*
 * Filename: loop-exercise-16.cpp
 * Week: 3
 * Description: Loop Exercise 16
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 */


#include<iostream>
using namespace std;



// Main program starts here
int main(){

    int choice, seats,  sopho, juniors;
    double income;


    while (true){
    if (choice == 1){

    // Display results
        cout<<"How many tickets would you like to buy? ";

    // Get input from user
        cin>>seats;
        if (seats > 500){
            cout<<"Sorry, the available seats are 500 "<<endl;
        }
        else {
            cout<<"How many Sopho? ";
            cin>>sopho;
            cout<<"How many Juniors? ";
            cin>>juniors;
        }
    }

    // Perform calculations
    income = (sopho*100) +(juniors*50);
        if (seats > 3){
            income *= 0.8;
        }
    if (choice == 2){
        cout<<"for seats: "<<seats<<" "<<"income: "<<income<<endl;
    }

    if (choice == 3){
        break;
    }
    cout<<"1. Purchase a ticket \n2. Display information \n3. Exit"<<endl;
    cout<<"Enter your choice please: ";
    cin>>choice;
    }

    return 0;
}

