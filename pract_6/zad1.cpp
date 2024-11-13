#include <iostream>
    int addOne(int x){
        return x+1;
    }
int main (){

    int number;
    std::cout<<"enter ypur number:"<<std::endl;
    std::cin>>number;
    std::cout<<addOne(number);

    return 0;
}