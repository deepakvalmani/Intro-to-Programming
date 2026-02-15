/*
 * Filename: loop-exercise-13.cpp
 * Week: 3
 * Description: Loop Exercise 13
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Arrays
 */


#include <iostream>
using namespace std;


// Main program starts here
int main(){
    int num, square, count_n = 0, count_p = 0, count = 0;

    do { 
        cout <<"Enter a number: ";

    // Get input from user
        cin >> num;

    // Perform calculations
        square = num*num;

    // Display results
        cout<<"Square of the given number is = "<<square<<endl;
        
        if (num > 0){
            count_p++;
        }
        if (num<-1){
            count_n++;
        }
        if (num>=100 && num <=200){
            count++;
        }
    }
    while (num<15 || num>25);

    cout<<"Postive Numbers = "<<count_p<<endl;
    cout<<"Negative Numbers = "<<count_n<<endl;
    cout<<"Total Count of [100-200] = "<<count<<endl;

    return 0;
}