/*
 * Filename: generate-random-numbers.cpp
 * Week: 1
 * Description: Generate Random Numbers
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - Arrays
 * - Recursion
 */


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <algorithm>
using namespace std;

const int MAX_SIZE = 100;
const int R = 5;   // recovery days
const int T = 30;  // simulation days


// Main program starts here
int main() {
    srand(time(NULL));

    int width, height, infected_initial;
    double infection_p, worsening_p;

    cout << "Enter grid width and height: ";

    // Get input from user
    cin >> width >> height;
    cout << "Enter initial number of infected individuals: ";
    cin >> infected_initial;
    cout << "Enter infection probability p (0..1): ";
    cin >> infection_p;
    cout << "Enter worsening probability w (0..1): ";
    cin >> worsening_p;

    int grid[MAX_SIZE][MAX_SIZE] = {0};
    int days_infected[MAX_SIZE][MAX_SIZE] = {0};

    // randomly infect initial individuals

    // Perform calculations
    for (int i = 0; i < infected_initial; i++) {
        int a, b;
        do {
            a = rand() % height;
            b = rand() % width;
        } while (grid[a][b] != 0);
        grid[a][b] = 1 + rand() % 9;
        days_infected[a][b] = 1;
    }

    // function to print grid
    auto printGrid = [&](int grid[MAX_SIZE][MAX_SIZE]) {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {

    // Display results
                if (grid[i][j] == 0) cout << ".";
                else if (grid[i][j] == -1) cout << "R";
                else if (grid[i][j] == 10) cout << "X";
                else cout << grid[i][j];
            }
            cout << endl;
        }
    };

    cout << "\nInitial grid state:\n";
    printGrid(grid);

    // simulate day by day
    for (int day = 1; day <= T; day++) {
        int next_grid[MAX_SIZE][MAX_SIZE];
        int next_days[MAX_SIZE][MAX_SIZE];

        // initialize next day grid
        for (int i = 0; i < height; i++)
            for (int j = 0; j < width; j++) {
                next_grid[i][j] = grid[i][j];
                next_days[i][j] = days_infected[i][j];
            }

        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                int state = grid[i][j];

                // skip recovered or dead
                if (state == -1 || state == 10) continue;

                // infected individuals
                if (state >= 1 && state <= 9) {
                    next_days[i][j] = days_infected[i][j] + 1;

                    double r = (double)rand() / RAND_MAX;
                    if (r < worsening_p) state++;
                    else state--;

                    if (state < 1) state = 1;   // minimum severity 1
                    if (state > 9) state = 10;  // death

                    if (next_days[i][j] >= R && state != 10) state = -1; // recovery

                    next_grid[i][j] = state;
                }

                // healthy individuals
                if (state == 0) {
                    int max_severity = 0;
                    int dx[4] = {-1, 1, 0, 0};
                    int dy[4] = {0, 0, -1, 1};

                    for (int k = 0; k < 4; k++) {
                        int ni = i + dx[k];
                        int nj = j + dy[k];
                        if (ni < 0 || ni >= height || nj < 0 || nj >= width) continue;

                        int neighbor = grid[ni][nj];
                        if (neighbor >= 1 && neighbor <= 9) {
                            double prob = (double)rand() / RAND_MAX;
                            if (prob < infection_p) {
                                int new_severity = 1 + rand() % neighbor;
                                max_severity = max(max_severity, new_severity);
                            }
                        }
                    }

                    if (max_severity > 0) {
                        next_grid[i][j] = max_severity;
                        next_days[i][j] = 1;
                    }
                }
            }
        }

        // copy next grid
        for (int i = 0; i < height; i++)
            for (int j = 0; j < width; j++) {
                grid[i][j] = next_grid[i][j];
                days_infected[i][j] = next_days[i][j];
            }

        // count statistics
        int healthy = 0, infected = 0, recovered = 0, dead = 0;
        for (int i = 0; i < height; i++)
            for (int j = 0; j < width; j++) {
                if (grid[i][j] == 0) healthy++;
                else if (grid[i][j] == -1) recovered++;
                else if (grid[i][j] == 10) dead++;
                else if (grid[i][j] >= 1 && grid[i][j] <= 9) infected++;
            }

        cout << "Day " << setw(2) << day << ": "
             << "Healthy: " << healthy << ", "
             << "Infected: " << infected << ", "
             << "Recovered: " << recovered << ", "
             << "Dead: " << dead << endl;
    }

    cout << "\nFinal grid state:\n";
    printGrid(grid);

    return 0;
}
