/*
 * Filename: reverse-vector-elements-4.cpp
 * Week: 6
 * Description: Reverse Vector Elements 4
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 * - Arrays
 * - Vectors (dynamic arrays)
 */


#include <iostream>
#include<vector>
using namespace std;


// Function: reverse num
void reverse_num(){
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
   for (int i = s - 1; i >= 0; i--)
    cout << numbers[i] << " ";

}

// Main program starts here
int main(){
reverse_num();

return 0;
}