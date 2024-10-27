#include <iostream>
 int main (){
    int a,b,c;
    std::cout<<"enter your numbers"<<std::endl;
    std::cin>>a>>b>>c;
    if(a>b && b>c){
        std::cout<<"your first number is the biggest"<<std::endl;
    }
    else if(b>a && a>c){
        std::cout<<"your second number is the biggest"<<std::endl;
    }
    else if(c>b && b>a){
        std::cout<<"your third number is the biggest"<<std::endl;
    }
    else {
        std::cout<< "they are equal"<<std::endl;
    }
    return 0;
 }