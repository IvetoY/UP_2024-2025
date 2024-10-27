#include <iostream>

int main (){
    int a, b;
    std::cout<<"Enter your first number "<<std::endl;
    std::cin>>a;
    std::cout<<"and enter the second number"<<std::endl;
    std::cin>>b;
    if(a>b){
        std::cout<<"the first number is bigger"<<std::endl;
    }
    else if(b>a){
        std::cout<<"the second number is bigger"<<std::endl;
    }
    else {
        std::cout<<"they are equal"<<std::endl;
    }
    return 0;
}



