/*
 * Filename: function-exercise-5.cpp
 * Week: 4
 * Description: Function Exercise 5
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 * - Function definitions and calls
 */


#include<iostream>

using namespace std;



// Main program starts here
int main(){

double calories, fat_grams, fat_cal, fat_cal_percent;
cout<<"enter the calories and fat grams: ";


    // Get input from user
cin>>calories>>fat_grams;

    // Perform calculations
fat_cal = fat_grams*9;
fat_cal_percent =  fat_cal/calories;

if (calories<1||fat_grams<1||fat_cal>calories){
    cout<<"either the calories or fat grams were incorrectly entered."<<endl;
    return 1;
}

if (fat_cal_percent<calories*0.3){

    // Display results
    cout<<"food is low in fat."<<endl;

}
cout<<"percentage of calories from fat: "<<fat_cal_percent<<endl;

    return 0;
}