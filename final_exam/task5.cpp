#include <iostream>
#include <climits>
const size_t MAX_SIZE = 64;

void readTheNumbers(size_t n, size_t m, int numbers[MAX_SIZE][MAX_SIZE]) {
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < m; j++) {
            std::cin >> numbers[i][j];
        }
    }
}

void print(size_t n, size_t m, int numbers[MAX_SIZE][MAX_SIZE]) {
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < m; j++) {
            std::cout << numbers[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
bool** maxJ(size_t n, size_t m, int numbers[MAX_SIZE][MAX_SIZE]){
    bool **flag = new bool *[n];
    for(size_t i=0;i<n;i++){
        flag[i]=new bool[m]();
    }
    
    
    
    for(size_t i=0;i<m;i++){
        int max=INT_MIN;
        int maxI=-1;
        for(size_t j=0;j<n;j++){
            
            if(numbers[j][i]>max){
                max=numbers[j][i];
                maxI=j;
                
            }
        }
        flag[maxI][i]=true;
        

    }
    return flag;
    
}
bool** minI(size_t n, size_t m, int numbers[MAX_SIZE][MAX_SIZE]){
    bool **flag = new bool *[n];
    for(size_t i=0;i<n;i++){
        flag[i]=new bool[m]();
    }
    
    
    
    for(size_t i=0;i<n;i++){
        int min=INT_MAX;
        int minJ=-1;
        for(size_t j=0;j<m;j++){
            
            if(numbers[i][j]<min){
                min=numbers[i][j];
                minJ=j;
                
            }
        }
        flag[i][minJ]=true;
        

    }
    return flag;
    
}
void func(size_t n, size_t m, int numbers[MAX_SIZE][MAX_SIZE]){
    bool** minFlags = minI(n, m, numbers);
    bool** maxFlags = maxJ(n, m, numbers);
    for(size_t k=0;k<n;k++){
        for(size_t t=0;t<m;t++){
            if(minFlags [k][t] && maxFlags [k ][t]){
                std::cout<<numbers[k][t]<<" ";
            }
        }
    }
    for (size_t i = 0; i < n; i++) {
        delete[] minFlags[i];
        delete[] maxFlags[i];
    }
    delete[] minFlags;
    delete[] maxFlags;
}
int main (){
    size_t n,m;
    std::cout<<"n:"<<std::endl;
    std::cin>>n;
    std::cout<<"m: "<<std::endl;
    std::cin>>m;
    int array [MAX_SIZE][MAX_SIZE];
   
    readTheNumbers(n,m,array);
    //print(n,m,array);
    func(n,m,array);
    return 0;

}