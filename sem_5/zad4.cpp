#include <iostream>
bool f(int x){
    for(int i=2;i<x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
bool f2(int n, int m){
    if(n==(m+2) || m==(n+2)){
        return true;
    }
    else {
        return false;
    }
}
int main (){
    int n,m;
    std::cout<<"n:"<<std::endl;
    std::cin>>n;
    std::cout<<"m: "<<std::endl;
    std::cin>>m;
    if(f(n)==f(m) && f(n)==true){
        std::cout<<f2(n,m);
    
    }

    return 0;
}