#include <iostream>

int main (){
    int number;
    std::cout<<"enter your number"<<std::endl;
    std::cin>>number;
    if(number % 3 == 0 && number % 5 == 0){
        std::cout<<"your number is divisable by 3 and 5"<<std::endl;
    }
    else if(number == 0){
        std::cout<<"your number is not divisable by 3 and 5"<<std::endl;
    }
    else {
        std::cout<<"your number is not divisable by 3 and 5"<<std::endl;
    }
    return 0;
}