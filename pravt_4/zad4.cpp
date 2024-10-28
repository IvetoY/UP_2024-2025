#include <iostream>

int main (){
    double x,y,a,b,c;
    std::cout<<"enter a, b and c"<<std::endl;
    double n;
    std::cin>>a>>b>>c;
    std::cout<<"you enter this "<<a<<"x + "<<b<<"y + "<<c;
    std::cout<<"enter n:"<<std::endl;
    std::cin>>n;
    while(n!=0){
    std::cout<<"enter x:"<<std::endl;
    std::cin>>x;
    std::cout<<"enter y:"<<std::endl;
    std::cin>>y;
    if((a*x+b*y+c)==0){
        std::cout<<"true"<<std::endl;
    }
    else {
        std::cout<<"false"<<std::endl;
    }
    n--;
    }

    return 0;
}