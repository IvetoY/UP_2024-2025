#include <iostream>
void f(int *x, int* y){
    int c = *x;
    *x=*y;
    *y=c;
}
int main (){
    int x,y;
    std::cout<<"X"<<" Y ";
    std::cin>>x>>y;

    std::cout<<"before function:"<<std::endl;
    std::cout<<x<<" "<<y;
    std::cout<<std::endl;
    f(&x,&y);
    std::cout<<"after function:"<<std::endl;
    std::cout<<x<<" "<<y;


    

    return 0;
}