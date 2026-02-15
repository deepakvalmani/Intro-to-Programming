/*
 * Filename: programming-exercise-2.cpp
 * Week: 11
 * Description: Programming Exercise 2
 * 
 * This program demonstrates:
 * - Basic input/output
 */


#include<iostream>
using namespace std;

// Main program starts here
int main(){
    
    char cofee_type;

    bool is_double, is_manual;

    cout<<"enter the type of cofee B/W ";

    // Get input from user
    cin>>cofee_type;

    // Display results
    cout<<"Is the cup size double?(1/0) ";
    cin>>is_double;
    cout<<"Is the cup size manual?(1/0) ";
    cin>>is_manual;
      


    cout<<"Put Water time: "<<15*(1+0.5*is_double)*(cofee_type=='W') + 20*(1+0.5*is_double)*(cofee_type=='B')<<" minutes"<<endl;

    cout<<"Sugar  time: "<<15*(1+0.5*is_double)*(cofee_type=='W') + 20*(1+0.5*is_double)*(cofee_type=='B')<<" minutes"<<endl;

    cout<<"Mix Well  time: "<<20*(1+0.5*is_double)*(cofee_type=='W') + 25*(1+0.5*is_double)*(cofee_type=='B')<<" minutes"<<endl;

    cout<<"Add Coffee  time: "<<2*(1+0.5*is_double)*(cofee_type=='W') + 15*(1+0.5*is_double)*(cofee_type=='B')<<" minutes"<<endl;

    cout<<"Add Milk  time: "<<4*(1+0.5*is_double)*(cofee_type=='W') + 0*(1+0.5*is_double)*(cofee_type=='B')<<" minutes"<<endl;

    cout<<"Mix Well  time: "<<20*(1+0.5*is_double)*(cofee_type=='W') + 25*(1+0.5*is_double)*(cofee_type=='B')<<" minutes"<<endl;



return 0;
}