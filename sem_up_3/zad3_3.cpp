#include <iostream>

int main (){
    int n;
    std::cout<<"enter a number"<<std::endl;
    std::cin>>n;
    int sum=0;
    int a;
    do{
        a=n%10;
        sum+=a;
        n=n/10;
    }
    while(n>0);
    std::cout<<sum;
    return 0;
}