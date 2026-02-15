/*
 * Filename: shipping-cost-calculator-2.cpp
 * Week: 2
 * Description: Shipping Cost Calculator 2
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - String operations
 */


#include <iostream>
#include <string>
using namespace std;


// Main program starts here
int main() {
    double weight, order_value, shipping_cost = 0;
    string zone, express;
    double A=5;
    double B=7;
    double C=10;


    cout << "Enter weight: ";

    // Get input from user
    cin >> weight;
    cout << "Enter order value: ";
    cin >> order_value;
    cout << "Enter Zone (A/B/C): ";
    cin >> zone;

    // Display results
    cout << "Express delivery? (Yes/No): ";
    cin >> express;


    // Perform calculations
    if (express == "Yes" || express == "yes"){
         A*=1.5;
         B*=1.5;
         C*=1.5;

    }
    if (order_value > 200) {
        shipping_cost = 0;  // Free shipping
    } else {
        
        if (zone == "A")
            shipping_cost = weight*A;
        else if (zone == "B")
            shipping_cost = weight*B;
        else if (zone == "C")
            shipping_cost = weight*C;

        if (weight > 50)
            shipping_cost += 30;
        else if (weight > 20)
            shipping_cost += 15;

        

    }

    cout << "Shipping Cost = $" << shipping_cost << endl;

    return 0;
}
