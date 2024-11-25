#include <iostream>
const std::size_t ROWS=64, COL=64;
void readMatrix(int matr[ROWS][COL], const std::size_t rows, const std::size_t col ){
    for(size_t i=0;i<rows;i++){
        for(size_t j=0;j<col;j++){
            std::cin>>matr[i][j];
        }
    }
}
void printMatrix(int matr[ROWS][COL], const std::size_t rows, const std::size_t col){
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

int main (){
int matrix[ROWS][COL];
int row,col;
std::cin>>row>>col;
readMatrix(matrix,row,col);
printMatrix(matrix,row,col);
return 0;
}