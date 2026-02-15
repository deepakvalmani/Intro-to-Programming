/*
 * Filename: calculate-power-2.cpp
 * Week: 4
 * Description: Calculate Power 2
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Function definitions and calls
 */


#include <iostream>
using namespace std;

// Function: pow function
double pow_function(){
    int a,b;
cout<<"Enter digit";
cin>>a;
cout<<"Enter power";
cin>>b;
double result=1;
for(int i=1;i<=b;i++){
     result=result*a;
}
   
return result;

}

// Main program starts here
int main() {
  double result = pow_function();

    // Display results
    cout<<result;
    return 0;
}