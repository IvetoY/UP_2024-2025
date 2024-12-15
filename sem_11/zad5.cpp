#include <iostream>
int f(int n, int m){
    if(m==0){
        return n;
    }
    return f(m,n%m);
}
int main (){
    int n, m;
    std::cout<<"n:"<<std::endl;
    std::cin>>n;
    std::cout<<"m:"<<std::endl;
    std::cin>>m;
    std::cout<<f(n,m);
    return 0;
}