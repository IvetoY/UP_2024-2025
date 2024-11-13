#include <iostream>
void f(int x, int y){
    std::cout<<"Calculating!"<<std::endl;
    std::cout<<x+y;
}
int main() {
    int x,y;
    std::cout<<"x:"<<std::endl;
    std::cin>>x;
    std::cout<<"y:"<<std::endl;
    std::cin>>y;
    f(x,y);
    return 0;
}