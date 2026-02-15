/*
 * Filename: calculate-sum-average-loop-7.cpp
 * Week: 3
 * Description: Calculate Sum Average Loop 7
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Arrays
 */


#include<iostream>
using namespace std;



// Main program starts here
int main(){
    int size = 6;
    double numbers[size], rand_num ,sum = 0, avg = 0;
    srand(time(NULL));

    // Perform calculations
    for(int i = 0; i < size; i++){
        numbers[i] =  rand_num = static_cast<double> (rand())/RAND_MAX;
        sum += numbers[i];

    // Display results
        cout<<"Array elements are: "<<numbers[i]<<endl;
    }
    avg = sum/size;
    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<avg<<endl;

    return 0;
}