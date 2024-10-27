#include <iostream>

int main (){
    double number1, number2;
    std::cout<<"enter your two numbers"<<std::endl;
    std::cin>>number1>>number2;
    double sum=number1+number2;
    if(sum>100){
        std::cout<<"the sum is bigger than 100"<<std::endl;
    }
    else {
        std::cout<<"the sum is not bigger than 100"<<std::endl;
    }


    return 0;
}