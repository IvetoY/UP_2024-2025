#include <iostream>

int main (){
    int n;
    std::cout<<"enter your points"<<std::endl;
    std::cin>>n;
    if(n<0 || n>100){
        std::cout<<"your points have to be [0,100]"<<std::endl; 
    }
    else {
        if(n>=0 && n<=30){
            std::cout<<"2"<<std::endl;
        }
        else if(n>30 && n<=50){
            std::cout<<"3"<<std::endl;
        }
        else if(n>50 && n<=70){
            std::cout<<"4"<<std::endl;
        }
        else if(n>70 && n<=85){
            std::cout<<"5"<<std::endl;
        }
        else {
            std::cout<<"6"<<std::endl;
        }
    }
    return 0;
}