#include <iostream>

int main (){
    double number1,number2,number3;
    std::cout<<"enter your three numbers"<<std::endl;
    std::cin>>number1>>number2>>number3;
    if(number1==number2 && number1!=number3){
        std::cout<<"two of them are equal"<<std::endl;
    }
    else if(number1==number3 &&number1!=number2){
        std::cout<<"two of them are equal"<<std::endl;
    }
    else if(number2==number3 &&number1!=number2){
        std::cout<<"two of them are equal"<<std::endl;
    }
    else {
        std::cout<<"they are different or they are equal(but the three if them)"<<std::endl;
    }
    return 0;
}