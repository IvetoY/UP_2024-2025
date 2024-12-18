#include <iostream>
const std::size_t ROWS=64, COL = 64 ; 
void readMatrix(int matr[ROWS][COL], const std::size_t rows, const std::size_t col ){
    for(size_t i=0;i<rows;i++){
        for(size_t j=0;j<col;j++){
            std::cin>>matr[i][j];
        }
    }
}
void multiplyMatrixes(const int A[ROWS][COL], const int B[ROWS][COL],int rowsA, int colA, int rowsB, int colB){
    if(colA!=rowsB){
        std::cout<<"cols of matrix A have to be equal of rows of matrix B"<<std::endl;
        return ;
    }
    int resultMatrix[colA][rowsB];
        for (size_t i = 0; i < rowsA; i++) {
        for (size_t j = 0; j < colB; j++) {
            resultMatrix[i][j] = 0;
        }
    }
for (size_t i = 0; i < rowsA; i++) {
        for (size_t j = 0; j < colB; j++) {
            for (size_t k = 0; k < colA; k++) {
                resultMatrix[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for(int i=0;i<colA;i++){
        for(int j=0;j<rowsB;j++){
            std::cout<<resultMatrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}
int main (){
    int matrixA[ROWS][COL];
    int rowsA; 
    int colA;
    std::cout<<"rowsA: "<<std::endl;
    std::cin>>rowsA;
    std::cout<<"colA: "<<std::endl;
    std::cin>>colA;
    std::cout<<"matrix A:"<<std::endl;
    
    readMatrix(matrixA,rowsA,colA);
    int matrixB[ROWS][COL];
    int rowsB; 
    int colB;
    std::cout<<"rowsB: "<<std::endl;
    std::cin>>rowsB;
    std::cout<<"colB: "<<std::endl;
    std::cin>>colB;
    std::cout<<"matrix B:"<<std::endl;
    
    readMatrix(matrixB,rowsB,colB);
    multiplyMatrixes(matrixA, matrixB, rowsA, colA, rowsB, colB);
    return 0;
}