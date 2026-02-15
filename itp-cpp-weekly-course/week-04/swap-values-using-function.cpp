/*
 * Filename: swap-values-using-function.cpp
 * Week: 4
 * Description: Swap Values Using Function
 * 
 * This program demonstrates:
 * - Loop structures (for/while)
 * - Conditional statements (if/else)
 * - Function definitions and calls
 * - Arrays
 * - Recursion
 */


#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int N = 4;



// Function: print board
void print_board(int board[N][N], bool revealed[N][N]) {
    cout << "\nCurrent Board:\n";
    cout << "   0 1 2 3\n";
    cout << "  ---------\n";

    for (int i = 0; i < N; i++) {
        cout << i << "| ";
        for (int j = 0; j < N; j++) {
            if (revealed[i][j])
                cout << board[i][j] << " ";
            else
                cout << "* ";
        }
        cout << endl;
    }
}



// Main program starts here
int main() {
    srand(time(NULL));

    int board[N][N];
    bool revealed[N][N] = {false};  

    
    int cards[16];

    // Perform calculations
    for (int i = 0; i < 8; i++) {
        cards[2 * i] = i + 1;
        cards[2 * i + 1] = i + 1;
    }

  
    for (int i = 0; i < 16; i++) {
        int r = rand() % 16;
        swap(cards[i], cards[r]);
    }

   
    int index = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            board[i][j] = cards[index++];

    int matched_pairs = 0;

    

    
    while (matched_pairs < 8) {
        print_board(board, revealed);

        int row_1, colum_1, row_2, colum_2;

        

    // Display results
        cout << "\nSelect first card (row col): ";

    // Get input from user
        cin >> row_1 >> colum_1;

        while (row_1 < 0 || row_1 >= N || colum_1 < 0 || colum_1 >= N || revealed[row_1][colum_1]) {
            cout << "Invalid position. Try again: ";
            cin >> row_1 >> colum_1;
        }

        revealed[row_1][colum_1] = true;
        print_board(board, revealed);

        
        cout << "\nSelect second card (row col): ";
        cin >> row_2 >> colum_2;

        while (row_2 < 0 || row_2 >= N || colum_2 < 0 || colum_2 >= N || revealed[row_2][colum_2]) {
            cout << "Invalid position. Try again: ";
            cin >> row_2 >> colum_2;
        }

        revealed[row_2][colum_2] = true;
        print_board(board, revealed);

       
        if (board[row_1][colum_1] == board[row_2][colum_2]) {
            cout << "\n It's a MATCH!\n";
            matched_pairs++;
        } else {
            cout << "\nNot a match. Cards will be flipped back.\n";
            revealed[row_1][colum_1] = false;
            revealed[row_2][colum_2] = false;
        }

    }

    cout << "\nYou matched all pairs!\n";

    return 0;
}
