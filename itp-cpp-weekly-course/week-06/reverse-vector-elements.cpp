/*
 * Filename: reverse-vector-elements.cpp
 * Week: 6
 * Description: Reverse Vector Elements
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

// Function: reverse
void reverse(){
    int n,elements;
cout<<"enter number of integers you wanna enter";
cin>>n;
cout<<"enter elements";
vector<int>numbers{};
for(int i=0;i<n;i++){
    cin>>elements;
    numbers.push_back(elements);

}
for (int i = n - 1; i >= 0; i--)
    cout << numbers[i]<< " ";
}

// Main program starts here
int main() {
  reverse();

    
    
    return 0;
}