#include <iostream>
#include <cstdlib>
double average(int *array, int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=*(array+i);
    }
    return sum;
}
int main (){
    int size;
    std::cout<<"the length or the array";
    std::cin>>size;
    int* array = new int [size];
    for(int i=0;i<size;i++){
        array[i] = rand() % (1000 - (-1000) + 1) + (-1000);
    }
    std::cout<<std::endl;
    for (int* ptr = array; ptr < array + size; ptr++) {
        std::cout << *ptr << " ";
    }
    std::cout<<"Average: "<<average(array,size);
    delete array;
    return 0;
}