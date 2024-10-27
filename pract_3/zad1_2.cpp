#include <iostream>

int main (){
    char symbol;
    std::cout<<"enter a symbol"<<std::endl;
    std::cin>>symbol;
    if(symbol>='0' && symbol<='9'){
        std::cout<<"The symbol is a digit"<<std::endl;
    }
    else if(symbol>='A' && symbol<='Z'){
        std::cout<<"The symbol is upper case"<<std::endl;
    }
    else if(symbol>='a' && symbol<='z'){
        std::cout<<"The symbol is lower case"<<std::endl;
    }
    else {
        std::cout<<"The symbol is not a digit or a letter."<<std::endl;
    }
    return 0;
}