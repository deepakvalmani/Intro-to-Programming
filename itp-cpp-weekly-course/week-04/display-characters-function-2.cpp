/*
 * Filename: display-characters-function-2.cpp
 * Week: 4
 * Description: Display Characters Function 2
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 */


#include <iostream>
using namespace std;

// Function: displaychars
int displaychars(){
    int num;
    char a;
    cout<<"Enter number";
    cin>>num;
    cout<<"Enter character";
    cin>>a;
    for(int i=0;i<num;i++){
        cout<<a;
    }

}

// Main program starts here
int main() {
   
    displaychars();
    return 0;
}