/*
 * Filename: sum-of-cubes-2.cpp
 * Week: 3
 * Description: Sum Of Cubes 2
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 */


#include <iostream>
using namespace std;

// Function: sumof Cubes
int sumof_Cubes(){
    int n,sum=0;
    cout<<"Enter integer";
    cin>>n;
    for(int i=0;i<=n;i++){
        i*i*i;
        sum+=  i*i*i;
    }
cout<<sum;
}


// Main program starts here
int main() {
    sumof_Cubes();
    
    return 0;
}