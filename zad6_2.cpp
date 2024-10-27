#include <iostream>

int main (){
    int number1,number2,number3,number4;
    std::cout<<"enter four numbers"<<std::endl;
    std::cin>>number1>>number2>>number3>>number4;
    if(number1>number2 && number2>number3 && number3>number4){
        std::cout<<number4<<" "<<number3<<" "<<number2<<" "<<number1<<std::endl;
    }
    else if(number1>number2 && number2>number3 && number3>number4){
        std::cout<<number4<<" "<<number3<<" "<<number2<<" "<<number1<<std::endl;
    }
    return 0;
}