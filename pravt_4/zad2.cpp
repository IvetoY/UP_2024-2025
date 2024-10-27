#include <iostream>

int main (){
    int n;
    int k;
    int sum=0;
    int p=1;
    std::cout<<"enter a number"<<std::endl;
    std::cin>>n;
    while(n!=0){
        std::cout<<"enter a number"<<std::endl;
        std::cin>>k;
        n--;
        p*=k;
        sum+=k;
    }
    std::cout<<"The sum is "<<sum<<std::endl;
    std::cout<<"The product is "<<p<<std::endl;
    return 0;
}