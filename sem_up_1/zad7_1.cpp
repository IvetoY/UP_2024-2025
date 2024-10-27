#include <iostream>

int main (){
    double number;
    std::cout<<"enter your number "<<std::endl;
    std::cin>>number;
    if(number >= 10 && number <= 100){
        std::cout<<"the number is between 10 and 100 "<<std::endl;
    }
    else {
        std::cout<<"the number is not between 10 and 100 "<<std::endl;
    }
    return 0;
}