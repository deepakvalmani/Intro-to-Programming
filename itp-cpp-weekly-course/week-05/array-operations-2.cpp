/*
 * Filename: array-operations-2.cpp
 * Week: 5
 * Description: Array Operations 2
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - 2D arrays / matrices
 */


#include <iostream>
using namespace std;


// Main program starts here
int main() {
    double Land[8][3] = {
        {1, 150.6, 126.9},
        {2, 354, 451.51},
        {3, 172.23, 75.65},
        {4, 73.33, 707.17},
        {5, 415.15, 116.17},
        {6, 415.15, 116.17},
        {7, 415.15, 116.17},
        {8, 415.15, 116.17}
    };

    double max_area = 0;
    int land_id = 0;


    // Perform calculations
    for (int i = 0; i < 8; i++) {
        double area = Land[i][1] * Land[i][2];

    // Display results
        cout << "Land " << Land[i][0] << " area: " << area << endl;
        if (area > max_area) {
            max_area = area;
            land_id = Land[i][0];
        }
    }

    cout << "Largest land piece is Land " << land_id << " with area " << max_area << endl;

    return 0;
}
