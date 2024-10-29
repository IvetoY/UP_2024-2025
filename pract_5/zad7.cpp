#include <iostream>

int main (){
    int n;
    int m;
    std::cout<<"enter the length of your array:"<<std::endl;
    std::cin>>n;
    std::cout<<"enter the sum of the two numbers (m)"<<std::endl;
    std::cin>>m;
    int numbers[256];
    for(int i=0;i<n;i++){
        std::cin>>numbers[i];
    }

    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            
            if(((numbers[i]+numbers[j])==m)  && i!=j){
                std::cout<<numbers[i]<<" "<<numbers[j]<<std::endl;
                
            }
        }
    }

    return 0;
}