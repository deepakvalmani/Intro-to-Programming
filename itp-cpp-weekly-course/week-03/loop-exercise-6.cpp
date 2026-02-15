/*
 * Filename: loop-exercise-6.cpp
 * Week: 3
 * Description: Loop Exercise 6
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 */


#include<iostream>
using namespace std;



// Main program starts here
int main(){
    int num1, num2, input, result, count_r = 0, count_w = 0;
    srand(time(NULL));
     
while(true){

    // Perform calculations
    num1 = rand()%10+1;
    num2 = rand()%10+1;
    int minimmum = min(num1,num2);
    int maximum = max(num1, num2);


    // Display results
    cout<<minimmum<<"*"<<maximum<<" = ";

    // Get input from user
    cin>>input;
    if (input<=-1){
        break;
    }
    cout<<endl;
    result = num1*num2;
    if (input == result){
        cout<<"Correct "<<endl;
        count_r++;
    }
    else{
        cout<<"Wrong "<<endl;
        count_w++;
    }
}
cout<<endl;
cout<<"Pass = "<<count_r<<endl;
cout<<"Fail = "<<count_w<<endl; 

    return 0;

}