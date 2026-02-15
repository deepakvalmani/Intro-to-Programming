/*
 * Filename: struct-example.cpp
 * Week: 9
 * Description: Struct Example
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - Structures
 */


#include <iostream>
using namespace std;

struct comp_num {
    int real;
    int imaginary;
};


// Function: read com num
comp_num read_com_num() {
    comp_num c;
    char plus, i;
    cin >> c.real >> plus >> c.imaginary >> i;
    return c;
}


// Function: write comp num
void write_comp_num(comp_num c) {
    cout << c.real;
    if(c.imaginary >= 0) cout << " + " << c.imaginary << "i";
    else cout << " - " << -c.imaginary << "i";
}


// Function: add comp num
comp_num add_comp_num(comp_num c1, comp_num c2) {
    comp_num sum;
    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;
    return sum;
}


// Function: mult comp num
comp_num mult_comp_num(comp_num c1, comp_num c2) {
    comp_num prd;
    prd.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    prd.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return prd;
}


// Main program starts here
int main() {
    comp_num c1 = read_com_num();
    comp_num c2 = read_com_num();

    comp_num sum = add_comp_num(c1, c2);
    comp_num product = mult_comp_num(c1, c2);


    // Display results
    cout << "Sum: ";
    write_comp_num(sum);
    cout << endl;

    cout << "Product: ";
    write_comp_num(product);
    cout << endl;

    return 0;
}
