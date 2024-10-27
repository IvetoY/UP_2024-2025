#include <iostream>

int main (){
    int number;
    std::cout<<"enter a number"<<std:: endl;
    std::cin>>number;
    if(number%2==0  && number%3==0){
        std::cout<<"your number is divisable by 2 and 3"<<std::endl;
    }
    else if(number%3==0){
        std::cout<<"your number is divisable by 3"<<std::endl;
    }
    else if(number%2==0){
        std::cout<<"your number is divisable 2"<<std::endl;

    }
    else {
        std::cout<<"your number is not divisable by 2 or 3"<<std::endl;
    }
    return 0;
}