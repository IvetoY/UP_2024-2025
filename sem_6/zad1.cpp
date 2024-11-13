#include <iostream>
#include <string.h>
int main (){
    char a[256];
    std::cin.getline(a,255);
    for(int i=0;i<strlen(a);i++){
        std::cout<<a[i]<<std::endl;
    }
    return 0;
}