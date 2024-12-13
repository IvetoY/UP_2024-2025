#include <iostream>
#include <cstdlib>
void printMatrix(int **matrix, int size)
{
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
    }
}
int *sumByCol(int **matrix, int size)
{
    int *colSums = new int[size];
    for (int j = 0; j < size; j++)
    {
        colSums[j] = 0;
        for (int i = 0; i < size; i++)
        {
            colSums[j] += matrix[i][j];
            
        }
    }
    return colSums;
}
int *sumByRow(int **matrix, int size)
{
    int *rowSums = new int[size];
    for (int i = 0; i < size; i++)
    {
        rowSums[i] = 0;
        for (int j = 0; j < size; j++)
        {
            rowSums[i] += matrix[i][j];
        }
    }
    return rowSums;
    
}
int main()
{
    int size;
    std::cout << "size:";
    std::cin >> size;
    int **matrix = new int *[size];
    int s=0;
    for (int i = 0; i < size; i++)
    {
        
        matrix[i] = new int[size];
        for (int j = 0; j < size; j++)
        {
            matrix[i][j] = s;
            s++;
        }
    }
    printMatrix(matrix, size);
    int * mainArrRow = new int [size];
    
    
    int *mainArrCol = new int [size];
    std::cout<<std::endl;
    for(int i=0;i<size;i++){
        std::cout<<*(sumByCol(matrix,size)+i)<<" ";
    }
    std::cout<<std::endl;
    for(int i=0;i<size;i++){
        std::cout<<*(sumByRow(matrix,size)+i)<<" ";
    }
    
    delete [] mainArrCol;
    delete [] mainArrRow;
    for (int i = 0; i < size; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}