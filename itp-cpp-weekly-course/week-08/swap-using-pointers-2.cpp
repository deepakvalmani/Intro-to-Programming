/*
 * Filename: swap-using-pointers-2.cpp
 * Week: 8
 * Description: Swap Using Pointers 2
 * 
 * This program demonstrates:
 * - Function definitions and calls
 * - Pointers and references
 */


#include <iostream>
using namespace std;

// Function: swap val
void swap_val(int &A,int &B){
int  temp=A;
A=B;
B=temp;   

}

// Main program starts here
int main() {
    int A,B;
    cout<<"enter integers";

    // Get input from user
cin>>A>>B;

    // Display results
cout<<"before swaping\t"<<A<<"\t"<<B<<endl;
swap_val(A,B);
cout<<"after swaping\t"<<A<<"\t"<<B<<endl;
    //  swap_val(A,B);
    
    return 0;
}