#include <iostream>

int main (){
    int n;
    std::cout<<"enter a number"<<std::endl;
    std::cin>>n;
    int sum=0;
    do{
        sum+=n;
        n--;

    }
    while(n!=0);
    std::cout<<sum<<std::endl;
    return 0;
}