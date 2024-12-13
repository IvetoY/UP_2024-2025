#include <iostream>
void genBrackets(char* currentExp, size_t n, size_t open, size_t openTotal, size_t index){
    if(index==n){
        std::cout<<currentExp<<std::endl;
        return;
    }
    if(openTotal<n/2){
        currentExp[index]='(';
        genBrackets(currentExp,n,open+1,openTotal+1,index+1);
    }
    if(open>0){
        currentExp[index]=')';
        genBrackets(currentExp,n,open-1,openTotal,index+1);
    }

}
int main (){
    int size;
        std::cout<<"size:"<<std::endl;
        std::cin>>size;
    if(size%2!=0){
        std::cout<<"Invalid input!"<<std::endl;
    }
    else {
        char* curExpression = new char [size];
        for(size_t i=0;i<sizeof(curExpression);i++){
            *(curExpression+i)='\0';
        }
        genBrackets(curExpression,size,0,0,0);
        delete [] curExpression;
    }
    
    return 0;
}