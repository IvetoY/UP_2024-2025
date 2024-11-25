#include <iostream>
unsigned int  ack(unsigned int m,unsigned int n){
    
    if(m==0 && n>0){
        return n+1;
    }
    if(n==0 && m>0){
        return ack(m-1,1);
    }
    
        return ack(m-1, ack(m, n-1));
    

}
int main (){
    unsigned int n,m;
    
    std::cin>>m>>n;
    std::cout<<ack(m,n);
    return 0;
}