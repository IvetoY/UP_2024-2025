#include <iostream>

int main (){
    int n;
    int k;
    bool array [5];
    std::cout<<"enter a number between 0 and 9"<<std::endl;
    std::cin>>k;
    for(int i=0;i<5;i++){
        std::cin>>n;
        if(n==k){
            array[i]=true;
        }
        else {
            array[i]=false;
        }
    }
    int br=0;
    for(int i=0;i<5;i++){
        if(array[i]==true){
            br++;
        }
        
    }
    if(br!=0){
        std::cout<<k<<" is found"<<std::endl;
    }
    else {
        std::cout<<k<<" is not found"<<std::endl;
    }



    return 0;
}