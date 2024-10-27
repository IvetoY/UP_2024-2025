#include <iostream>

int main (){
    int x1=1;
    int x2=1;
    int sum=0;
    int n;
    std::cout<<"enter a number "<<std::endl;
    std::cin>>n;
    std::cout<<x1<<" ";
    std::cout<<x2<<" ";
    
    for(int i=3;i<=n;i++){
        sum=x1+x2;
        if(sum<=n){
        std::cout<<sum<<" ";
        x2=x1;
        x1=sum;
        }
    }
    
    return 0;
}