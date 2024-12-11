#include <iostream>
#include <string>
#include <cstring>
int main (){
    int size;
    std::cout<<"size:"<<std::endl;
    std::cin>>size;
    std::string array [256];
    for(int i=0;i<size;i++){
        std::getline(std::cin, array[i]);
    }
    int max_strlen=1;
    for(int i=0;i<size;i++){
       if(max_strlen<strlen(array[i])) 
    }

    return 0;
}