#include <iostream>
void readTheArray(char array[5][10]){
    for(size_t i=0;i<5;i++){
        for(size_t j=0;j<10;j++){
            std::cin>>array[i][j];
        }
    }
}
void func(char array [5][10]){
    bool flag = false;
    for(size_t i=0;i<5;i++){
        
        
            for(size_t k=i+1;k<5;k++){
                int counter =0;
                for(size_t j=0;j<10;j++){
                
                if(array[i][j]==array[k][9-j]){
                    counter ++;
                }
                if(counter == 10){
                    flag = true;
                }
            }
        }
    }
   if(flag== true){
    std::cout<<"yes"<<std::endl;

   }
   else {
    std::cout<<"no";
   }
}
int main (){
    char array [5][10];
    readTheArray(array);
    func(array);
    return 0;
}