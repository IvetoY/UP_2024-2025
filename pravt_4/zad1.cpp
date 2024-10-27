#include <iostream>

int main (){
    int n;
    std::cout<<"enter a number "<<std::endl;
    std::cin>>n;
    if(n>=0 && n<=100){
        for(int i=0;i<=n;i++){
            std::cout<<i*i<<" ";
        }
    }
    else {
        std::cout<<"error";
    }
    return 0;
}