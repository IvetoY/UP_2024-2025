#include <iostream>
int fib(int a){
    if(a==1 || a==2){
        return 1;
    }
    return fib(a-1)+fib(a-2);

}
int main (){
    int n;
    std::cin>>n;
    std::cout<<fib(n);
    return 0;
}