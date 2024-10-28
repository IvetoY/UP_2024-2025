#include <iostream>

int main (){
    int number;
    std::cout<<"enter a number"<<std::endl;
    do{
        
        
        std::cin>>number;
        if(number>0){
            std::cout<<"Congratulations!"<<std::endl;
        }
        else {
            std::cout<<"enter a positive number"<<std::endl;
        }
    }
    while(number<=0);
    return 0;
}