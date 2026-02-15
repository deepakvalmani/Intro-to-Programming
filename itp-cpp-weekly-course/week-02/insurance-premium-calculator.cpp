/*
 * Filename: insurance-premium-calculator.cpp
 * Week: 2
 * Description: Insurance Premium Calculator
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 */


#include <iostream>
using namespace std;


// Main program starts here
int main() {
    double basePremium = 1000;
    double ageFactor = 0.0;
    double expFactor = 0.0;
    double vehicleFactor = 0.0;

    int age, experience, vehicleType, accidents;

    cout << "Enter your age: ";

    // Get input from user
    cin >> age;

    cout << "Enter driving experience in years: ";
    cin >> experience;


    // Display results
    cout << "Select vehicle type (1 = Sedan, 2 = SUV, 3 = Sports Car): ";
    cin >> vehicleType;

    cout << "Enter number of accidents in last 3 years: ";
    cin >> accidents;

    if (age < 25) {
        ageFactor = 0.20;
    } else {
        if (age > 65) {
            ageFactor = 0.15;
        }
    }

    if (experience < 2) {
        expFactor = 0.30;
    } else {
        if (experience <= 5) {
            expFactor = 0.10;
        }
    }

    if (vehicleType == 2) {
        vehicleFactor = 0.20;
    } else if (vehicleType == 3) {
        vehicleFactor = 0.50;
    }


    // Perform calculations
    double premium = basePremium * (1 + ageFactor + expFactor + vehicleFactor);

    if (accidents > 0) {
        premium = premium * (1 + (0.25 * accidents));
    }

    cout << "Your insurance premium is: $" << premium << endl;

    return 0;
}
