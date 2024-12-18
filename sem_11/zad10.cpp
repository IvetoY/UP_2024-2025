#include <iostream>
const std::size_t ROWS=64, COL=64;
void readMatrix(int matr[ROWS][COL], const std::size_t rows, const std::size_t col ){
    for(size_t i=0;i<rows;i++){
        for(size_t j=0;j<col;j++){
            std::cin>>matr[i][j];
        }
    }
}
void mainDiagonal(int matrix[ROWS][COL], const std::size_t rows, const std::size_t col){
    if(rows==col){
        for(int i=0;i<rows;i++){
        {
                std::cout<< matrix[i][i]<<" ";
            
        }
    }
    }
    else {
        std::cout<<"rows and cols are not equal"<<std::endl;
        return ;

    }
}

int main (){
    int matrix[64][64];
    int rows;
    std::cout<<"rows: "<<std::endl;
    std::cin>>rows;
    int cols;
    std::cout<<"col:"<<std::endl;
    std::cin>>cols;
    
    
    readMatrix(matrix , rows,cols);
    mainDiagonal(matrix,rows,cols);

    return 0;
}