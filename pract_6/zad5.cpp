#include <iostream>
int polynomial(int n,int i,int x){
    int sum=1;
    while(i!=0){
        sum*=x;
        i--;
    }
    return sum*n;
}
int main (){
    int numbers [256];
    int n;
    std::cout<<"n:"<<std::endl;
    std::cin>>n;
    std::cout<<"polynomial: "<<std::endl;
    for(int i=0;i<n;i++){
        std::cin>>numbers[i];
    }
    int x;
    std::cout<<"x:"<<std::endl;
    std::cin>>x;
    int y=0;
    for(int i=0;i<n;i++){
        y+=polynomial(numbers[i],i,x);
    }
    std::cout<<"y:"<<y<<std::endl;

    return 0;
}