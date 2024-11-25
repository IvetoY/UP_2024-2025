#include <iostream>
const std::size_t ROWS=64, COL=64;
void readMatrix(int matr[ROWS][COL], const std::size_t rows, const std::size_t col ){
    for(size_t i=0;i<rows;i++){
        for(size_t j=0;j<col;j++){
            std::cin>>matr[i][j];
        }
    }
}
int countElements(int matr[ROWS][COL], const std::size_t rows, const std::size_t col){
    int counter=0;
   
        for(int i=1;i<rows-1;i++){//vutreshnost(kvadratche rows-1*col-1)
            for(int j=1;j<col-1;j++){
                if(matr[i][j]<matr[i+1][j] &&  matr[i][j]<matr[i-1][j]
                 && matr[i][j]<matr[i][j+1]  && matr[i][j]<matr[i][j-1] ){
                    counter++;
                 }
            }
        }
        if(matr[0][0]<matr[0][1]  && matr[0][0]< matr[1][0]){
            counter++;
        }
        if(matr[0][col-1]<matr[0][col-2]  && matr[0][col-1]< matr[1][col-1]){
            counter++;
        }
        if(matr[rows-1][0]<matr[rows-1][1]  && matr[rows-1][0]< matr[rows-2][0]){
            counter++;
        }
        if(matr[rows-1][col-1]<matr[rows-1][col-2]  &&  matr[rows-1][col-1]< matr[rows-2][col-1]){
            counter++;
        }
        //4te ugli
        for(int i =1;i<col-1;i++){//redove
            if(matr[0][i]<matr[0][i+1] && matr[0][i]<matr[0][i-1] && 
            matr[0][i]<matr[1][i]){
                counter++;
            }
            if(matr[rows-1][i]<matr[rows-1][i+1] && matr[rows-1][i]<matr[rows-1][i-1] &&
            matr[rows-1][i]<matr[rows-2][i]){
                counter++;
            }
        }
        for(int i=1;i<rows-1;i++){ //koloni
            if(matr[i][0]<matr[i+1][0] && matr[i][0]<matr[i-1][0] && matr[i][0]<matr[i][1]){
                counter++;
            }
            if(matr[i][rows-1]<matr[i+1][rows-1] && matr[i][rows-1]<matr[i-1][rows-1] && matr[i][rows-1]<matr[i][rows-2]){
                counter++;
            }

        }
        return counter;
    }


int main (){
int matrix[ROWS][COL];
int row,col;
std::cin>>row>>col;
readMatrix(matrix,row,col);

std::cout<<countElements(matrix,row,col);
return 0;
}