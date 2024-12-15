#include <iostream>
int * createArray(int size){
    int* array = new int [size];
    return array;
}
void initArray(int* arr, int size){
    for(int i=0;i<size;i++){
        std::cin>>*(arr+i);
    }
}
int* createInitArray(int size){
    int* array = new int [size];
    for(int i=0;i<size;i++){
        std::cin>>*(array+i);
    }
    return array;
    
}
void printArray(int * arr, int size){
    for(int i=0;i<size;i++){
        std::cout<<*(arr+i)<<" ";
    }
}
void freeArray(int * arr){
 delete []arr;   
}
int main (){
    int size;
    std::cout<<"size:"<<std::endl;
    std::cin>>size;
    int* p1 = createArray(size);
    p1 = createInitArray(size);
    printArray(p1,size);
    freeArray(p1);
    p1=nullptr;
    int size1;
    std::cin>>size1;
    p1=createArray(size1);
    p1=createInitArray(size1);
    printArray(p1,size1);
    freeArray(p1);

    delete p1;
    return 0;
}