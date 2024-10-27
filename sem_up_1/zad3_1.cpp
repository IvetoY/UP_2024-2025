#include <iostream>

int main  (){
    int a;
    std::cout<<"enter a number "<<std::endl;
    std::cin>>a;
    if(a%2==0){
        std::cout<<"you enter an even number"<<std::endl;
    }
    else {
        std::cout<<"you enter an odd number "<<std::endl;
    }
    return 0;
}