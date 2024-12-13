#include <iostream>
void readArray(int* arr, int size){
    for(int i=0;i<size;i++){
        std::cin>>*(arr+i);
    }
}
bool duplicate(int *arr, int size, int n){
    for(int i=0;i<size;i++){
        if(*(arr+i)==n){
            return true;
        }
    }
    return false;
}
int main (){
    int size;
    std::cout<<"size:";
    std::cin>>size;
    int* array = new int [size];
    readArray(array,size);
    int n;
    std::cout<<"n:";
    std::cin>>n;
    std::cout<<duplicate(array,size,n);
    delete [] array;
    return 0;
}