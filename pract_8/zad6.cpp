#include <iostream>
const std::size_t ROWS=64, COL=64;
void readMatrix(int matr[ROWS][COL], const std::size_t rows, const std::size_t col ){
    for(size_t i=0;i<rows;i++){
        for(size_t j=0;j<col;j++){
            std::cin>>matr[i][j];
        }
    }
}
void printMatrix(const int m[ROWS][COL], const std::size_t rows, const std::size_t col){
    for(int i=0;i<rows;i++){
                for(int j=0;j<col;j++){
                    std::cout<<m[i][j]<<" ";
                }
                std::cout<<std::endl;
            }
}

void mainFunction ( const int a[ROWS][COL], const int b[ROWS][COL], const std::size_t rows, const size_t col,const char symbol){
    
    int resultMatrix[ROWS][COL];
    if(symbol=='+'){
            for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                    resultMatrix[i][j]=0;
                }
            }
            for(int i=0;i<rows;i++){
                for(int j=0;j<col;j++){
                    resultMatrix[i][j]=a[i][j]+b[i][j];
                }
            }
            printMatrix(resultMatrix,rows,col);

        }
        else if(symbol=='-'){
            for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                    resultMatrix[i][j]=0;
                }
            }
            for(int i=0;i<rows;i++){
                for(int j=0;j<col;j++){
                    resultMatrix[i][j]=a[i][j]-b[i][j];
                }
            }
            printMatrix(resultMatrix,rows,col);            
        }
        else if(symbol=='*'){
            for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                    resultMatrix[i][j]=0;
                }
            }
            for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                for(int k=0;k<col;k++){
                    resultMatrix[i][j]+=a[i][k]*b[k][j];
                }
                }
            }
            printMatrix(resultMatrix,rows,col);
            //012  897
            //345  547
            //678  125
        }

}         
    


int main (){
    int rows, cols;
    std::cout<<"enter rows and cols";
    std::cin>>rows>>cols;
    if(rows==cols){
        int matrixA[ROWS][COL];
        int matrixB[ROWS][COL];
        std::cout<<"matrix A:"<<std::endl;
        readMatrix(matrixA,rows,cols);
        std::cout<<"matrix B:"<<std::endl;
        readMatrix(matrixB,rows,cols);
        char symbol;
    while(symbol!='s' && symbol!='S'){
    std::cout<<"enter +,-, * or s for stop"<<std::endl;
    std::cin.get(symbol);
        mainFunction(matrixA,matrixB, rows,cols,symbol);
    }
    return 0;
    }

    else {
        std::cout<<"error";
    }
    return 0;
}