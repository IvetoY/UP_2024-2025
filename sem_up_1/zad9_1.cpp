#include <iostream>

int main (){
    char char1,char2;
    std::cout<<"enter two charactrers"<<std::endl;
    std::cin>>char1>>char2;
    if(char1==char2){
        std::cout<<"two characters are equal"<<std::endl;
    }
    else {
        std::cout<<"two characters are not equal"<<std::endl;
    }
    return 0;
}