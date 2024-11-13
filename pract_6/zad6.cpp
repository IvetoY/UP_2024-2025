#include <iostream>
int f1(int n){
    int br=0;
    while(n>0){
        n=n%10;
        n/=10;
        br++;
    }
    return br;
}
int f2(int a[],int n,int a_length){
    for(int i=a_length-1;i>=0;i++){
        a[i]=n%10;
        n/=10;
        return a[i];
    }
    
    /*for(int i=0;i<a_length;i++){
        std::cout<<a[i]<<std::endl;
    }*/
    
}

int main (){
    int number;
    int br=0;
    std::cout<<"number:"<<std::endl;
    std::cin>>number;
    int array[256];
    int a_length=f1(number);
    std::cout<<a_length<<std::endl;
    std::cout<<" ejfoejwo";
    std::cout<<f2(array ,number, a_length)<<std::endl;

    
    return 0;
}