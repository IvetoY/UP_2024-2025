#include <iostream>

int main (){
    int n;
    std::cout<<"n:";
    std::cin>>n;
    int array[256];
    for(int i=0;i<n;i++){
        std::cin>>array[i];
    }
    int min_dif=abs(array[0]-array[1]);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(array[i]-array[j])<min_dif){
                min_dif = abs(array[i]-array[j]);
            }
        }
    }
    std::cout<<"min: "<<min_dif;
    return 0;
}