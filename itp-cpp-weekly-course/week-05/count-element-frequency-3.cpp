/*
 * Filename: count-element-frequency-3.cpp
 * Week: 5
 * Description: Count Element Frequency 3
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - Arrays
 */


#include<iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

// Function: count frequency
void count_frequency(){



    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    int freq[11] = {0};


    srand(time(0)); 

    cout << "Random Array: ";
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 11; 
        cout << arr[i] << " ";
        freq[arr[i]]++;
    }

cout << "\n\nFrequency of values:\n";
    for(int i = 0; i < 11; i++) {
        if(freq[i] > 0) {
            cout << i << " _>" << freq[i]<<endl;
        }
  }

}


// Main program starts here
int main(){
    count_frequency();
    return 0;
}
