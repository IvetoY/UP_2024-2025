#include <iostream>

int main (){
    int n;
    std::cout<<"n:";
    std::cin>>n;
    int array[256];
    for(int i=0;i<n;i++){
        std::cin>>array[i];
    }
    int br=n-1;
    int c;//pazi posledniq el na masiva
    for (int i=0;i<n/2;i++){
        c=array[br];
        array[br]=array[i];
        array[i]=c;
        br--;
    }
    for(int i=0;i<n;i++){
        std::cout<<array[i]<<" ";
    }

    return 0;
}