#include <iostream>
#include <cmath>

double distance(int x1,int x2,int y1, int y2){
   return sqrt(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));

}
double roundToDecimalPlace(double num, int decimalPlaces) {
    double factor = std::pow(10, decimalPlaces);
    return std::round(num * factor) / factor;
}
int main (){
    int x1,x2,y1,y2,x3,y3;
    std::cout<<"(x1,y1)"<<std::endl;
    std::cin>>x1>>y1;
    std::cout<<"(x2,y2)"<<std::endl;
    std::cin>>x2>>y2;
    double sum=roundToDecimalPlace(distance(x1,x2,y1,y2),3);
    std::cout<<sum<<std::endl;

    return 0;
}