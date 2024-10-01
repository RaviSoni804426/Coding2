#include <bits/stdc++.h>
#define N 9
using namespace std;

// Function to take input of the grid
void inputGrid(int grid[N][N]) {
    cout << "Enter the Sudoku grid:" ;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }
}

// Check whether num is present in the column or not
bool isPresentInCol(int grid[N][N], int col, int num) {
    for (int row = 0; row < N; row++)
        if (grid[row][col] == num)
            return true;
    return false;
}

// Check whether num is present in the row or not
bool isPresentInRow(int grid[N][N], int row, int num) {
    for (int col = 0; col < N; col++)
        if (grid[row][col] == num)
            return true;
    return false;
}

// Check whether num is present in 3x3 box or not
bool isPresentInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num) {
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (grid[row + boxStartRow][col + boxStartCol] == num)
                return true;
    return false;
}

// Print the Sudoku grid after solving
void printSudokuGrid(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            if (col == 3 || col == 6)
                cout << " | ";
            cout << grid[row][col] << " ";
        }
        if (row == 2 || row == 5) {
            cout << endl;
            for (int i = 0; i < N; i++)
                cout << "---";
        }
        cout << endl;
    }
}

// Find an empty location and update row and column
bool findEmptyPlace(int grid[N][N], int &row, int &col) {
    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (grid[row][col] == 0)  // marked with 0 is empty
                return true;
    return false;
}

// Check if it's valid to place num at grid[row][col]
bool isValidPlace(int grid[N][N], int row, int col, int num) {
    return !isPresentInRow(grid, row, num) && !isPresentInCol(grid, col, num) &&
           !isPresentInBox(grid, row - row % 3, col - col % 3, num);
}

// Solve the Sudoku recursively
bool solveSudoku(int grid[N][N]) {
    int row, col;
    if (!findEmptyPlace(grid, row, col))
        return true;  // when all places are filled

    for (int num = 1; num <= 9; num++) {  // valid numbers are 1 - 9
        if (isValidPlace(grid, row, col, num)) {  // check validation
            grid[row][col] = num;
            if (solveSudoku(grid))  // recursively solve other cells
                return true;
            grid[row][col] = 0;  // backtrack if needed
        }
    }
    return false;
}

int main() {
    int grid[N][N];
    inputGrid(grid);  // take input

    if (solveSudoku(grid))
        printSudokuGrid(grid);  // print the solved grid
    else
        cout << "No solution exists";
}
