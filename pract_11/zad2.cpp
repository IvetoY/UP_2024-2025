#include <iostream>
int binSearch(int *arr, size_t size, int r,int l,int x){
    if(l>r){
        return -1;
    }
    int m=(l+r)/2;
    if(arr[m]==x){
        return m;
    }
    if(arr[m]<x){
        return binSearch(arr,size, r,m+1,x);
    }
    if(arr[m]>x){
        return binSearch(arr,size, m-1,l,x);
    }
}
int main (){
    int x, size;
    std::cout<<"x:";
    std::cin>>x;
    std::cout<<"size:";
    std::cin>>size;
    int* array = new int [size];
    for(int i=0;i<size;i++){
        std::cin>>*(array+i);
    }
    std::cout<<binSearch(array,size,size-1,0,x);
    delete[] array;

    return 0;
}