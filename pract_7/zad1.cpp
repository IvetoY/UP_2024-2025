#include <iostream>
#include <string.h>
int strlen1(const char a[]){
    int br=0;
    while(a[br]!='\0'){//==while(a[br])
        br++;
    }
    return br;
}
int strcamp1(const char a[], const char b[]){
    int index1=strlen1(a),index2=strlen1(b);
    int index=0;
    while(index<index1 && index<index2 && a[index]==b[index]){
        index++;
    }
    return a[index]-b[index];

}
void strcat1(char destination[], char source []){
    int index=0;
    for(int i=strlen(destination)-1;i<strlen(destination)+strlen(source);i++){
        destination[i]=source [index];
        index++;
    }
    destination[strlen(destination)+strlen(source)+1] = '\0';
    for(int i=0;i<strlen(destination);i++){
        std::cout<<destination[i];
    }
}
int main (){
    char a[256];
    char b[256];
    std::cin.getline(a, 255);
    std::cin.getline(b,255);
   // std::cout<<strlen1(a);
   // std::cout<<strcamp1(a,b);
   //strcat1(a,b);
    return 0;
}