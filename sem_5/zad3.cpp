#include <iostream>
double newPrice(double price,double discount){
    return price*discount/100;
}
int main (){
    double price,discount;
    std::cout<<"price:"<<std::endl;
    std::cin>>price;
    std::cout<<"discount: "<<std::endl;
    std::cin>>discount;
    std::cout<<newPrice(price,discount);
    return 0;
}