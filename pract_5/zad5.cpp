#include<iostream>

int main(){
    int n;
    std::cout<<"n:"<<std::endl;
    std::cin>>n;
    int number;
    int counter[10]{0,};
    int digit;
    while(n>0){
        std::cin>>number;
        while(number!=0){
        digit=number%10;
        for(int i=0;i<10;i++){
            if(digit==i){
                counter[i]++;
                break;
            }

        }
        number/=10; 
    }
        n--;
    }
    for(int i=0;i<10;i++){
        std::cout<<i<<": "<<counter[i]<<std::endl;
    }
    return 0;
}