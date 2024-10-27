#include <iostream>

int main (){
    int n;
    std::cout<<"enter the length of your array"<<std::endl;
    std::cin>>n;
    int max=INT_MIN;
    int min=INT_MAX;
    int array [n];
    int max1=INT_MIN;
    int min1=INT_MAX;
    for(int i=0;i<n;i++){
        std::cin>>array[i];
    }
    for(int i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
        if(array[i]<min){
            min=array[i];
        }
    }

    for(int i=0;i<n;i++){
        if(array[i]>max1 && array[i]!=max){
            max1=array[i];
            
        }
        if(array[i]<min1 && array[i]!=min){
            min1=array[i];
            
        }
    }
    std::cout<<"max_2: "<<max1<<std::endl;
    std::cout<<"min_2: "<<min1;
    
    return 0;
}