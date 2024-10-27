#include <iostream>

int main (){
    int number;
    int max=0, min=9;
    std::cout<<"enter a number "<<std::endl;
    std::cin>>number;
    
    do{
        
        int currNum=number%10;
        if(currNum>max){
            max=currNum;
        }
        if(currNum<min){
            min=currNum;
        }
        number=number/10;
    }
    while(number>0);
    std::cout<<"max: "<<max<<std::endl;
    std::cout<<"min: "<<min;
    return 0;
}