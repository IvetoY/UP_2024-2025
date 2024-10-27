#include <iostream>
 
 int main (){
    int r,x,y;
    std::cout<<"enter x,y,r"<<std::endl;
    std::cin>>x>>y>>r;
    if(r>=0){
    if((x*x+y*y)==r*r){
        std::cout<<"contour"<<std::endl;
    }
    else if((x*x+y*y)<(r*r)){
        std::cout<<"inside"<<std::endl;
    }
    else if((x*x+y*y)>(r*r)){
        std::cout<<"outside"<<std::endl;
    }
    }
    else {
        std::cout<<"invalid r(negative)"<<std::endl;
    }
    return 0;
 }