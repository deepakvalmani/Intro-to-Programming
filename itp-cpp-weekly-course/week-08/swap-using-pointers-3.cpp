/*
 * Filename: swap-using-pointers-3.cpp
 * Week: 8
 * Description: Swap Using Pointers 3
 * 
 * This program demonstrates:
 * - Function definitions and calls
 * - Pointers and references
 */


#include <iostream>
using namespace std;


// Function: SwapPointers
void SwapPointers(int * &a, int * &b){
    int* temp = a;
    a = b;
    b = temp;
}


// Main program starts here
int main() {
    int a = 5; 
    int b = 10;

    // Perform calculations
    int *ptr1 = &a;
    int *ptr2 = &b;

    // Display results
    cout<<a<<"\t"<<b<<"\t"<<endl;
    cout<<ptr1<<"\t"<<ptr2<<"\t"<<endl;
    SwapPointers(ptr1, ptr2);
    cout<<a<<"\t"<<b<<"\t"<<endl;
    cout<<ptr1<<"\t"<<ptr2<<"\t"<<endl;
    return 0;
}