/*
 * Filename: sum-of-cubes-5.cpp
 * Week: 3
 * Description: Sum Of Cubes 5
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 */


#include <iostream>
using namespace std;

// Function: sumofcubes
int sumofcubes(){
    int n,sum=0;
cout<<"Enter number";
cin>>n;
for(int i=1;i<=n;i++){


sum+=i*i*i;

// cout<<sum;
}
cout<<sum;
}

// Main program starts here
int main() {
    
    sumofcubes();
    return 0;
}
