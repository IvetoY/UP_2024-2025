#include <iostream>

int main (){
    int n;
    int br=0;
    int a=2;
    std::cout<<"enter a number"<<std::endl;
    std::cin>>n;
    while(a<n){
        if(n%a==0){
            br++;
        }
        a++;
    }
    if(br!=0){
        std::cout<<"sustavno"<<std::endl;
    }
    else {
        std::cout<<"prosto"<<std::endl;
    }
    return 0;
}