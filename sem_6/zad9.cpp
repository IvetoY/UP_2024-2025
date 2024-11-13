#include <iostream>
#include <string.h>
bool isPalindrome(char a[]){
    //n-i-1(5-0-1)
    for(int i=0;i<strlen(a)/2;i++){
        if(a[i]!=a[strlen(a)-i-1]){
            return false;
        }
    }
    return true;
}
int main (){
    char a[256];
    std::cin.getline(a,255);
    if(isPalindrome(a)==true){
        std::cout<<" is palindrome"<<std::endl;

    }
    else {
        std::cout<<" is not palindrome"<<std::endl;
    }
    return 0;
}