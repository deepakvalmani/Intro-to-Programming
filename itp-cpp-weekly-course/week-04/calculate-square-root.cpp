/*
 * Filename: calculate-square-root.cpp
 * Week: 4
 * Description: Calculate Square Root
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 */


#include <iostream>
using namespace std;


// Main program starts here
int main() {

    double N;

    cout <<"Enter a positive number: ";

    // Get input from user
    cin >> N;


    if (N<0) {

    // Display results
        cout <<"Square root of negative number not possible." << endl;
    
        return 0;
    }

double a = 0, b;
 if(N<1)
        b = 1;    
    else
        b = N;     
    double mid;
    double tolerance = 0.01;  

while((b - a)>tolerance) {

    // Perform calculations
        mid =(a + b) / 2.0;
        double fmid = mid*mid-N;

        if(fmid>0) {
            b =mid;   
        } else {
            a = mid;   
        }
    }

double result = (a+b)/2.0;

    
int temp = result*100+0.5;  
    result = temp/100.0;

    cout <<"Square root of " <<N<< " = " <<result<<endl;

    return 0;
}
