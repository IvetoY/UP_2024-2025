#include <iostream>
#include <string.h>
bool contains_(char a[],char ch){
    for(int i=0;i<strlen(a);i++){
        if(a[i]==ch){
            return true;
        }

    }
    return false;
}
int main (){
    char a[256];
    std::cout<<"a[]:";
    std::cin.getline(a,255);
    char ch;
    std::cout<<"ch:"<<std::endl;
    std::cin>>ch;
    if(contains_(a,ch)==true){
        std::cout<<"yes";
    }
    else {
        std::cout<<"no";
    }
    
    return 0;
}