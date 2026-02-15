/*
 * Filename: function-exercise-8.cpp
 * Week: 4
 * Description: Function Exercise 8
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - Arrays
 * - Recursion
 */


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


// Main program starts here
int main() {
    const int width = 80;   
    const int height = 20;   
    double x_minn, x_maxx;

    cout << "Enter minn and maxx values of x in radians: (-6.28, 6.28) ";

    // Get input from user
    cin >> x_minn >> x_maxx;

   // creating grid
    char grid[height + 1][width + 1];

    // Perform calculations
    for (int i = 0; i <= height; i++) {
        for (int j = 0; j <= width; j++) {
            grid[i][j] = ' ';
        }
    }

    
     double y_minn = -1.0, y_maxx = 1.0;

    int mid_val_y = height / 2;
    int mid_val_x = width / 2;
    grid[mid_val_y][mid_val_x] = '+';
    for (int j = 0; j <= width; j++) grid[mid_val_y][j] = '-';  
    for (int i = 0; i <= height; i++) grid[i][mid_val_x] = '|';  
     

   
    for (int j = 0; j <= width; j++) {
        double x = x_minn + j*((x_maxx - x_minn) / width); 
        double y = sin(x);                        

        int grid_x = j;
        int grid_y = round(( y_maxx - y) / (y_maxx - y_minn) * height);

        
        if (grid_y >= 0 && grid_y <= height)
            grid[grid_y][grid_x] = '*';
    }

    //printing the final grid
    for (int i = 0; i <= height; i++) {
        for (int j = 0; j <= width; j++) {

    // Display results
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
