/*
 * Filename: calculate-power-4.cpp
 * Week: 4
 * Description: Calculate Power 4
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 * - Arrays
 * - Pointers and references
 */


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;


// Function: rand gen
void rand_gen(int *R, int *N, int numbers[]) {
    for (int i = 0; i < *R; i++) {
        numbers[i] = rand() % (*N);  
    }
}


// Function: stats
void stats(double *mean, double *sd, int numbers[], int *R) {
    double sum = 0.0;

    // Calculate mean
    for (int i = 0; i < *R; i++) {
        sum += numbers[i];
    }
    *mean = sum / (*R);

    // Calculate standard deviation
    double sum_of_Squared_Differences = 0.0;
    for (int i = 0; i < *R; ++i) {
        sum_of_Squared_Differences += pow(numbers[i] - *mean, 2);
    }

    *sd = sqrt(sum_of_Squared_Differences / (*R));
}


// Main program starts here
int main() {
    int N, R;
    double mean, sd;
    srand(time(NULL));

    cout << "Enter N and R: ";

    // Get input from user
    cin >> N >> R;

    int numbers[R];

    rand_gen(&R, &N, numbers);
    stats(&mean, &sd, numbers, &R);


    // Display results
    cout << "\nGenerated Numbers: ";

    // Perform calculations
    for (int i = 0; i < R; i++) {
        cout << numbers[i] << " ";
    }

    cout << "\n\nMean = " << mean;
    cout << "\nStandard Deviation = " << sd << endl;

    return 0;
}
