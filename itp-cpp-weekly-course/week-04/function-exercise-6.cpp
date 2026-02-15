/*
 * Filename: function-exercise-6.cpp
 * Week: 4
 * Description: Function Exercise 6
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 */


#include <iostream>
using namespace std;

// Function: chars
void chars(){
    int n;
    char a;
cout<<"Enter number";
cin>>n;
cout<<"enter character";
cin>>a;
for (int i = 0; i < n; i++){
    cout<<a;
}

}



// Main program starts here
int main() {
    
    chars();
    return 0;
}