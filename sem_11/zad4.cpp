#include <iostream>
int sumOfNNumbers(int n){
    
    if(n==0){
        return 0;

    }
    return n+sumOfNNumbers(n-1);
}
int main (){
    int n;
    std::cout<<"n:"<<std::endl;
    std::cin>>n;
    std::cout<<"sum of n number: "<<sumOfNNumbers(n);
    return 0;
}