#include <iostream>
#include <cstdlib>
int * newArray(int size){
    int * array = new int [size];
    for(int i=0;i<size;i++){
        *(array+i)=std::rand()%51-50;
    }
    return array;
}
int maxElement(int * arr,int size){
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(*(arr+i)>max){
            max=*(arr+i);
        }
    }
    return max;
}
void deleteArray(int *arr){
    delete[]arr;
}
void printArray(int * arr,int size){
    for(int i=0;i<size;i++){
        std::cout<<*(arr+i)<<" ";
    }
}
int main (){
    int size;
    std::cout<<"size: "<<std::endl;
    std::cin>>size;
    int * array = newArray(size);
    std::cout<<"elements of the array: "<<std::endl;
    printArray(array,size);
    std::cout<<"biggest element: "<<maxElement(array, size)<<std::endl;
    deleteArray(array);
    return 0;
}