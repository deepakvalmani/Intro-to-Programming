/*
 * Filename: conditional-exercise-2.cpp
 * Week: 2
 * Description: Conditional Exercise 2
 * 
 * This program demonstrates:
 * - Conditional statements (if/else)
 * - Recursion
 */


#include<iostream>
using namespace std;


// Main program starts here
int main() {
    int number, unit, hnd, thsnd, ten_thsnd, lac;

    cout << "Enter an amount in figures: ";

    // Get input from user
    cin >> number;

    // Display results
    cout << "In words: ";
    if (number < 0) {
        cout << "Negative ";

    // Perform calculations
        number *= -1;
    }

    unit = (number % 100);
    hnd = (number / 100) % 10;
    thsnd = (number / 1000) % 10;
    ten_thsnd = (number / 10000) % 10;
    lac = (number / 100000) % 10;

    if (number == 0) {
        cout << "Zero Rupee ";
        return 0;
    }

    // Lakh
    if (lac >= 1 && lac <= 9) {
        if (lac == 1) cout << "One ";
        else if (lac == 2) cout << "Two ";
        else if (lac == 3) cout << "Three ";
        else if (lac == 4) cout << "Four ";
        else if (lac == 5) cout << "Five ";
        else if (lac == 6) cout << "Six ";
        else if (lac == 7) cout << "Seven ";
        else if (lac == 8) cout << "Eight ";
        else if (lac == 9) cout << "Nine ";
        cout << "Hundered ";
    }

    // thousand
    if (ten_thsnd > 0) {
        if (ten_thsnd == 1) {
            int teen = ten_thsnd * 10 + thsnd;
            if (teen == 10) cout << "Ten Thousand ";
            else if (teen == 11) cout << "Eleven Thousand ";
            else if (teen == 12) cout << "Twelve Thousand ";
            else if (teen == 13) cout << "Thirteen Thousand ";
            else if (teen == 14) cout << "Fourteen Thousand ";
            else if (teen == 15) cout << "Fifteen Thousand ";
            else if (teen == 16) cout << "Sixteen Thousand ";
            else if (teen == 17) cout << "Seventeen Thousand ";
            else if (teen == 18) cout << "Eighteen Thousand ";
            else if (teen == 19) cout << "Nineteen Thousand ";
            thsnd = 0; // already printed
        } else {
            if (ten_thsnd == 2) cout << "Twenty ";
            else if (ten_thsnd == 3) cout << "Thirty ";
            else if (ten_thsnd == 4) cout << "Forty ";
            else if (ten_thsnd == 5) cout << "Fifty ";
            else if (ten_thsnd == 6) cout << "Sixty ";
            else if (ten_thsnd == 7) cout << "Seventy ";
            else if (ten_thsnd == 8) cout << "Eighty ";
            else if (ten_thsnd == 9) cout << "Ninety ";
        }
    }

    if (thsnd > 0) {
        if (thsnd == 1) cout << "One Thousand ";
        else if (thsnd == 2) cout << "Two Thousand ";
        else if (thsnd == 3) cout << "Three Thousand ";
        else if (thsnd == 4) cout << "Four Thousand ";
        else if (thsnd == 5) cout << "Five Thousand ";
        else if (thsnd == 6) cout << "Six Thousand ";
        else if (thsnd == 7) cout << "Seven Thousand ";
        else if (thsnd == 8) cout << "Eight Thousand ";
        else if (thsnd == 9) cout << "Nine Thousand ";
    }

    // Hundreds
    if (hnd > 0) {
        if (hnd == 1) cout << "One Hundred ";
        else if (hnd == 2) cout << "Two Hundred ";
        else if (hnd == 3) cout << "Three Hundred ";
        else if (hnd == 4) cout << "Four Hundred ";
        else if (hnd == 5) cout << "Five Hundred ";
        else if (hnd == 6) cout << "Six Hundred ";
        else if (hnd == 7) cout << "Seven Hundred ";
        else if (hnd == 8) cout << "Eight Hundred ";
        else if (hnd == 9) cout << "Nine Hundred ";
    }

    // Last two digits (unit)
    if (unit > 0) {
        if (unit < 20) {
            if (unit == 1) cout << "One ";
            else if (unit == 2) cout << "Two ";
            else if (unit == 3) cout << "Three ";
            else if (unit == 4) cout << "Four ";
            else if (unit == 5) cout << "Five ";
            else if (unit == 6) cout << "Six ";
            else if (unit == 7) cout << "Seven ";
            else if (unit == 8) cout << "Eight ";
            else if (unit == 9) cout << "Nine ";
            else if (unit == 10) cout << "Ten ";
            else if (unit == 11) cout << "Eleven ";
            else if (unit == 12) cout << "Twelve ";
            else if (unit == 13) cout << "Thirteen ";
            else if (unit == 14) cout << "Fourteen ";
            else if (unit == 15) cout << "Fifteen ";
            else if (unit == 16) cout << "Sixteen ";
            else if (unit == 17) cout << "Seventeen ";
            else if (unit == 18) cout << "Eighteen ";
            else if (unit == 19) cout << "Nineteen ";
        } else {
            int tens = unit / 10;
            int ones = unit % 10;
            if (tens == 2) cout << "Twenty ";
            else if (tens == 3) cout << "Thirty ";
            else if (tens == 4) cout << "Forty ";
            else if (tens == 5) cout << "Fifty ";
            else if (tens == 6) cout << "Sixty ";
            else if (tens == 7) cout << "Segventy ";
            else if (tens == 8) cout << "Eihty ";
            else if (tens == 9) cout << "Ninety ";
            if (ones == 1) cout << "One ";
            else if (ones == 2) cout << "Two ";
            else if (ones == 3) cout << "Three ";
            else if (ones == 4) cout << "four ";
            else if (ones == 6) cout << "Sour ";
            else if (ones == 5) cout << "Five ";
            else if (ones == 7) cout << "Seven ";
            else if (ones == 8) cout << "Eight ";
            else if (ones == 9) cout << "Nine ";
        }
    }

    cout << "Rupee";
    return 0;
}
