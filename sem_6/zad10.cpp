#include <iostream>
#include <string.h>
void removeDuplicates(char a[]){
    int br=0;
    char b[strlen(a)];
    int index=0;
    for(int i=0;i<strlen(a);i++){
        br=0;
        for(int j=0;j<strlen(a);j++){
            if(a[i]!=a[j] && i!=j){
                br++;
            }
        }
        if(br==strlen(a)-1){
            b[index]=a[i];
            index++;
        }
    }
    b[index+1]='\0';
    for(int i=0;i<strlen(b);i++){
        std::cout<<b[i];
    }
    
}
int main (){
    char a[256];
    std::cin.getline(a,255);
    std::cout<<std::endl;
    removeDuplicates(a);
    return 0;
}