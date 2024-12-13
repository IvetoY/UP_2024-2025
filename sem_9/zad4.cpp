#include <iostream>
void readArray(int*arr,int size){
    for(int i=0;i<size;i++){
        std::cin>>*(arr+i);
    }
}

void merge(int* arr1, int* arr2, int* arr3, int size1, int size2) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (*(arr1 + i) < *(arr2 + j)) {
            *(arr3 + k) = *(arr1 + i);
            i++;
        } else {
            *(arr3 + k) = *(arr2 + j);
            j++;
        }
        k++;
    }
    while (i < size1) {
        *(arr3 + k) = *(arr1 + i);
        i++;
        k++;
    }
    while (j < size2) {
        *(arr3 + k) = *(arr2 + j);
        j++;
        k++;
    }
    for(int i=0;i<k;i++){
        std::cout<<*(arr3+i)<<" ";
    }
}
int main (){
    int size1,size2;
    std::cout<<"size1:";
    std::cin>>size1;
    std::cout<<"size2:";
    std::cin>>size2;
    int* array1 = new int [size1];
    int* array2 = new int [size2];
    std::cout<<"array1:"<<std::endl;
    readArray(array1,size1);
    std::cout<<"array2:"<<std::endl;
    readArray(array2,size2);
    int* array3 = new int [size1+size2];
    merge(array1,array2,array3,size1,size2);
    delete [] array1;
    delete [] array2;
    delete [] array3;
    return 0;
}