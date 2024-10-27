#include <iostream>
#include <string>
#include <cstring>
int main (){
    std::cout<<"enter your name"<<std::endl;
    std::string yourName;
    std::getline(std::cin,yourName);
     
    char nameArray[yourName.length()+1];
    std::strcpy(nameArray,yourName.c_str());
    std::cout<<"Hello ";
    for(int i=0;i<=yourName.length();i++){
        std::cout<<nameArray[i];
    }
    std::cout<<"!";
    return 0;
}