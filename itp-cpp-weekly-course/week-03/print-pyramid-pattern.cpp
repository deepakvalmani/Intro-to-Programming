/*
 * Filename: print-pyramid-pattern.cpp
 * Week: 3
 * Description: Print Pyramid Pattern
 * 
 * This program demonstrates:
 * - Function definitions and calls
 */


#include <iostream>
using namespace std;


// Function: volumeCalc
double volumeCalc(int a, int h) {
    double volume = (a * a * h) / 3.0;
    return volume;
}


// Function: getData
void getData() {
    int a, h;
    cout << "Enter the value of base: ";
    cin >> a;
    cout << "Enter the value of height: ";
    cin >> h;

    double result = volumeCalc(a, h);
    cout << "Volume of pyramid = " << result << endl;
}


// Main program starts here
int main() {
    getData();
    return 0;
}
