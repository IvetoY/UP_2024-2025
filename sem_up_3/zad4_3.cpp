#include <iostream>

int main(){
    int number;
    
    std::cout<<"enter a number "<<std::endl;
    std::cin>>number;
    int m=number;
    int n;
    int number2=0;
    while(number!=0){
        n=number%10;
        number2=number2*10+n;
        number/=10;
    }
    if(m==number2){
        std::cout<<"is a palindrome"<<std::endl;
    }
    else {
        std::cout<<"is not a palindrome"<<std::endl;
    }
    return 0;
}