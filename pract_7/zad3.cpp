#include <iostream>
#include <string.h>
void uniqueElement(char a[]){
    int br=0;
    
    int index=0;
    for(int i=0;i<strlen(a);i++){
        br=0;
        for(int j=0;j<strlen(a);j++){
            if(a[i]!=a[j] && i!=j){
                br++;
            }
        }
        if(br==strlen(a)-1){
            std::cout<<" unique element is "<<a[i]<<std::endl;
            break;
        }
    }   
}
int main (){
    char a[256];
    std::cin.getline(a,255);
    uniqueElement(a);
    return 0;
}