#include <iostream>
struct incarray{
    int*arr;
    size_t size;
};
incarray elemntesOfAwithoutBElemnets(incarray a, incarray b){
    size_t k=0;
    incarray result;
    result.arr = new int[a.size]; // Maximum possible size
    result.size = 0;
    for(size_t i=0;i<a.size;i++){
        bool found = false;
        for(size_t j=0;j<b.size;j++){
            if(a.arr[i]==b.arr[j]){
                found=true;
                break;
            }
        }
        if(!found){
            result.arr[k]=a.arr[i];
            k++;
        }
    }
    result.size=k;
    return result;
}
int main (){
    incarray a;
    incarray b;
    
    std::cout<<"size of a:"<<std::endl;
    std::cin>>a.size;
    a.arr = new int [a.size];
    std::cout<<"array of a:"<<std::endl;
    for(size_t i=0;i<a.size;i++){
        std::cin>>a.arr[i];
    }
    std::cout<<"size of b:"<<std::endl;
    std::cin>>b.size;
    b.arr = new int [b.size];
    std::cout<<"array of b:"<<std::endl;
    for(size_t i=0;i<b.size;i++){
        std::cin>>b.arr[i];
    }
    incarray result=elemntesOfAwithoutBElemnets(a,b);
    
    std::cout<<"result:"<<std::endl;
    for(size_t i=0;i<result.size;i++){
        std::cout<<result.arr[i]<<" ";
    }
    delete []a.arr;
    delete []b.arr;
    delete []result.arr;
    return 0;
}