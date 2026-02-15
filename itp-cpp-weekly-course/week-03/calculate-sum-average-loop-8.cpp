/*
 * Filename: calculate-sum-average-loop-8.cpp
 * Week: 3
 * Description: Calculate Sum Average Loop 8
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Arrays
 * - Recursion
 */


#include <iostream>
using namespace std;


// Main program starts here
int main() {
    int num_days, num_employees, num_products;

    cout << "Enter number of days: ";

    // Get input from user
    cin >> num_days;

    cout << "Enter number of employees: ";
    cin >> num_employees;

    cout << "Enter number of products: ";
    cin >> num_products;

    double sales[num_products][num_employees];

    // Perform calculations
    for (int i = 0; i < num_products; i++) {
        for (int j = 0; j < num_employees; j++) {
            sales[i][j] = 0;
        }
    }

    for (int day = 0; day < num_days; day++) {

    // Display results
        cout << "\nDay " << (day + 1) << " data:\n";
        for (int emp = 0; emp < num_employees; emp++) {
            cout << "Employee " << (emp + 1) << ":\n";
            for (int prod = 0; prod < num_products; prod++) {
                double amount;
                cout << "  Product " << (prod + 1) << " sales: ";
                cin >> amount;
                sales[prod][emp] = sales[prod][emp] + amount;
            }
        }
    }

    cout << "\nMonthly Sales Summary:\n\n";

    cout << "Product";
    for (int emp = 0; emp < num_employees; emp++) {
        cout << "   Emp" << (emp + 1);
    }
    cout << "   Product_Total\n";

    double total_by_employee[num_employees];
    for (int e = 0; e < num_employees; e++) {
        total_by_employee[e] = 0;
    }

    for (int prod = 0; prod < num_products; prod++) {
        double total_by_product = 0;
        cout << "Prod" << (prod + 1);
        for (int emp = 0; emp < num_employees; emp++) {
            cout << "     " << sales[prod][emp];
            total_by_product = total_by_product + sales[prod][emp];
            total_by_employee[emp] = total_by_employee[emp] + sales[prod][emp];
        }
        cout << "     " << total_by_product << "\n";
    }

    cout << "Emp_Total";
    for (int emp = 0; emp < num_employees; emp++) {
        cout << "     " << total_by_employee[emp];
    }
    cout << "\n";

    return 0;
}
