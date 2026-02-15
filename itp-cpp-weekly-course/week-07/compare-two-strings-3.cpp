/*
 * Filename: compare-two-strings-3.cpp
 * Week: 7
 * Description: Compare Two Strings 3
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - String operations
 */


#include<iostream>
#include<cstring>
using namespace std;

// Function: compare
void compare(){
    string str1,str2;
    cout<<"enter str1";
    cin>>str1;
    cout<<"enter str2";
    cin>>str2;
    if(str1==str2){
    cout<<"strings are equal";
    }
else if (str1.length()>str2.length()){
cout<<"str1 is greater";
}
else
cout<<"str2 is greater";

}


// Main program starts here
int main(){
    compare();
}
