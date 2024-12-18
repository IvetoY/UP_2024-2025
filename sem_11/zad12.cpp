#include <iostream>
void readMatrix(int** matrix, size_t rows, size_t cols) {
    std::cout << "Enter elements of the matrix:" << std::endl;
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }
}
void printMatrix(int** matrix, size_t rows, size_t cols) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int** transposeMatrix(int** matrix, size_t rows, size_t cols) {
    int** transposed = new int*[cols];
    for (size_t i = 0; i < cols; i++) {
        transposed[i] = new int[rows];
    }
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}
int main() {
    size_t rows, cols;
    std::cout << "Enter number of rows and columns for the matrix: ";
    std::cin >> rows >> cols;
    int** matrix = new int*[rows];
    for (size_t i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    readMatrix(matrix, rows, cols);
    std::cout << "Original Matrix:" << std::endl;
    printMatrix(matrix, rows, cols);
    int** transposed = transposeMatrix(matrix, rows, cols);
    std::cout << "Transposed Matrix:" << std::endl;
    printMatrix(transposed, cols, rows);
    for (size_t i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    for (size_t i = 0; i < cols; i++) {
        delete[] transposed[i];
    }
    delete[] transposed;

    return 0;
}
