#include <iostream>

int main (){
    int n;
    std::cout<<"enter a number "<<std::endl;
    std::cin>>n;
    int s=1;
    for(int i=1;i<=n;i++){
        s*=i;
    }
    std::cout<<s;
    return 0;
}