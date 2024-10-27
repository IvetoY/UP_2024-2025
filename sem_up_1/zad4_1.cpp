#include <iostream>

int main (){
    char letter;
    std::cout<<"enter the letter"<<std::endl;
    std::cin>>letter;
    if(isupper(letter)){
        std::cout<<"is upper case "<<std::endl;
    }
    else if (islower(letter)){
        std::cout<<"is lower case "<<std::endl;
    }
    else {
        std::cout<<"is not a case"<<std::endl;
    }
    return 0;
}