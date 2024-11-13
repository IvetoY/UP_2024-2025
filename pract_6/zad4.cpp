#include <iostream>
unsigned int doubleFact(unsigned int n){
    if(n==0){
        return 1;
    }
    else {
        unsigned int product = 1;
        for(int i=n;i>=1;i-=2){
            product*=i;
        }
        return product;
    }
}
int main (){
    int x;
    std::cout<<"x:";
    std::cin>>x;
    std::cout<<doubleFact(x);
    return 0;
}