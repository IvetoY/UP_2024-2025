#include <iostream>
const std::size_t ROWS=64, COL=64;
void readMatrix(int matr[ROWS][COL], const std::size_t rows, const std::size_t col ){
    for(size_t i=0;i<rows;i++){
        for(size_t j=0;j<col;j++){
            std::cin>>matr[i][j];
        }
    }
}
void printMatrixA(int matr[ROWS][COL], const std::size_t rows, const std::size_t col){
    for(int j=col-1;j>=0;j--){//tuk
    for(int i=rows-1;i>=0;i--){
        std::cout<<matr[i][j]<<" ";
    }
    std::cout<<std::endl;
    }
}
//vhod
// 1 2 3 
// 4 5 6
// 7 8 9
//izhod
// 9 6 3
//8 5 2
// 7 4 1

void printMatrixB(int matr[ROWS][COL], const std::size_t rows, const std::size_t col){
for(int i=0;i<col;i++){
    int i1=0,j=i;
    while(j>=0 && i1<rows){
        std::cout<<matr[i1][j]<<" ";
        j--;
        i1++;
    }
}
for(int j=1;j<rows;j++){
    int i1=j,j1=col-1;
    while(i1<rows && j1>=0){
        std::cout<<matr[i1][j1]<<" ";
        i1++;

        j1--;
    }
}
}
int main (){
int matrix[ROWS][COL];
int row,col;
std::cin>>row>>col;
readMatrix(matrix,row,col);
//printMatrixA(matrix,row,col);
//printMatrixB(matrix,row,col);
return 0;
}