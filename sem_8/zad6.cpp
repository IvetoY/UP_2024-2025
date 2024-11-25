#include <iostream>
int factorial(int a){
if(a==1){
    return 1;
}
return a*factorial(a-1);
}
int main (){
    int digit;//trqbwa da e cqlo
    std::cout<<"enter a digit"<<std::endl;
    std::cin>>digit;
    std::cout<<factorial(digit);
    //5*4*3*2*1
    return 0;
}