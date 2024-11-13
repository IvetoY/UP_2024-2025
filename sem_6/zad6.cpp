#include <iostream>
#include <string.h>
char toUpperCase_(char a){
    if(a>='a' && a<='z'){
        return a - ('a' - 'A');
    }
    else {
        return a;
    }
}
char toLowerCase_(char a){
    if(a>='A' && a<='Z'){
        return a + ('a' - 'A');
    }
    else {
        return a;
    }
    
}
void withoutSpaces(char a[]){
    int br=0;
    char b[strlen(a)];
    for(int i=0;i<strlen(a);i++){
        if(a[i]!=' '){
            b[br]=a[i];
            br++;
        }
    }

    b[br]='\0';
    for(int i=0;i<strlen(b);i++){
        std::cout<<b[i];
    }
}
int main (){
    char a[256];
    std::cin.getline(a,255);
    for(int i=0;i<strlen(a);i++){
        toLowerCase_(a[i]);
        
    }
    toUpperCase_(a[0]);
    for(int i=0;i<strlen(a)-1;i++){
        if(a[i]==' '){
            a[i+1]=toUpperCase_(a[i+1]);
        }
    }
    withoutSpaces(a);
    


    return 0;
}