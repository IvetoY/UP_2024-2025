#include <iostream>
double product(double a[],double b[],int i){
    return a[i]*b[i];
}
int main (){
    int n;
    std::cout<<"n:"<<std::endl;
    std::cin>>n;
    double numbers1[256];
    double numbers2[256];
    std::cout<<"numbers in  the first array:"<<std::endl;
    for(int i=0;i<n;i++){
        std::cin>>numbers1[i];
    }
    for(int i=0;i<n;i++){
        std::cin>>numbers2[i];
    }
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=product(numbers1,numbers2,i);
    }
    std::cout<<"sum:"<<sum;
    return 0;
}