#include <iostream>

int main (){
    int n;
    std::cout<<"enter a number"<<std::endl;
    std::cin>>n;
    if(n%2!=0 || (n%2==0 && n>=6 && n<=20)){
       std::cout<<"strange"<<std::endl;
    }
    else if(n%2==0 && ((n>=2 && n<=5)||(n>=20))){
       std::cout<<"not strange"<<std::endl; 
    }
    else {
        std::cout<<"not strange"<<std::endl;
    }
    return 0;
}