#include <iostream>

int main (){
    int counts[101];
    int number;
    std::cout<<"enter a number (0 is for end of the program)"<<std::endl;
    for(int i=1;i<=100;i++){
        counts[i]=0;
    }
    do{

        std::cin>>number;

        if(number>=1 && number<=100){
            counts[number]++;
        }
        else {
            break;
            std::cout<<"please, enter number between 1 and 100"<<std::endl;
        }
    }
    while(number!=0);

    for(int i=1;i<=100;i++){
        if(counts[i]%2==0 && counts[i]!=0){
            std::cout<<i<<" ";
        }
    }
    return 0;
}