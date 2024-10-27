#include <iostream>

int main (){
    int a,b,c;
    std::cout<<"enter three numbers, they have to be degrees of a triangle"<<std::endl;
    std::cin>>a>>b>>c;
    if((a+b+c)==180 && a>0 && b>0 && c>0){
        std::cout<<"we have the conditions for triangle"<<std::endl;
    }
    else {
        std::cout<<"we do not have the conditions for triangle"<<std::endl;
    }
    return 0;
}