#include <iostream>
bool hasTriangles(double a[],double b[], double c[],size_t size){
    for(size_t i=0;i<size;i++){
        for(size_t j=0;j<size;j++){
            for(size_t k=0;k<size;k++){
                if((a[i]*a[i]+b[j]*b[j])==c[k]*c[k] ||
                    a[i]*a[i]+c[k]*c[k]==b[j]*b[j] ||
                    b[j]*b[j]+c[k]*c[k]==a[i]*a[i]
                ){
                    return true;
                }
            }
        }
    }
    return false;
}
void readTheArray(double x[], size_t size){
    for(size_t i=0;i<size;i++){
        std::cin>>x[i];
    }
}
int main (){
    size_t size;
    std::cout<<"size:"<<std::endl;
    std::cin>>size;

    double a[size];
    double b[size];
    double c[size];
    readTheArray(a,size);
    readTheArray(b,size);
    readTheArray(c,size);
    std::cout<<hasTriangles(a,b,c,size);
    return 0;
}