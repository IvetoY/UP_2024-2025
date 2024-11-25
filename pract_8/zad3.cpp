#include <iostream>
const std::size_t ROWS = 64, COL = 64;
void readMatrix(int matr[ROWS][COL], const std::size_t rows, const std::size_t col)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> matr[i][j];
        }
    }
}
bool f(int matr[ROWS][COL], const std::size_t rows, const size_t col)
{
    if (rows != col)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < col; j++)
            {
                
                    if (matr[i][j] != matr[j][i])
                    {
                        return false;
                    }
                
            }
        }
        return true;
    }
}

int main()
{
    int matrix[ROWS][COL];
    int row, col;
    std::cin >> row >> col;
    readMatrix(matrix, row, col);
    std::cout << f(matrix, col, row);
}