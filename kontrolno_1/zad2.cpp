#include <iostream>
int factoriel(int x){
    int p=1;
    for(int i=1; i<x;i++){
        p*=i;
    }
    return p;  
}
int main (){
    int x;
    std::cout<<"x:"<<std::endl;
    std::cin>>x;
    int br=0;
    if(x<=0){
        std::cout<<"no"<<std::endl;
    }
    else {
        for(int i=1;i<x;i++){
        if(factoriel(i)==x){
            std::cout<<"yes";
            break;
        }
        else{
            br++;
        }
    }
    if(br==(x-1)){
        std::cout<<"no";
    }
    }
    
    
    return 0;
}