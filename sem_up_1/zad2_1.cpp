#include <iostream>

int main(){
    int a;
    std::cout<<"enter your number"<<std::endl;
    std::cin>>a;
    if(a==0){
        std::cout<<"you enter a zero"<<std::endl;
    }
    else if (a>0){
        std::cout<<"you enter a positive number"<<std::endl;
    }
    else {
        std::cout<<"you enter a negative number"<<std::endl;
    }
    return 0;
}