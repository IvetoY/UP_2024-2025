#include <iostream>
const std::size_t ROWS=64, COL=64;
void readMatrix(int matr[ROWS][COL], const std::size_t rows, const std::size_t col ){
    for(size_t i=0;i<rows;i++){
        for(size_t j=0;j<col;j++){
            std::cin>>matr[i][j];
        }
    }
}
int sumElementsOfTheMatrix(int matr[ROWS][COL], const std::size_t rows, const std::size_t col ){
    int sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            sum+=matr[i][j];//01  02 03 .... 0col-1
        }
        
    }
    return sum;
}

int main (){
int matrix[ROWS][COL];
int row,col;
std::cin>>row>>col;
readMatrix(matrix,row,col);
std::cout<<sumElementsOfTheMatrix(matrix,row,col);

}