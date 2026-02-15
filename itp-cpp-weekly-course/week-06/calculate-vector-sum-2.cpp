/*
 * Filename: calculate-vector-sum-2.cpp
 * Week: 6
 * Description: Calculate Vector Sum 2
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
    int s,num;
    cout<<"how many integers you want to store";
    cin>>s;
    cout<<"write your numbers here";
    // cin>>num;
    vector<int>numbers{};
    for(int i=0;i<s;i++){
        cin>>num; 
        numbers.push_back(num);
    }
    int sum = 0;
    for(int val:numbers){
        sum += val;
        }
        cout<<"sum = "<<sum<<endl;
    }
   

// Main program starts here
    int main() {
    
    vector_sum();
   
    
    return 0;
}