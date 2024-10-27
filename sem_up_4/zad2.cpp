#include <iostream>

int main (){
    int n;
    std::cout<<"enter the length of your array"<<std::endl;
    std::cin>>n;
    int array [n];
    for(int i=0;i<n;i++){
        std::cin>>array[i];
    }
    int currNum;
    for(int i=0;i<n;i++){
        currNum=array[i];
        if(currNum%2==0){
            array[i]=currNum-1;
        }
        else if(currNum%2!=0){
            array[i]=currNum-3;
        }
        if(currNum>10){
            array[i]%=10;
        }
        else if(currNum<=10){
            array[i]*=10;
        }
        std::cout<<array[i]<<" ";
    }

    
    return 0;
}