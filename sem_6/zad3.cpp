#include <iostream>

int strlen1(const char a[]){
    int br=0;
    while(a[br]!='\0'){//==while(a[br])
        br++;
    }
    return br;
}
int main (){
    char a[256];
    std::cin.getline(a,255);
    std::cout<<strlen1(a);
    return 0;
}
