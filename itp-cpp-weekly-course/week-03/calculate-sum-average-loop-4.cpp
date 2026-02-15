/*
 * Filename: calculate-sum-average-loop-4.cpp
 * Week: 3
 * Description: Calculate Sum Average Loop 4
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Arrays
 */


#include <iostream>
using namespace std;


// Main program starts here
int main(){
    int size, sum1 = 0, sum2 = 0;
    double mean1, mean2;
    cout<<"Enter the number of subjects: ";

    // Get input from user
    cin>>size;
    int std1_marks[size], std2_marks[size];

    cout<<"Enter marks of stdudent 1 for "<<size<<" subjects: ";

    // Perform calculations
    for(int i = 0; i < size; i++){
        cin>>std1_marks[i];
        sum1 += std1_marks[i];
    }
    cout<<"Enter marks of stdudent 2 for "<<size<<" subjects: ";
    for(int i = 0; i < size; i++){
        cin>>std2_marks[i];
        sum2 += std2_marks[i];
    }

    // calculatig the averge 
    mean1 = sum1/(size );
    mean2 = sum2/(size );

    // declaring the variable of sum of deviations
    double sum_of_devt = 0;

    for(int i = 0; i < size; i++){
        sum_of_devt += (std1_marks[i] - mean1)*(std2_marks[i] - mean2);  
    }

  

    // calculating covariance
    double covariance;
    covariance = (sum_of_devt)/(size-1);

    // Display results
    cout<<"Covariance = "<<covariance<<endl;
    

    return 0;
}