/*
 * Filename: struct-example-2.cpp
 * Week: 9
 * Description: Struct Example 2
 * 
 * This program demonstrates:
 * - Function definitions and calls
 * - Structures
 */


#include <iostream>
using namespace std;

struct phone {
    int areaCode;
    int exchange;
    int number;
};

// Function: display
void display(phone p1){
    cout<< "your number is ("<<p1.areaCode<<") "<<p1.exchange<<"-"<<p1.number<<endl;
}


// Main program starts here
int main() {
    phone number1, number2;
    number1.areaCode = 415;
    number1.exchange = 555;
    number1.number = 1212;
    cout<<"Enter area code:";

    // Get input from user
    cin>>number2.areaCode;
    cout<<"Enter exchange:";
    cin>>number2.exchange;
    cout<<"Enter number:";
    cin>>number2.number;
    
    display(number1);
    display(number2);

    
    return 0;
}