#include <iostream>
const std::size_t ROWS=64, COL=64;
void readMatrix(int matr[ROWS][COL], const std::size_t rows, const std::size_t col ){
    for(size_t i=0;i<rows;i++){
        for(size_t j=0;j<col;j++){
            std::cin>>matr[i][j];
        }
    }
}

int product(int matr[ROWS][COL], const std::size_t rows, const std::size_t col){
    int p=1;
    
            for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                p*=matr[i][j];
            }
        }
    }
    

    return p;
}
int main (){
    int rows, cols;
    std::cout<<"enter rows and cols: "<<std::endl;
    std::cin>>rows>>cols;
    if(rows==cols){
            int matrix[ROWS][COL];

    readMatrix(matrix,rows,cols);
    std::cout<<product(matrix,rows,cols);
    }
    else {
        std::cout<<"error ";
        return 0;
    }

    return 0;
}