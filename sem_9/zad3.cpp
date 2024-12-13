#include <iostream>
void reverse(int* arr, size_t size){
    for(size_t i=size;i>0;i--){
        std::cout<<*(arr+i-1)<<" ";
    }
}
int main (){
    size_t  size;
    std::cout<<"size:";

    std::cin>>size;

    int *array = new int [size];
    for(int  i=0;i<size;i++){
        std::cin>>*(array+i);
    }
    reverse(array,size);
    delete [] array;
    return 0;
}