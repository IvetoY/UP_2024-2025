#include <iostream>
void f(int n,int x){
    int n1;
    if(n==0){
        std::cout<<0;
    }
    else {
        n=n%2;
        std::cout<<n;
    }
    
    n/=2;

}
int f1(int n){
    return n;
}
int main (){
    int n;
    std::cin>>n;
    f(n,n);
    return 0;
}