#include <iostream>


std::string printColSeparator(int col) {
    return (col + 1) % 3 == 0 && col != 8 ? " | " : " ";//true false
}
void printRowSeparator(int row) {
    if ((row + 1) % 3 == 0 && row != 8) {
        std::cout << "------+-------+------" << std::endl;
    }
}
void inputSudoku(int grid[9][9]){
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            std::cin >> grid[i][j];
        }
    }
}

void printGrid(const int grid[9][9]) {
    for (size_t i = 0; i < 9; i++) {//i == rows
        for (size_t j = 0; j < 9; j++) {//j==col
            std::cout << grid[i][j] << printColSeparator(j);
        }
        std::cout << std::endl;
        printRowSeparator(i);
    }
    std::cout << std::endl;
}
bool isValidPlacement(const int  grid[9][9], size_t row, size_t col, size_t n) {//masiva, rows, cols, currentNumber
    for (size_t i = 0; i < 9; i++) {
        if (grid[row][i] == n //imam v row
            || grid[i][col] == n //imam v col
            || grid[row - row % 3 + i / 3][col - col % 3 + i% 3] == n) {
            return false;
        }
    }
    return true;
}


bool solveSudoku(int grid[9][9], int& solutionCount) {
    int row = -1, col = -1;//tehnite stojnosti sa ot 0 do 9// davam mu -1 za da ne e ot 0 do 9
    bool isEmpty = false;
    for (size_t i = 0; i < 9; i++) {
        for (size_t j = 0; j < 9; j++) {
            if (grid[i][j] == 0) {
                row = i;
                col = j;
                isEmpty = true;
                break;
            }
        }
        if (isEmpty) break;
    }

    
    if (!isEmpty) {
        solutionCount++;
        printGrid(grid);
    }

//sled vzimane na praznite mesta:
    for (size_t i = 1; i <= 9; i++) {//i tata sa za samite chisla vutre
        if (isValidPlacement(grid, row, col, i)) {
            grid[row][col] = i;
            if (!solveSudoku(grid, solutionCount)) return false; 
            grid[row][col] = 0; 
        }
    }

    return true;
}

void validateAndSolveSudoku(int grid[9][9]) {
    int solutionCount = 0;
    solveSudoku(grid, solutionCount);
    if (solutionCount == 0) {
        std::cout << "The Sudoku is not valid" << std::endl;
    } else if (solutionCount == 1) {
        std::cout << "This Sudoku is valid" << std::endl;
    } else {
        std::cout << "The Sudoku has multiple solutions and is invalid" << std::endl;
    }
}


int main() {
    int grid[9][9];

    std::cout << "Enter the Sudoku grid row by row (use 0 for empty cells):" << std::endl;
    inputSudoku(grid);//da se vkara sudokoto 
    std::cout<<std::endl;
    validateAndSolveSudoku(grid);

    return 0;
}

/*
primerite
0 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 0 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9

0 0 9 0 2 8 7 0 0
8 0 6 0 0 4 0 0 5
0 0 3 0 0 0 0 0 4
6 0 0 0 0 0 0 0 0
0 2 0 7 1 3 4 5 0
0 0 0 0 0 0 0 0 2
3 0 0 0 0 0 5 0 0
9 0 0 4 0 0 8 0 7
0 0 1 2 5 0 3 0 0

3 0 6 5 0 8 4 0 0
5 2 0 0 0 0 0 0 0
0 8 7 0 0 0 0 3 1
0 0 3 0 1 0 0 8 0
9 0 0 8 6 3 0 0 5
0 5 0 0 9 0 6 0 0
1 3 0 0 0 0 2 5 0
0 0 0 0 0 0 0 7 4
0 0 5 2 0 6 3 0 0
*/