#include <iostream>
#include <cmath>

double distance(int x1,int x2,int y1, int y2){
   return sqrt(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));

}

int main (){
    int x1,x2,y1,y2,x3,y3;
    std::cout<<"(x1,y1)"<<std::endl;
    std::cin>>x1>>y1;
    std::cout<<"(x2,y2)"<<std::endl;
    std::cin>>x2>>y2;
    std::cout<<"(x3,y3)"<<std::endl;
    std::cin>>x3>>y3;
    double sum=distance(x1,x2,y1,y2)+distance(x1,x3,y1,y3)+distance(x3,x2,y1,y3);
    std::cout<<"P= "<<sum<<std::endl;

    return 0;
}