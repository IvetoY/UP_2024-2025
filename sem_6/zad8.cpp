#include <iostream>
#include <string.h>
void functionName(char a[]){
    if(strlen(a)%2==0){
        for(int i=0;i<strlen(a);i+=2){
            char c=a[i];
            a[i]=a[i+1];
            a[i+1]=c;
        }
    }
    else {
        for(int i=0;i<strlen(a)-1;i+=2){
            char c=a[i];
            a[i]=a[i+1];
            a[i+1]=c;
        }
    }
    for(int i=0;i<strlen(a);i++){
        std::cout<<a[i];
    }
}
int main (){
    char a[256];
    std::cin.getline(a,255);
    functionName(a);
    return 0;
}