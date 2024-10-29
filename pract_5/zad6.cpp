#include <iostream>

int main (){
    int n;
    std::cout<<"n:"<<std::endl;
    std::cin>>n;
    int numbers[256];
    for(int i=0;i<n;i++){
        std::cin>>numbers[i];
    }
    
    for(int i=0;i<n;i++){
            
            if(numbers[i]<numbers[i+1]){
                std::cout<<numbers[i+1]<<" ";
                
            }
            else {
                
                std::cout<<std::endl;
            }
            
    }

    return 0;
} 