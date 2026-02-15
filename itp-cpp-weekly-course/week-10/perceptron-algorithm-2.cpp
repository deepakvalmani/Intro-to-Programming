/*
 * Filename: perceptron-algorithm-2.cpp
 * Week: 11
 * Description: Perceptron Algorithm 2
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 */


#include <iostream>
using namespace std;


// Main program starts here
int main(){
    double w = 0.0, b = 0.0, learning_rate = 0.001, perceptron, error;
    int x = 3, target = 14;
    

    // Perform calculations
    for(int i = 0; i < 1000; i++){
        perceptron = w * x + b;
        error = target - perceptron;
        w += learning_rate * x * error;
        b += learning_rate * error ;
         
        if (i % 100 == 0){

    // Display results
            cout<<"Step "<<i<<" prediction = "<<perceptron<<", error = "<<error<<endl;
        }

    }

    

    cout<<"Final prediction at x = 3: "<<perceptron<<endl;
    cout<<"Target Value: "<<target<<endl;
    cout<<"Final weight = "<<w<<", bias = "<<b<<endl;

    
    return 0;
}