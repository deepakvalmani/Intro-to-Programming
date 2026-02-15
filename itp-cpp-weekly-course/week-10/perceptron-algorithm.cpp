/*
 * Filename: perceptron-algorithm.cpp
 * Week: 11
 * Description: Perceptron Algorithm
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 */


#include <iostream>
using namespace std;


// Main program starts here
int main(){
    
    double w = 0.0, b = 0.0, learning_rate = 0.001, perceptron, error, guess_value, target = 14.0;
    int x, count_c = 0;;

    // Perform calculations
    for (int j = 0; j < 10; j++){
        cout<<"Enter the value of X: ";

    // Get input from user
        cin>>x;
        target = 2*x*x + 4;
        for(int i = 0; i < 1000; i++){
            perceptron = w * x + b;
            error = target - perceptron;
            w += learning_rate * x * error;
            b += learning_rate * error ;     

        }
        
        guess_value = perceptron - target;


    // Display results
        cout<<"prediction at x = "<< x <<": "<<perceptron<<endl;
        if( (guess_value < 1.0) && (guess_value > -1.0)) {
            cout<<"guess is correct "<<endl;
            count_c++;
        }
        else{
            cout<<"guess is incorrect "<<endl;
        }   
    }
    cout<<"total correct values = "<< count_c<<endl;  
    return 0;
}