#include <iostream>
void func(char a[], int n){
    for(int i=0;i<n/2;i++){
        int c= a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=c;
    }
    for(int i=0;i<n;i++){
        std::cout<<a[i]<<" ";
    }
}
int main (){
    char array[256];
    int n;
    std::cout<<"length of your array:"<<std::endl;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>array[i];
    }
    func(array,n);
    return 0;
}