#include <iostream>

int main (){
    unsigned int n,m,l,k;
    std::cout<<"enter four numbers"<<std::endl;
    std::cin>>n>>m>>l>>k;

    unsigned int min=n;
    if(m<min){
        min=m;
    }
    if(l<min){
        min=l;
    }
    if(k<min){
        min=k;
    }
    std::cout<<(n+m+l+k)-min+1<<std::endl;

    return 0;
}