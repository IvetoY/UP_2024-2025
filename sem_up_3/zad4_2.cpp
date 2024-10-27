#include <iostream>

int main (){
    int n;
    std::cout<<"enter a number"<<std::endl;
    std::cin>>n;
    int d=1;
    while(d<n){
        if(n%d==0){
            std::cout<<d<<" ";
        }
        d++;
    }
    return 0;

}