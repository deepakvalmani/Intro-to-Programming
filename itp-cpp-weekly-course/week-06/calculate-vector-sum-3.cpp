/*
 * Filename: calculate-vector-sum-3.cpp
 * Week: 6
 * Description: Calculate Vector Sum 3
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 * - Vectors (dynamic arrays)
 */


#include <iostream>
#include<vector>
using namespace std;

// Function: vector sum
void vector_sum(){
int num,integers;
cout<<"how many integers do you wanna enter";
cin>>num;
cout<<"enter integers";
vector<int>numbers{};
for(int i=0;i<num;i++){
    cin>>integers;
    numbers.push_back(integers);
}
int sum=0;
for(int val:numbers){
    sum+=val;
    
}
cout<<"Sum of numbers"<<sum;
}

// Main program starts here
int main() {
    vector_sum();
    
    return 0;
}