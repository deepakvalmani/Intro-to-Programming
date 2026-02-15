/*
 * Filename: bitwise-and-or-operations-2.cpp
 * Week: 2
 * Description: Bitwise And Or Operations 2
 * 
 * This program demonstrates:
 * - Basic input/output
 */


#include<iostream>
using namespace std;


// Main program starts here
int main() {

    int a;
    int b;
    cout<<"Enter two numbers: ";

    // Get input from user
    cin>>a>>b;


    // Display results
    cout<<"bitwise AND: "<<(a & b)<<endl;  
    cout<<"bitwise OR: "<<(a | b)<<endl;  

    return 0;
}
