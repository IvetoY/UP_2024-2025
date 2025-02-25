#include <iostream>
#include <cstring>
bool duplicates(char* text1, char * text2){
     if(strlen(text1)!=strlen(text2)){
        return false;
     }
     bool* matched = new bool[strlen(text2)]();
    for(size_t i=0;i<strlen(text1);i++){
        bool found = false;
        for(size_t j=0;j<strlen(text2);j++){
            if(text1[i]==text2[j]  && !matched[j]){
                matched[j]=true;
                found = true;
                break;
            }
        }
        if(!found){
            delete [ ]matched;
            return false;
        }
    }
    delete []matched;
    
    return true;
}
int main (){
    char * text1=new char[256];
    char * text2 = new char [256];
    std::cout<<"text1:"<<std::endl;
    //std::cin.ignore();
    std::cin.getline(text1,256);
    std::cout<<"text2:"<<std::endl;
    //std::cin.ignore();
    std::cin.getline(text2,256);
    if(duplicates(text1,text2)){
        std::cout<<"the texts are duplicates";
    }
    else {
        std::cout<<"the texts are not duplicates!"<<std::endl;
    }
    delete [] text1;
    delete [] text2;
    return 0;
}