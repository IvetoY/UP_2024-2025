#include <iostream>
#include <string.h>

int main(){
    char a[256];
    std::cin.getline(a,255);
    int counter=0;
    for(int i=1;i<strlen(a)-1;i++){
        if((a[i]=='.' || a[i]=='!' || a[i]=='?')
         && (a[i+1]!='\0' || a[i]=='.' || a[i]=='!' || a[i]=='?') 
         && (a[i-1]!='.' || a[i-1]!= '!'  || a[i-1]!='?')){
            counter++;
        }
    }
    std::cout<<counter<<std::endl;
    return 0;
}