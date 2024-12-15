#include <iostream>
int * newArray(int size){
    int * array = new int [size];
    for(int i=0;i<size;i++){
        *(array+i)=std::rand()%51-50;
    }
    return array;
}
void deleteArray(int *arr){
    delete[]arr;
}
void printArray(int * arr,int size){
    for(int i=0;i<size;i++){
        std::cout<<*(arr+i)<<" ";
    }
}
int * swapArrays(int* arr1, int size, int * arr2){
    for(int i=0;i<size;i++){
        *(arr2+i)=*(arr1+i);
    }
    return arr1;
}
int main (){
    int size;
    std::cout<<"size:"<<std::endl;
    std::cin>>size;
    int * array_1 = newArray(size);
    int * array_2 = new int [size];
    std::cout<<"array1: "<<std::endl;
    printArray(array_1,size);
    std::cout<<std::endl;
    std::cout<<"copied elements of array1 to array 2: "<<std::endl;
    printArray(swapArrays(array_1,size,array_2),size);
    deleteArray(array_1);
    deleteArray(array_2);

    return 0;
}