#include<iostream>

int main (){
    int n,m;
    std::cout<<"enter your numbers n and m:"<<std::endl;
    std::cin>>n>>m;
    if(n>m){
        for(int i=m;i<=n;i++){
            if(i%3==0){
                std::cout<<i<<" ";
            }
        }
    }
    else {
       for(int i=n;i<=m;i++){
            if(i%3==0){
                std::cout<<i<<" ";
            }
        } 
    }
    return 0;
}