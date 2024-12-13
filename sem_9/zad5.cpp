#include <iostream>
int f(double* arr, int size){
    int last=-1;
    if(arr[size-1]==arr[size-2]){
        return size-1;
    }
    for(int i=1;i<size-1;i++){
        if(*(arr+i)==((*(arr+(i+1)) +*(arr+(i-1)))/2)){
            last=i;
        }
    }
    if(arr[0]==arr[1]){
        last=0;
    }
    return last;
}
int main (){
    int size;
    std::cout<<"size:";
    std::cin>>size;
    double* array = new double [size];
    for(int i=0;i<size;i++){
        std::cin>>*(array+i);
    }
    std::cout<<f(array,size);
    delete []array;

    return 0;

}