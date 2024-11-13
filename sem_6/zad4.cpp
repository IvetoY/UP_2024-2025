#include <iostream>
#include <string.h>
void toUpperCase_(char a[]){
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='a' && a[i]<='z'){
            a[i] = a[i] - ('a' - 'A');
        }
        std::cout<<a[i];
    }
    
}
void toLowerCase_(char a[]){
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='A' && a[i]<='Z'){
            a[i] = a[i] + ('a' - 'A');
        }
        std::cout<<a[i];
    }
    
}
void f(char a[]){
    for(int i=0;i<strlen(a);i+=2){
        if(a[i]>='A' && a[i]<='Z'){
            a[i] = a[i] + ('a' - 'A');
        }
        else if(a[i]>='a' && a[i]<='z'){
            a[i] = a[i];
        }
    }
    for(int i=1;i<strlen(a);i+=2){
        if(a[i]>='A' && a[i]<='Z'){
            a[i] = a[i];
        }
        else if(a[i]>='a' && a[i]<='z'){
            a[i] = a[i] - ('a' - 'A');
        }
    }
    for(int i=0;i<strlen(a);i++){
        std::cout<<a[i];
    }
    
}
int main( ){
    char a[256];
    std::cin.getline(a,255);
    std::cout<<"1)"<<std::endl;
    toUpperCase_(a);
    std::cout<<std::endl;
    std::cout<<"2)"<<std::endl;
    toLowerCase_(a);
    std::cout<<std::endl;
    std::cout<<"3)"<<std::endl;
    f(a);

    return 0;
}