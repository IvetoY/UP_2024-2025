#include <iostream>

int main (){
    int n;
    int m;
    std::cout<<"n:"<<std::endl;
    std::cin>>n;
    std::cout<<"m:"<<std::endl;
    std::cin>>m;
    int array1[256];
    int array2[256];
    int counter=0;
    for(int i=0;i<n;i++){
        std::cin>>array1[i];
    }
        
    for(int i=0;i<m;i++){
        std::cin>>array2[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(array1[i]==array2[j]){
                counter++;
                break;
            }
        }
    }
    std::cout<<counter;
    return 0;
}